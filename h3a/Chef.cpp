#include "Chef.h"
#include <iostream>

using namespace std;
Chef::Chef(string chefName)
{
    name = chefName;
    cout << "chef constructor: " << name << endl;
}

Chef::~Chef()
{
    cout << "Chef destructor: " << name << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad " << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup " << endl;
}
