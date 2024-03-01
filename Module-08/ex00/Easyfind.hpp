# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>

typename T::iterator easyfind(T& c, int n){
    typename T::iterator it = find(c.begin(), c.end(), n);
    return(it == c.end() ? throw(std::out_of_range("Element Not found")) : it);
}

# endif