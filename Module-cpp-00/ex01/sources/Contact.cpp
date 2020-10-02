/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/10/02 22:55:44 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Contact".
 */
Contact::Contact()
:
	_is_empty(true)
{}

/**
 * @brief Copy:
 * Copy the "Contact".
 * 
 * @param copy the "Contact" to copy.
 */
Contact::Contact(const Contact& copy)
:
	_first_name(copy._first_name),
	_last_name(copy._last_name),
	_nickname(copy._last_name),
	_login(copy._login),
	_postal_address(copy._postal_address),
	_email_address(copy._email_address),
	_phone_number(copy._phone_number),
	_birthday_date(copy._birthday_date),
	_favorite_meal(copy._favorite_meal),
	_underwear_color(copy._underwear_color),
	_darkest_secret(copy._darkest_secret),
	_is_empty(copy._is_empty)
{}

/**
 * @brief Destructor:
 * Called when the object "Contact" is delete
 */
Contact::~Contact() {}

Contact & Contact::operator=(const Contact& op)
{
	if (this == &op)
		return (*this); 
	this->_first_name = op._first_name;
	this->_last_name = op._last_name;
	this->_nickname = op._nickname;
	this->_login = op._login;
	this->_postal_address = op._postal_address;
	this->_email_address = op._email_address;
	this->_phone_number = op._phone_number;
	this->_birthday_date = op._birthday_date;
	this->_favorite_meal = op._favorite_meal;
	this->_underwear_color = op._underwear_color;
	this->_darkest_secret = op._darkest_secret;
	this->_is_empty = op._is_empty;
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/*
** @brief Set first name of the "Contact".
** 
** @param first_name.
** @return the first name of the "Contact".
*/
void	Contact::setFirstName(const std::string &first_name)
{ this->_first_name = first_name; }

/*
** @brief Set last name of the "Contact".
** 
** @param last_name.
** @return the last name of the "Contact".
*/
void	Contact::setLastName(const std::string &last_name)
{ this->_last_name = last_name; }

/*
** @brief Set nickname of the "Contact".
** 
** @param nickname.
** @return the nickname of the "Contact".
*/
void	Contact::setNickname(const std::string &nickname)
{ this->_nickname = nickname; }

/*
** @brief Set login of the "Contact".
** 
** @param login.
** @return the login of the "Contact".
*/
void	Contact::setLogin(const std::string &login)
{ this->_login = login; }

/*
** @brief Set postal address of the "Contact".
** 
** @param postal_address.
** @return the postal address of the "Contact".
*/
void	Contact::setPostalAddress(const std::string &postal_address)
{ this->_postal_address = postal_address; }

/*
** @brief Set email address of the "Contact".
** 
** @param email_address.
** @return the email address of the "Contact".
*/
void	Contact::setEmailAddress(const std::string &email_address)
{ this->_email_address = email_address; }

/*
** @brief Set phone number of the "Contact".
** 
** @param phone_number.
** @return the phone number of the "Contact".
*/
void	Contact::setPhoneNumber(const std::string &phone_number)
{ this->_phone_number = phone_number; }

/*
** @brief Set birthday date of the "Contact".
** 
** @param birthday_date.
** @return the birthday date of the "Contact".
*/
void	Contact::setBirthdayDate(const std::string &birthday_date)
{ this->_birthday_date = birthday_date; }

/*
** @brief Set favorite meal of the "Contact".
** 
** @param favorite_meal.
** @return the favorite meal of the "Contact".
*/
void    Contact::setFavoriteMeal(const std::string &favorite_meal)
{ this->_favorite_meal = favorite_meal; }

/*
** @brief Set underwear color of the "Contact".
** 
** @param underwear_color.
** @return the underwear color of the "Contact".
*/
void    Contact::setUnderwearColor(const std::string &underwear_color)
{ this->_underwear_color = underwear_color; }

/*
** @brief Set darkest secret of the "Contact".
** 
** @param darkest_secret.
** @return the darkest secret of the "Contact".
*/
void    Contact::setDarkestSecret(const std::string &darkest_secret)
{ this->_darkest_secret = darkest_secret; }

/*
** @brief Get first name of the "Contact".
** 
** @return the first name of the "Contact".
*/
const std::string    &Contact::getFirstName()
{ return (this->_first_name); }

/*
** @brief Get last name of the "Contact".
** 
** @return the last name of the "Contact".
*/
const std::string    &Contact::getLastName()
{ return (this->_last_name); }

/*
** @brief Get nickname of the "Contact".
** 
** @return the nickname of the "Contact".
*/
const std::string    &Contact::getNickname()
{ return (this->_nickname); }

/*
** @brief Get login of the "Contact".
** 
** @return the login of the "Contact".
*/
const std::string    &Contact::getLogin()
{ return (this->_login); }

/*
** @brief Get postal address of the "Contact".
** 
** @return the postal address of the "Contact".
*/
const std::string    &Contact::getPostalAddress()
{ return (this->_postal_address); }

/*
** @brief Get email address of the "Contact".
** 
** @return the email address of the "Contact".
*/
const std::string    &Contact::getEmailAdress()
{ return (this->_email_address); }

/*
** @brief Get phone number of the "Contact".
** 
** @return the phone number of the "Contact".
*/
const std::string    &Contact::getPhoneNumber()
{ return (this->_phone_number); }

/*
** @brief Get birthday date of the "Contact".
** 
** @return the birthday date of the "Contact".
*/
const std::string    &Contact::getBirthdayDate()
{ return (this->_birthday_date); }

/*
** @brief Get favorite meal of the "Contact".
** 
** @return the favorite meal of the "Contact".
*/
const std::string    &Contact::getFavoriteMeal()
{ return (this->_favorite_meal); }

/*
** @brief Get underwear color of the "Contact".
** 
** @return the underwear color of the "Contact".
*/
const std::string    &Contact::getUnderwearColor()
{ return (this->_underwear_color); }

/*
** @brief Get darkest secret of the "Contact".
** 
** @param darkest_secret.
** @return the darkest secret of the "Contact".
*/
const std::string    &Contact::getDarkestSecret()
{ return (this->_darkest_secret); }

// =============================================================================

// ADDITIONNAL =================================================================

/*
** @brief Setup the contact. Ask for informations
** about it, and set all contact attributes with
** the informations.
*/
void	Contact::setup()
{
	std::string infos_name[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"
	};

	std::string entry;
	for (int i = 0; i < 11; i++)
	{
		std::cout << infos_name[i] << " : ";
		std::getline(std::cin, entry);
		(i == 0) ? this->setFirstName(entry) : (void)0;
		(i == 1) ? this->setLastName(entry) : (void)0;
		(i == 2) ? this->setNickname(entry) : (void)0;
		(i == 3) ? this->setLogin(entry) : (void)0;
		(i == 4) ? this->setPostalAddress(entry) : (void)0;
		(i == 5) ? this->setEmailAddress(entry) : (void)0;
		(i == 6) ? this->setPhoneNumber(entry) : (void)0;
		(i == 7) ? this->setBirthdayDate(entry) : (void)0;
		(i == 8) ? this->setFavoriteMeal(entry) : (void)0;
		(i == 9) ? this->setUnderwearColor(entry) : (void)0;
		(i == 10) ? this->setDarkestSecret(entry) : (void)0;
	}
	this->_is_empty = false;
}

/*
** @brief Print contact informations (attributes).
*/
void	Contact::print_contact()
{
	std::string infos_name[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"
	};
	std::string infos[11] = {
		this->getFirstName(),
		this->getLastName(),
		this->getNickname(),
		this->getLogin(),
		this->getPostalAddress(),
		this->getEmailAdress(),
		this->getPhoneNumber(),
		this->getBirthdayDate(),
		this->getFavoriteMeal(),
		this->getUnderwearColor(),
		this->getDarkestSecret()

	};
	for (int i = 0; i < 11; i++)
		std::cout << infos_name[i] << " : " << infos[i] << std::endl;
}

/*
** @brief Give a boolean that contain
** is the contact was setuped or not.
**
** @return the bool.
*/
bool	Contact::empty()
{ return (this->_is_empty); }

/*
** @brief Cleal contact informations.
*/
void	Contact::clear()
{
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nickname.clear();
	this->_login.clear();
	this->_postal_address.clear();
	this->_email_address.clear();
	this->_phone_number.clear();
	this->_birthday_date.clear();
	this->_favorite_meal.clear();
	this->_underwear_color.clear();
	this->_darkest_secret.clear();
	this->_is_empty = true;
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
