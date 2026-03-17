/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:23:54 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 19:24:57 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
