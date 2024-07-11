/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:45 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/10 16:51:55 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	// std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
