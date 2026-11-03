#include <iostream>
#include <iomanip>  // Mahdollistaa desimaali muotoilun
#include <stdexcept> // Mahdollistaa  runtime_error :n

using namespace std;

// Funktio laskee kahden kokonaisluvun summan.
void calcSum(int a, int b)
{
    cout << "summa " << a + b << endl;
}

// Fuktio joka laskee ja tulostaa osamäärän
void calcDiv(int a, int b)
{if (b == 0) {
        cout << "Nolla ei voi olla jakaja" << endl;
    } else {
        cout << fixed << setprecision(2); // otetaan kaksi desimaalia 
        cout << "Osamaara " << (float)a / b << endl; 
    }
}

// Fucktio joka laskee ja palauttaa summan.
int retSum(int a, int b) {
    return a + b;
} 

// Fuktio joka laskee sekä palauttaa osamäärän
float retDiv( int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei voi olla nolla!");
    }
    return (float)a / b; // muutetaan  luku floatiksi jotta desimaalit säilyvät.
}

int main() {
    int a, b;
    float result;

    // kysymykset
    cout << "anna kokonaisluku a: ";
    cin >> a;
    cout << "anna kokonaisluku b: ";
    cin >> b;
    cout << endl;

    // Kutsutaan fuktiota jotka tulostaa suoraaa jotain
    calcSum(a, b);
    calcDiv(a, b);
    cout << endl;

    // summan tulostaminen retSum avulla
    int sumResult = retSum(a, b);
    cout << a << " + " << b << " = " << sumResult << endl;

    // Osamäärän tulostus (try-catche) rakenteessa.
    try {
        result = retDiv(a,b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error e) {
        cout << "Virhe:  " << e.what() << endl;
    }

    return 0;
}




