/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:13:16 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/01 14:13:59 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif
