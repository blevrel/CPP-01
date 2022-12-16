/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:12:11 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 16:01:33 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(7, "hordeMember");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	horde[3].announce();
	horde[4].announce();
	horde[5].announce();
	horde[6].announce();
	delete	[] horde;
}
