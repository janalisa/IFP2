//
// Created by sia on 29-6-18.
//

#include "vektor.h"
#include <cmath>
//voll Objektorientiert
// ohne Objekte

vektor::vektor() {
    // Default Konstuktor .. alles Null
    v[0] = 0.;
    v[1] = 0.;
    v[2] = 0.;
}

vektor::vektor(double a, double b, double c) {
    v[0] = a;
    v[1] = b;
    v[2] = c;
}

double* vektor::get() {
    // getter
    return v;
}

double vektor::mag() {
    double mag = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    return mag;
}