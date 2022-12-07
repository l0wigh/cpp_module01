/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:29:44 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/07 15:52:18 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
	std::cout << "\033[1;36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\033[0m" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "\033[1;35mI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\033[0m" << std::endl;
	return ;
}

void Harl::warning(void)
{
	std::cout << "\033[1;33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m" << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout << "\033[1;31mThis is unacceptable ! I want to speed to the manager now.\033[0m" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*array[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*array[i])();
	}
}
