/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:00:50 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/24 17:38:29 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (this->weapon == NULL || this->weapon->getType().empty())
		std::cout << this->name + " attacks with their hands\n";
	else
		std::cout << this->name + " attacks with their " + this->weapon->getType() + '\n';
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
