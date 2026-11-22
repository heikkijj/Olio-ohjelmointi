#include <iostream>
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "- Chef object -" << endl;
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << endl;

    cout <<  "- ItalianChef object -" << endl;
    ItalianChef italianChef("anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    cout << "nimi getName()-method: " << italianChef.getName() << endl;

    cout << endl;

    return 0;


}
