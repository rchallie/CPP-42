/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/14 21:21:13 by rchallie         ###   ########.fr       */
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
        virtual ~MateriaSource();
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