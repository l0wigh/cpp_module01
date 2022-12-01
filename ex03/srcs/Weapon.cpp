/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:30:55 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/01 16:31:04 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{
	this->type = "";
}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void)
{
	return this->type;
}