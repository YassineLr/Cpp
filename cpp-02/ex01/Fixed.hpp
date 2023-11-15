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
        float toInt(void) const;
};
# endif