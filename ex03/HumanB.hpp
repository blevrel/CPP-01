/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:31:16 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/27 15:19:54 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
#define	HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	
public:

	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:

	Weapon		*weapon;
	std::string	name;

};

#endif
