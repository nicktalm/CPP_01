/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:40:37 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/23 15:08:12 by ntalmon          ###   ########.fr       */
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
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
