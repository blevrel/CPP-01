/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:42:08 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 16:05:05 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon club = Weapon("crude spiked club");

	HumanB bob("Bob");
	bob.setWeapon(club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	return (0);
}
