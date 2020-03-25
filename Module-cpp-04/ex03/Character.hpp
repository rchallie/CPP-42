/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/25 10:18:10 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// LIBS ========================================================================
# include "ICharacter.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class Character;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Character
{
    private:
        std::string     _name;
        AMateria*       _inv[4];

    public:
        // Coplien
        Character(std::string const & name);
        Character(const Character&);
        virtual ~Character();
        Character &operator=(const Character& op);

        // Getter - Setter
        std::string const & getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);

        // Additionnal
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif