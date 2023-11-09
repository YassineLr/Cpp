/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:37:41 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/05 12:43:22 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
    private :
        std::string _name;
        Weapon      &_weapon;
    public :
        HumanA(std::string name, Weapon &weapon);
        void    attack();
};

# endif