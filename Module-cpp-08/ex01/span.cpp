/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 10:46:41 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Span".
 */
Span::Span(unsigned int const & N)
:
	_max_values(N)
{}

/**
 * @brief Copy:
 * Copy the "Span".
 * 
 * @param copy the "Span" to copy.
 */
Span::Span(const Span& copy)
:
	_max_values(copy._max_values),
	_values(copy._max_values)
{}

/**
 * @brief Destructor:
 * Called when the object "Bureaucrat" is delete
 */
Span::~Span() {}

Span & Span::operator=(const Span& op)
{
	if (this == &op)
		return (*this);
	this->_max_values = op._max_values;
	this->_values = op._values;
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================
// =============================================================================

// ADDITIONNAL =================================================================

/**
 * @brief Add integer to the span.
 * 
 * @param n the integer.
 * 
 * @throw if the span is full.
 */
void        Span::addNumber(int n)
{
	if (this->_values.size() < (unsigned long)this->_max_values)
		this->_values.push_back(n);
	else
		throw Span::Full();
	std::sort(this->_values.begin(), this->_values.end());
}

/**
 * @brief get the shortest span in "Span".
 * (Overkilled, not need min and min_one_more)
 * 
 * @throw if "Span" have not enough value to do
 * a span.
 * 
 * @return the shortest span. 
 */
long		Span::shortestSpan(void)
{
	if(this->_values.size() <= 1)
		throw Span::CantSpan();

	std::vector<int>::iterator min = std::min_element(this->_values.begin(), this->_values.end());
	std::vector<int>::iterator min_one_more = min + 1;

	long rtn = (long)(*min) - (long)(*min_one_more);

	return ((rtn < 0) ? (rtn * -1) : rtn);
}

/**
 * @brief get the longest span in "Span".
 * (Overkilled, not need min and max)
 * 
 * @throw if "Span" have not enough value to do
 * a span.
 * 
 * @return the longest span. 
 */
long		Span::longestSpan(void)
{
	if(this->_values.size() <= 1)
		throw Span::CantSpan();
	
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(this->_values.begin(), this->_values.end());
	max = std::max_element(this->_values.begin(), this->_values.end());

	long rtn = (long)(*min) - (long)(*max);

	return ((rtn < 0) ? (rtn * -1) : rtn);
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
