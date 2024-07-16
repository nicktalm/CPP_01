/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:00:47 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/16 11:03:12 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->name + " attacks with their " + this->weapon.getType() + '\n';
}

void HumanA::setWeapon(Weapon &weapon) {
	this->weapon = weapon;
}
