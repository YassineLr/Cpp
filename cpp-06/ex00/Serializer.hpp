# ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>

typedef struct t_data
{
    int _data;
} Data ;

class Serializer{
    private :
        Serializer();
        ~Serializer();
    public :
        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);
};


# endif