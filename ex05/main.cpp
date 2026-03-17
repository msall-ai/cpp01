/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:02:57 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 22:09:07 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    std::cout << "=== Harl complains at DEBUG level ===" << std::endl;
    harl.complain("DEBUG");

    std::cout << std::endl << "=== Harl complains at INFO level ===" << std::endl;
    harl.complain("INFO");

    std::cout << std::endl << "=== Harl complains at WARNING level ===" << std::endl;
    harl.complain("WARNING");

    std::cout << std::endl << "=== Harl complains at ERROR level ===" << std::endl;
    harl.complain("ERROR");

    std::cout << std::endl << "=== Harl complains at UNKNOWN level ===" << std::endl;
    harl.complain("RANDOM");

    return 0;
}
