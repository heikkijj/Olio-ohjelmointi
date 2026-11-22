#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef // Inherits publicly from the Chef base class
{
public:
    ItalianChef(std::string chefName);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
