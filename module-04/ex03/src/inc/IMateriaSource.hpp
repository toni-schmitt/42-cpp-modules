/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:56:43 by tschmitt          #+#    #+#             */
/*   Updated: 2022/02/10 12:57:46 by tschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(___IMATERIASOURCE_HPP___)
#define ___IMATERIASOURCE_HPP___

#include <AMateria.hpp>

class IMateriaSource
{
public:
	/* Deconstructors */
	virtual ~IMateriaSource(){};

	/* Public Methods */
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif