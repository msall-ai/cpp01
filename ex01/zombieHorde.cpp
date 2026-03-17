/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:41:23 by msall             #+#    #+#             */
/*   Updated: 2025/10/23 01:52:54 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if(N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N]; // alloc N zombies
    
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;// renvoie le premier zombie
}