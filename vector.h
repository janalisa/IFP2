//
// Created by sia on 28-6-18.
//

#ifndef IFP_VECTOR_H
#define IFP_VECTOR_H

class vektor{
    double a,b,c;

public:
    vektor();
    vektor(double x, double y, double z);
    ~vektor();

void setx(double a);
void sety(double b);
void setz(double c);

double phi();
double theta();
double len();

};


#endif //IFP_VECTOR_H


