/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:52:45 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/11 12:50:18 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	Zombie	*horde;
	int		a = 6;
	
	horde = zombie->zombieHorde(a, "Zombie");
	for (int i = 0; i < a; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}