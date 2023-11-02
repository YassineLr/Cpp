/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:32:23 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 11:34:18 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {
    private :
        std::string _type;
    public :
        Weapon();
        Weapon(std::string );
        void            setType(std::string type);
        std::string     getType(void);
};

# endif