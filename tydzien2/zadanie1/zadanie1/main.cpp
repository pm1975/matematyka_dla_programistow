#include <iostream>
#include <cmath>
using namespace std;

int kwadrat(int x){
    return x * x;
}

int silnia(int x) {
    int result = 1;
    for (int i = 1; i<=x; i++) {
        result *=i;
    }
    return result;
}

void funkcjaKwadratowa(double a, double b, double c);

int main() {
    cout << "Kwadrat liczby 6 = " << kwadrat(6) << endl;
    cout << "Silnia liczby 6 = " << silnia(6) << endl;
    funkcjaKwadratowa(1, 5, 6);
    return 0;
}

void funkcjaKwadratowa(double a, double b, double c) {
    cout << "Funkcja kwadratowa: y = " << a << "x^2 + " << b << "x + " << c << endl;
    double delta = b*b - 4*a*c;
    cout << "Delta: " << delta << endl;
    if (delta > 0) {
        double x1 = (-b+sqrt(delta))/2*a;
        double x2 = (-b-sqrt(delta))/2*a;
        cout << "Miejsca zerowe funkcji: x1=" << x1 << ", x2=" << x2 << endl;
    } else if (delta == 0) {
        double x1 = -b/2*a;
        cout << "Miejsca zerowe funkcji: x1=x2=" << x1 << endl;
    } else {
        cout << "Brak miejsc zerowych funkcji." << endl;
    }
    if (a > 0)
        cout << "Ramiona skierowane w górę" << endl;
    else
        cout << "Ramiona skierowane w dół" << endl;
}
