/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:24:22 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/18 12:44:27 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zombie1 = newZombie("Zombie1");
	zombie1->announce();
	delete zombie1;
	randomChump("Zombie2");
	return (0);
}
