/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:56 by lzi-xian          #+#    #+#             */
/*   Updated: 2024/02/03 17:20:12 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
	std::string 	type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal& operator=(const WrongAnimal &copy);
	virtual ~WrongAnimal();
	
	std::string getType() const;
	void	makeSound() const;
};

class WrongCat : public WrongAnimal{
public:
	WrongCat();
    WrongCat(const WrongCat &copy);
	WrongCat& operator=(const WrongCat &copy);
	~WrongCat();

	void	makeSound() const;
};

#endif
