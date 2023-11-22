/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 04:08:09 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 05:37:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
    protected :
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _damage;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &obj);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap &obj);
        std::string getName() const ;
        int getHitPoints() const ;
        int getEnergyPoints() const ;
        int getDamage() const;
        void setName(const std::string& newName);
        void setHitPoints(int newHitPoints);
        void setEnergyPoints(int newEnergyPoints);
        void setDamage(int newHealth);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void    printStatus(void);
        bool    checkStatus(void);
};
# endif
