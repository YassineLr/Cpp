/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:48:16 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 12:25:24 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
    private :
        Weapon      _weapon;
        std::string _name;
    public :
        HumanB(std::string name);
        void    attack();
        void    setWeapon(Weapon weapon);
};

#endif