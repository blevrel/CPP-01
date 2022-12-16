/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:48:42 by blevrel           #+#    #+#             */
/*   Updated: 2022/11/29 11:13:57 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	Harl
{

public:

	Harl(void);
	~Harl(void);
	void complain(std::string level);

private:

	void	default_complaint(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};
