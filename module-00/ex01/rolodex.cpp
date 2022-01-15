/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:30:41 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 09:20:02 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rolodex.hpp"
#include <string>
#include <iostream>
#include <iomanip>

std::string GetStringFromStdin(std::istream &inStream)
{
	std::string input = "";
	inStream >> input;
	inStream.clear();
	inStream.ignore();
	return (input);
}

bool Contact::IsEmptyContact()
{
	if (this->mFirstName.empty() && this->mLastName.empty() \
	&& this->mNickName.empty() && this->mPhoneNbr.empty() \
	&& this->mDarkestSecret.empty())
		return (true);
	return (false);
}

void PhoneBook::Add()
{
	static int i = 0;

	std::cout << "Enter new Contact's Information" << std::endl;

	std::cout << "Enter Contact's First Name: ";
	this->mContacts[i].SetFirstName(GetStringFromStdin(std::cin));

	std::cout << "Enter Contact's Last Name: ";
	this->mContacts[i].SetLastName(GetStringFromStdin(std::cin));
	
	std::cout << "Enter Contact's Nick Name: ";
	this->mContacts[i].SetNickName(GetStringFromStdin(std::cin));

	std::cout << "Enter Contact's Phone Number: ";
	this->mContacts[i].SetPhoneNbr(GetStringFromStdin(std::cin));

	std::cout << "Enter Contact's Darkest Secret: ";
	this->mContacts[i].SetDarkestSecret(GetStringFromStdin(std::cin));

	std::cout << std::endl;

	i++;
	if (i == PhoneBook::mMaxContacts)
		i = 0;
}

void PhoneBook::Search()
{

	std::cout << std::setw(10) << "INDEX" << std::right << "|";
	std::cout << std::setw(10) << "FIRST" << std::right << "|";
	std::cout << std::setw(10) << "LAST" << std::right << "|";
	std::cout << std::setw(10) << "NICK" << std::right << "|";
	std::cout << std::endl;

	bool all_contacts_empty = true;

	for (int i = 0; i < PhoneBook::mMaxContacts; i++)
	{
		if (this->mContacts[i].IsEmptyContact())
			continue;
		all_contacts_empty = false;
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << this->mContacts[i].GetFirstName().substr(0, 10) << "|";
		std::cout << std::right << std::setw(10) << this->mContacts[i].GetLastName().substr(0, 10) << "|";
		std::cout << std::right << std::setw(10) << this->mContacts[i].GetNickName().substr(0, 10) << "|";
		std::cout << std::endl;
	}
	
	if (all_contacts_empty)
		return;

	int index;
	do
	{
		index = 0;
		std::cout << "Enter Index of Contact to see more Infomration\n" << "Or Enter -1 to exit SEARCH" << std::endl;
		std::cin >> index;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();	
		}

		if (index == -1)
			return;

		if (index <= 0 || index > PhoneBook::mMaxContacts || this->mContacts[index - 1].IsEmptyContact())
			std::cout << "Invalid Syntax, please try again" << std::endl;
		
	} while (index <= 0 || index >= PhoneBook::mMaxContacts || this->mContacts[index - 1].IsEmptyContact());
		
	index -= 1;

	std::cout << this->mContacts[index].GetFirstName() << std::endl;
	std::cout << this->mContacts[index].GetLastName() << std::endl;
	std::cout << this->mContacts[index].GetNickName() << std::endl;
	std::cout << this->mContacts[index].GetPhoneNbr() << std::endl;
	std::cout << this->mContacts[index].GetDarkestSecret() << std::endl;

	std::cout << "Press ENTER to continue..." << std::endl;
	std::cin.clear();
	std::cin.ignore();
	std::cin.get();
}

void PrintHeader()
{
	std::cout << "\x1B[2J\x1B[H";

	std::cout << "Welcome to your personal Rolodex Phone Book!" << std::endl;

	std::cout << "Aviable Commands:\n" 
		<< "\tADD - Adds a Contact to the Phone Book\n" 
		<< "\tSEARCH - Lists all Contacts of the Phone Book\n" 
		<< "\tEXIT - Exits the Phone Book" << std::endl;
}

int main(void)
{
	PhoneBook phone_book;


	std::string input = "";
	do
	{
		PrintHeader();

		std::cin >> input;

		if (input == "ADD")
			phone_book.Add();
		else if (input == "SEARCH")
			phone_book.Search();
		

	} while (input != "EXIT");

	return 0;
}
