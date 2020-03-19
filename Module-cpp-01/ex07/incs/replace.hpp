/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:39:02 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/16 12:23:17 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

// INCLUDE ====================================
# include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>
# include <string>
// ============================================

// DEFINE =====================================
#define SUCCESS                     0x0
#define ERROR                       0x1
#define ERROR_NBR_ARGS              0x2
#define ERROR_EMPTY_ARG             0x3
#define ERROR_FILE_DOES_NOT_EXIST   0x4
// ============================================

// PROTOTYPE ==================================
int     treat_error(int err_num);
// ============================================

#endif