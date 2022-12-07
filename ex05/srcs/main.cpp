/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:48:12 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/07 15:49:14 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(void)
{
	Harl *harl = new Harl;

	harl->complain("DEBUG");
	harl->complain("INFO");
	harl->complain("WARNING");
	harl->complain("ERROR");
	return 0;
}
