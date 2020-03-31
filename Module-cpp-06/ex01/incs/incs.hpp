/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:12:17 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/29 16:39:13 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INCS_HPP
# define INCS_HPP

// LIBS ========================================================================
# include <iostream>
# include <string>
// =============================================================================

// STRUCTS =====================================================================
struct Data { std::string s1; int n; std::string s2; };
// =============================================================================

// PROTOYPES ===================================================================
void *      serialize(void);
Data *      deserialize(void * raw);
// =============================================================================


#endif