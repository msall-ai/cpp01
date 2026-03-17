/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:40:36 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 21:31:46 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>

class Replacer {
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

public:
    Replacer(const std::string &filename, const std::string &s1, const std::string &s2);
    bool replace() const;

private:
    std::string replaceOccurrences(const std::string &content) const;
};

#endif
