/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:46:24 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/27 14:47:26 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	WEAPON_HPP
#define	WEAPON_HPP
#include <iostream>

class	Weapon
{

public:

	const std::string&	getType(void);
	void				setType(std::string type);
	Weapon(std::string);
	Weapon(void);
	~Weapon(void);
	
private:
	
	std::string	type;

};

#endif
