/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:39:36 by zminhas           #+#    #+#             */
/*   Updated: 2022/04/16 17:44:54 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace
{
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;

	int	_check_args(std::string file, std::string s1, std::string s2);


public:
    Replace(std::string filename, std::string s1, std::string s2);
    ~Replace();

	int	replace(void);
};

#endif