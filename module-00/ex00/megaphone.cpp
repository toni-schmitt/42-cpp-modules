/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:24:02 by toni              #+#    #+#             */
/*   Updated: 2022/01/12 17:41:48 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}

	for (int i = 1; i <= argc; i++)
	{
		for (int j = 0; argv[i] && argv[i][j]; j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << "\n";
	
	return 0;
}
