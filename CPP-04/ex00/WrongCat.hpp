#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
        public :
        WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &WrongCat);
		~WrongCat();

        void makeSound() const;
};