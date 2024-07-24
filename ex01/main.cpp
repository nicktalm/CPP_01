/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:52:45 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/24 13:07:36 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		a = 6;
	Zombie	*horde = zombieHorde(a, "Zombie");;
	
	for (int i = 0; i < a; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}