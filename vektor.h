//
// Created by sia on 28-6-18.
//

#ifndef IFP_VECTOR_H
#define IFP_VECTOR_H


class vektor {

public:
    // Constructors
    vektor();
    vektor(double a, double b, double c);

    // Destructor
    ~vektor() {};

    // Methods
    double* get();
    double mag();

private:
    double v[3];

};

#endif //IFP_VECTOR_H


