/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:51:12 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/04/04 14:12:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
// #include "HumanA.hpp"
#include <string>
#include <iostream>
void modifyString(std::string &str)
{
    str = "Something different";
}
int main()
{
    std::string name = "Marek";
    modifyString(name);
    std::cout << name;
}