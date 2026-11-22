#include "ItalianChef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string chefName): Chef(chefName)
{
    cout << "ItalianChef constructor: " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destructor: " << name << endl;
}

string ItalianChef::getName()
{
    cout << "ItalianChef getName() call" << endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << "makes pasta" << endl;
}