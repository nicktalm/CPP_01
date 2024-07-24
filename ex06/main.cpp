/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:40:37 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/24 16:20:00 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	else
	{
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "Usage: ./HarlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
	}
	return (0);
}
