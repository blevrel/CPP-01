/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:50:06 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/29 11:21:12 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}


void Harl::complain(std::string level)
{
	int	nb;

	nb = 0;
	if (level.compare("debug") == 0)
		nb = 1;
	if (level.compare("info") == 0)
		nb = 2;
	if (level.compare("warning") == 0)
		nb = 3;
	if (level.compare("error") == 0)
		nb = 4;
	switch (nb)
	{
		default:
			this->default_complaint();
			break ;
		case 1:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->info();
			this->warning();
			this->error();
			break ;
		case 3:
			this->warning();
			this->error();
			break ;
		case 4:
			this->error();
			break ;
	}
}

void	Harl::default_complaint(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
	<< "You didn’t put enough bacon in my burger!" << std::endl
	<< "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
	<< "I’ve been coming for years whereas you started working here since last month" << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
