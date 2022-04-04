/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:51:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/04/04 18:18:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
class Weapon{
    private:
    std::string type;
    public:
    Weapon();
    Weapon(std::string);
    const std::string &getType();
    void setType(std::string &type);
};

#endif
