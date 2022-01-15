/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rolodex.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:25:05 by toni              #+#    #+#             */
/*   Updated: 2022/01/13 17:12:53 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROLODEX_HPP
#define ROLODEX_HPP

#include <string>

class Contact
{
private:
	std::string mFirstName;
	std::string mLastName;
	std::string mNickName;
	std::string mPhoneNbr;
	std::string mDarkestSecret;
public:

	bool IsEmptyContact();

	// GETTER
	std::string GetFirstName() { return mFirstName; }
	std::string GetLastName() { return mLastName; }
	std::string GetNickName() { return mNickName; }
	std::string GetPhoneNbr() { return mPhoneNbr; }
	std::string GetDarkestSecret() { return mDarkestSecret; }
	// SETTER
	void SetFirstName(std::string firstName) { mFirstName = firstName; }
	void SetLastName(std::string lastName) { mLastName = lastName; }
	void SetNickName(std::string nickName) { mNickName = nickName; }
	void SetPhoneNbr(std::string phoneNbr) { mPhoneNbr = phoneNbr; }
	void SetDarkestSecret(std::string darkestSecret) { mDarkestSecret = darkestSecret; }
};

class PhoneBook
{
private:
	static const int mMaxContacts = 8;
	Contact mContacts[mMaxContacts];
public:
	void Add();
	void Search();
};


#endif