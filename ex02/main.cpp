/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:32:28 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/11 15:38:06 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address in memory of the string: " << &str << std::endl;
	std::cout << "Address in memory of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address in memory of the stringREF: " << &stringREF << std::endl;
	std::cout << "Value of String: " << str << std::endl;
	std::cout << "Value of StringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of StringREF: " << stringREF << std::endl;
	return (0);
}
