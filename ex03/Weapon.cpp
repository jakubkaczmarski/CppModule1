/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:20:25 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/04/04 18:18:17 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    const std::string &reff = type;
    return reff;
}

void Weapon::setType(std::string &type)
{
    this->type = type;
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::Weapon()
{}