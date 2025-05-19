//! \file main.cpp
//! \brief Esempio di utilizzo della classe Polynomial
//! \author Emanuele Negrino and Carlo Toscano
//! 

#include <iostream>
#include <cmath>

#include "CPolynomial.h"
#include "CPower.h"
#include "CLogarithmic.h"

using namespace std;

int main(void) {

    // --- Test della classe Polynomial ---
    double coeff1[] = { 0, 1, 2 }; // 2x^2 + 1x + 0
    
    // Costruzione di un polinomio p1
    Polynomial p1(coeff1, 3);
    cout << "p1: " << endl;
    p1.Dump();

    // Costruttore di copia
    Polynomial p2(p1);
    cout << "p2: " << endl;
    p2.Dump();

    // Assegnazione
    Polynomial p3;
    p3 = p1;
    cout << "p3: " << endl;
    p3.Dump();

    // Confronto tra polinomi
    if (p1 == p2) {
        cout << "p1 == p2" << endl;
    } else {
        cout << "p1 != p2" << endl;
    }

    // Modifica di p3 con nuovi coefficienti
    double coeff2[] = { 0, 1, 2, 3 }; // 3x^3 + 2x^2 + 1x + 0

    p3.SetPolynomial(coeff2, 4);
    cout << "p3: " << endl;
    p3.Dump();

    // Confronto dopo la modifica
    if (p1 == p3) {
        cout << "p1 == p3" << endl;
    } else {
        cout << "p1 != p3" << endl;
    }

    // Calcolo del valore del polinomio in un punto
    cout << "Valore di p1 a x=2: " << p1.GetValue(2) << endl;
    cout << "Valore di p3 a x=5: " << p3.GetValue(5) << endl;

    // --- Test della classe Power ---
    Power P1(2, -3);
    cout << "P1: " << endl;
    P1.Dump();

    // Costruttore di copia
    Power P2(P1);
    cout << "P2: " << endl;
    P2.Dump();

    // Assegnazione
    Power P3;
    P3 = P1;
    cout << "P3: " << endl;
    P3.Dump();

    // Confronto tra potenze
    if (P1 == P2) {
        cout << "P1 == P2" << endl;
    } else {
        cout << "P1 != P2" << endl;
    }

    // Modifica dei parametri di P3
    P3.SetPower(5, 6);
    cout << "P3: " << endl;
    P3.Dump();

    // Confronto dopo la modifica
    if (P1 == P3) {
        cout << "P1 == P3" << endl;
    } else {
        cout << "P1 != P3" << endl;
    }

    // Calcolo del valore della potenza in un punto
    cout << "Valore di P1 a x=7: " << P1.GetValue(7) << endl;
    cout << "Valore di P3 a x=10: " << P3.GetValue(10) << endl;

    // --- Test della classe Logarithmic ---
    Logarithmic L1(50, 2);
    cout << "L1: " << endl;
    L1.Dump();

    // Costruttore di copia
    Logarithmic L2(L1);
    cout << "L2: " << endl;
    L2.Dump();

    // Assegnazione
    Logarithmic L3;
    L3 = L1;
    cout << "L3: " << endl;
    L3.Dump();

    // Confronto tra logaritmi
    if (L1 == L2) {
        cout << "L1 == L2" << endl;
    } else {
        cout << "L1 != L2" << endl;
    }

    // Modifica dei parametri di L3
    L3.SetLogarithmic(10000, 10);
    cout << "L3: " << endl;
    L3.Dump();

    // Confronto dopo la modifica
    if (L1 == L3) {
        cout << "L1 == L3" << endl;
    } else {
        cout << "L1 != L3" << endl;
    }

    // Calcolo del valore del logaritmo in un punto
    cout << "Valore di L1 a x=40: " << L1.GetValue(40) << endl;
    cout << "Valore di L3 a x=100: " << L3.GetValue(100) << endl;

    cout << endl;
    cout << "-------- DECONSTRUCTORs --------"<< endl;

    return 0;
}
