/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvSca.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 10:46:41 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ConvSca.hpp"

// PROTOTYPES ==================================================================

static int ft_strlen(std::string const & s);

// =============================================================================

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "ConvSca".
 */
ConvSca::ConvSca() {}

/**
 * @brief Copy:
 * Copy the "ConvSca".
 * 
 * @param copy the "ConvSca" to copy.
 */
ConvSca::ConvSca(const ConvSca& copy) { (void)copy; }

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
ConvSca::~ConvSca() {}

ConvSca & ConvSca::operator=(const ConvSca& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Transform a string into a float to be treated after
 * by to<Type>().
 * 
 * If it's a valid(alone) char it will be transformed
 * to his ascii value, an : -inf, -inff, (+)inff, (+)inf, nanf or nan
 * will be transform to his equivalent in float to.
 * 
 * @param totreat the string to transform in float.
 * @return the float.
 */
float       ConvSca::toTreatable(std::string const & totreat)
{
	float to_treat;

	try
	{	
		if (ft_strlen(totreat) == 3
			&& totreat[0] == '\''
			&& totreat[2] == '\'')
			return (static_cast<float>(totreat[1]));
		to_treat = std::stof(totreat);
	}
	catch (std::exception & e) { throw ConvSca::NotConvertible(); }

	return (to_treat);
}

/**
 * @brief Cast a float into ... float.
 * 
 * @param f the float to cast.
 * @return the float.
 */
float		ConvSca::toFloat(float f)
{
	return (static_cast<float>(f));
}

/**
 * @brief Cast a float into an integer.
 * 
 * @param f the float to cast.
 * @return the integer.
 */
int		ConvSca::toInt(float f)
{
	int i = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	return (i);
}

/**
 * @brief Cast a float into a double.
 * 
 * @param f the float to cast.
 * @return the double.
 */
double       ConvSca::toDouble(float f)
{
	return (static_cast<double>(f));
}

/** 
 * @brief Cast a float into a char.
 * 
 * If the float is infinit or Not-A-Number, throw 
 * that is impossible. If the char is'nt printable,
 * throw that is non displayable.
 * 
 * @param f the float to cast.
 * @return the char.
 */
char		ConvSca::toChar(float f)
{
	char value = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Non displayable");
	return (value);
}

// =============================================================================

// EXCEPTIONS ==================================================================

/**
 * @brief Constructor:
 * The "NotConvertible".
 */
ConvSca::NotConvertible::NotConvertible() throw() {}

/**
 * @brief Copy:
 * Copy the "NotConvertible".
 * 
 * @param copy the "NotConvertible" to copy.
 */
ConvSca::NotConvertible::NotConvertible(const NotConvertible& copy) throw() { (void)copy; }

/**
 * @brief Destructor:
 * Called when the object "NotConvertible" is delete
 */
ConvSca::NotConvertible::~NotConvertible() throw() {}

ConvSca::NotConvertible & ConvSca::NotConvertible::operator=(const NotConvertible& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* ConvSca::NotConvertible::what() const throw() { return ("Invalid format or can't be converted."); }

// =============================================================================

// FUNCTIONS SUP ===============================================================

static int ft_strlen(std::string const & s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

// =============================================================================
