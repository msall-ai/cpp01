/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:40:26 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 21:33:59 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    Replacer replacer(argv[1], argv[2], argv[3]);
    if (!replacer.replace()) {
        return 1;
    }

    std::cout << "File successfully processed: " << argv[1] << ".replace" << std::endl;
    return 0;
}
