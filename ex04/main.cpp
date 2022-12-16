/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:28:37 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 16:28:41 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <cstdlib>

std::string	get_fd_content(char	*filename)
{
	std::ifstream	fd_read;
	std::string		ret;

	fd_read.open(filename, std::fstream::in);
	if (fd_read.fail() == true)
	{
		std::cout << "Impossible to open \"" << filename << "\", make sure the file exists" << std::endl;
		exit(-1);
	}
	std::getline(fd_read, ret);
	fd_read.close();
	return (ret);
}

void	write_to_new_fd(std::string new_file, std::string buf)
{
	std::ofstream	fd_write;

	fd_write.open(new_file.c_str(), std::fstream::out);
	if (fd_write.fail() == true)
	{
		std::cout << "Impossible to open \"" << new_file << "\"" << std::endl;
		exit(-2);
	}
	if (!buf.empty())
		fd_write << buf << std::endl;
	fd_write.close();

}

std::string	replace_in_buf(std::string buf, char *s1, char *s2)
{
	std::string	str1;
	std::string	str2;
	std::size_t	pos;

	str1 = s1;
	str2 = s2;
	pos = 0;
	while (pos < buf.size())
	{
		pos = buf.find(s1);
		if (pos < buf.size())
		{
			buf.erase(pos, str1.size());
			buf.insert(pos, str2);
		}
	}
	return (buf);
}

int	main(int argc, char **argv)
{
	std::string		buf;
	std::string		new_file;

	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Invalid or missing arguments" << std::endl;
		return (-1);
	}
	buf = get_fd_content(argv[1]);
	buf = replace_in_buf(buf, argv[2], argv[3]);
	new_file = argv[1];
	new_file.append(".replace");
	write_to_new_fd(new_file, buf);
}
