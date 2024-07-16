/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:00:50 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/16 13:03:08 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon((new Weapon(""))) {
	this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (this->weapon->getType() == "")
		std::cout << this->name + " attacks with their hands\n";
	else
		std::cout << this->name + " attacks with their " + this->weapon->getType() + '\n';
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
