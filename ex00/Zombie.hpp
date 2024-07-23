/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:46:08 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/19 11:06:04 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
