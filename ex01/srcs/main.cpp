/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:13:05 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/01 14:16:48 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int n = 5;
	horde = zombieHorde(n, "Hugxef");
	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
