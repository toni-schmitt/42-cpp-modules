/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:59:16 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/01 15:03:15 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>


/* Deconstructors */
AWrongAnimal::~AWrongAnimal()
{
	std::cout << "AWrongAnimal Deconstructor called" << std::endl;
}