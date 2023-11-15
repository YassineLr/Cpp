# include "Fixed.hpp"

int main( void ) {
    // Fixed a;
    // Fixed b( a );
    // Fixed c;
    // c = b;
    // Fixed f( 1.23f );
    Fixed b( 10 );
    Fixed c( 12.75f );
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << b.toInt() << std::endl;
    std::cout << c.toFloat() << std::endl;
    return 0;
}