/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinelr <yassinelr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:53:03 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/20 01:18:43 by yassinelr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
    private :
        int _rawBits;
        static const int _FractionatBits = 8;
    public :
        Fixed();
        Fixed(int rawBits);
        Fixed(float rawBits);
        Fixed(const Fixed& obj);
        ~Fixed();
        Fixed& operator=(const Fixed& object);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator <<(std::ostream &os, const Fixed &fixed);

# endif