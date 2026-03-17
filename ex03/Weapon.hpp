/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msall <msall@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 02:13:53 by msall             #+#    #+#             */
/*   Updated: 2025/10/31 19:19:15 by msall            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP
#include<iostream>

class Weapon {
    private:
    std::string type;
    
    public:
   Weapon(const std::string& type);
   const std::string& getType() const;
   void setType(const std::string& newType);
};

#endif