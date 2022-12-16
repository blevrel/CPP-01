/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:09:20 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 15:26:35 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie0("Zombie 0");
	Zombie	zombie1("Zombie 1");
	Zombie	zombie2;
	Zombie	*zombie3 = newZombie("NewZombie");

	zombie0.announce();
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	randomChump("randomZombie");
	delete zombie3;
	return (0);
}
