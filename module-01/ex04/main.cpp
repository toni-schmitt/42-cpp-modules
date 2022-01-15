/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:30:01 by toni              #+#    #+#             */
/*   Updated: 2022/01/16 00:23:16 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static std::string sed_replace(std::string str, std::string to_replace, std::string replace_with)
{
	std::string replaced = str;
	size_t		pos;
	
	while ((pos = replaced.find(to_replace)) != std::string::npos)
	{
		replaced.erase(pos, to_replace.length());
		replaced.insert(pos, replace_with);
	}

	return (replaced);
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage:\n"
			<< "\t" << argv[0] << " <file_name> <string1> <string2>" << std::endl;
		return 1;
	}

	std::string file_name = argv[1], to_replace = argv[2], replace_with = argv[3];

	if (file_name.empty() || to_replace.empty() || replace_with.empty())
	{
		std::cout << "Empty string handed, aborting..." << std::endl;
		return 1;
	}

	std::ifstream in_stream;

	in_stream.open(file_name);
	if (!in_stream.is_open())
	{
		std::cout << "Error opening input file" << std::endl;
		return 1;
	}

	std::ofstream out_stream;

	out_stream.open(file_name.append(".replace"));
	if (!out_stream.is_open())
	{
		std::cout << "Error opening output file" << std::endl;
		return 1;
	}
	
	std::string read_line = "";
	while (getline(in_stream, read_line))
	{
		std::string replaced = sed_replace(read_line, to_replace, replace_with);
		if(!std::cin.eof())
			out_stream << replaced << std::endl;
	}

	in_stream.close();
	out_stream.close();

	return 0;
}
