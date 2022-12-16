/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:09:31 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/26 17:42:55 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	Zombie
{

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void		announce(void);

private:

	std::string	name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
