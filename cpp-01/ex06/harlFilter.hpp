/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:46:45 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 11:51:57 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARLFILTER_H
# define HARLFILTER_H
# include <iostream>

enum{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
};

class HarlFilter{
    private :
        std::string     levels[4];
        void            debug( void );
        void            info( void );
        void            warning( void );
        void            error( void );
        // typedef         void(Harl::*harlMemFunc)(void);
        // harlMemFunc     memFunc[4];
    public :
        void    complain(std::string level);
        HarlFilter();
        
};

# endif