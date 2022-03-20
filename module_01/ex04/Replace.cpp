/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:36:05 by zminhas           #+#    #+#             */
/*   Updated: 2022/03/20 17:18:37 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {}

Replace::~Replace() {}

int		Replace::_check_args(std::string file, std::string s1, std::string s2)
{
	if (file == "" || s1 == "" || s2 == "")
		return (1);
	std::ifstream	ifs(file);
	if (ifs.fail())
		return (1);
	ifs.close();
	return (0);
}

int	Replace::replace(void)
{
	if (_check_args(_filename, _s1, _s2))
		return (1);
	std::ifstream	ifs(_filename);
	std::ofstream	ofs(_filename + ".replace");
	std::string		read;
	while (getline(ifs, read))
	{
		std::size_t found = read.find(_s1);
		while (found != std::string::npos)
		{
			read.erase(found, _s1.length());
			read.insert(found, _s2);
			found = read.find(_s1);
		}
		ofs << read << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
