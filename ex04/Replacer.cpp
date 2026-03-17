/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:40:32 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 21:34:46 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <fstream>
#include <iostream>

Replacer::Replacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool Replacer::replace() const {
    if (_filename.empty() || _s1.empty()) {
        std::cerr << "Error: filename and s1 cannot be empty." << std::endl;
        return false;
    }

    std::ifstream infile(_filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: could not open input file: " << _filename << std::endl;
        return false;
    }

    std::string content((std::istreambuf_iterator<char>(infile)),
                        std::istreambuf_iterator<char>());
    infile.close();

    std::string replaced = replaceOccurrences(content);

    std::ofstream outfile((_filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: could not create output file." << std::endl;
        return false;
    }

    outfile << replaced;
    outfile.close();

    return true;
}

std::string Replacer::replaceOccurrences(const std::string &content) const {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(_s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);  // text before s1
        result.append(_s2);                        // replace s1 with s2
        pos = found + _s1.length();                // move past s1
    }

    result.append(content, pos, content.length() - pos);  // remaining text
    return result;
}
