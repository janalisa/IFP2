//
// Created by sia on 28-6-18.
//

#ifndef IFP_VECTOR_H
#define IFP_VECTOR_H

class vector{
    double a,b,c;

public:
    vector();
    vector(double x, double y, double z);
    ~vector();

void setx(double a);
void sety(double b);
void setz(double c);

double phi();
double theta();
double len();

};


#endif //IFP_VECTOR_H


