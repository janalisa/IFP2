//
// Created by sia on 7-7-18.
//

#ifndef IFP_FELD_H
#define IFP_FELD_H



class feld{
//    int i,j;
    double X2[100][100], Y2[100][100];


public:
    feld();
    feld(double f);
    ~feld();

    void getvalue(double X, double Y);
    void setvalue(double X, double Y);

    //Berechnung Magnitude
    double mag();

};





#endif //IFP_FELD_H
