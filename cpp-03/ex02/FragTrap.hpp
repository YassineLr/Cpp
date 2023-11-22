/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:51:12 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 05:51:13 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &obj);
        ~FragTrap();
        FragTrap& operator=(FragTrap &obj);
        void attack(const std::string& target);
        void printStatus();
        void highFivesGuys(void);
};
#endif