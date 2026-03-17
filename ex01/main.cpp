/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:45:57 by msall             #+#    #+#             */
/*   Updated: 2025/10/23 01:54:37 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 8;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    if(!horde) {
        std::cout << "Invalid horde size!" << std::endl;
        return 1;
    }
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde; //destruct
    return 0;
}