/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:38:22 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 16:08:58 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : new_weapon(weapon), new_name(name)
{
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor called" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->new_name << " attacks with their " << this->new_weapon.getType() << std::endl;
}
