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
}

/**
 * @brief get the shortest span in "Span".
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

	std::vector<int>::iterator itlong = this->_values.begin();
	std::vector<int>::iterator itshort;

	int		final_inited = 0;

	long	final_shortest;
	long	tmp_shortest;

	for (; itlong != this->_values.end(); itlong++)
	{
		itshort = this->_values.begin();
		for(; itshort != this->_values.end(); itshort++)
		{
			if (itshort != itlong)
			{
				tmp_shortest = (long)*itlong - (long)*itshort;
				if (tmp_shortest < 0)
					tmp_shortest *= -1;
				if (final_inited == 0)
				{
					final_inited = 1;
					final_shortest = tmp_shortest;
				}
				else if (tmp_shortest < final_shortest)
					final_shortest = tmp_shortest;
			}
		}
	}
	return (final_shortest);
}

long		Span::longestSpan(void)
{
	if(this->_values.size() <= 1)
		throw Span::CantSpan();
	
	std::vector<int>::iterator itlong = this->_values.begin();
	std::vector<int>::iterator itshort;

	long	final_longest = 0;
	long	tmp_longest;

	for (; itlong != this->_values.end(); itlong++)
	{
		itshort = this->_values.begin();
		for(; itshort != this->_values.end(); itshort++)
		{
			if (itshort != itlong)
			{
				tmp_longest = (long)*itlong - (long)*itshort;
				if (tmp_longest < 0)
					tmp_longest *= -1;
				if (tmp_longest > final_longest)
					final_longest = tmp_longest;
			}
		}
	}
	return (final_longest);
}

// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================
