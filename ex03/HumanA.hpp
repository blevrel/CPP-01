/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:35:03 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/27 14:48:04 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);

private:

	Weapon		&new_weapon;
	std::string	new_name;
};

#endif
