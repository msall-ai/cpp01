/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:38:23 by msall             #+#    #+#             */
/*   Updated: 2025/10/23 00:51:06 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* z1 = newZombie("HeapZombie");
    z1->announce();
    delete z1;
    
    randomChump("StackZombie"); // detruit automatiquement a la fin
    
    return 0;
}
