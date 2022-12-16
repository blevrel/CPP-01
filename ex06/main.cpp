/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:14:15 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/29 10:37:40 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;

	if (argc != 2)
	{
		std::cout << "Usage : arg1 = level of complaint" << std::endl;
		return (-1);
	}
	level = argv[1];
	harl.complain(level);
	return (0);
}
