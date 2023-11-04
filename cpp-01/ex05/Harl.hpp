/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:45 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 11:13:56 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl{
    private :
        std::string     levels[4];
        void            debug( void );
        void            info( void );
        void            warning( void );
        void            error( void );
        typedef         void(Harl::*harlMemFunc)(void);
        harlMemFunc     memFunc[4];
    public :
        void    complain(std::string level);
        Harl();
        
};

# endif