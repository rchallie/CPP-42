/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/25 10:18:10 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

// LIBS ========================================================================
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class MateriaSource;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       _templates[4];

    public:
        // Coplien
        MateriaSource();
        MateriaSource(const MateriaSource&);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource& op);

        // Getter - Setter

        // Additionnal
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif