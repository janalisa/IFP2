//
// Created by sia on 5-7-18.
//
/*
#include <iostream>
#include <cmath>
#include "vektor.h"

using namespace std;

int main() {
// TH: wenn Du stdio.h includest, dann wird es C, bei C++ heißt die Funktionalitaet iostream

//#include<Hallo Torsten>
// TH: void greet() { std::cout << "Hallo Leonie" << std::endl;
//#vonvonvonvon

//this code is brought to you by PEPSI MAX




//The Enrichment Center is committed to the well being of all participants. Cake and grief counseling will be available at the conclusion of the test. Thank you for helping us help you help us all.  - GLaDOS



    //hier muss man die Platten konkret angeben

    //int n=10; //Unterteilung
    int l = 5; //laenge PLatte
    // int h=4; //hoehe PLatte
    int w = 100; //Kantenlaenge Wuerfel
    int i, j, i1, i2, j1, j2; //Laufindizes
    int x = 2; //naechste ecke am nullpunkt in x richtung
    int y1 = 3;
    int y2 = 6; //nachste ecke am nullpunkt in y richtung, v2>v1
    //  int z=4; //naechste ecke am nullpunkt in z richtung
    double rsqr; //Abstand segmente quadrat
    float d; //Abstand der PLatten
    double R; //Summe von rsqr fuer Superposition
    double G = 6.67408; //gravitationskonstante ohne POtentz
    double m = 7; // Massensegment der Platte
    double g; //Feld
    double eps = pow(10, -4); //epsilon


    //nur noch 2D

    //Koordinatensystem initialisieren

    double M[i][j];
    double X[i][j];
    double Y[i][j];
    double GX[i][j];
    double GY[i][j];
    double T[i][j];
    double Mag[i][j];


    //initialisieren Koordinatensystem
    // ALL the ARRAYS
    for (i = 0; i < w; i++) {
        for (j = 0; j < 100; j++) {
            M[i][j] = 0; //Masse also PLatten
            X[i][j] = 0; // x Komponente Vektor
            Y[i][j] = 0; //Y Komponente Vektor
            GX[i][j] = 0; //Feld X Komponente
            GY[i][j] = 0; //Feld Y KOmponente
            T[i][j] = 0; // Winkel zwischen X und Y komponente
            Mag[i][j] = 0; // Laenge Vektor
        }
    }
*/
    //Platten initialisierenn ist halt hsslicher

 /*   for(j=0; j<w; j++){
            if(j=y1 || j=y2){
                M[29][j] = 1;
                M[30][j] = 1;
                M[31][j] = 1;
                M[32][j] = 1;
                M[33][j] = 1;
                //////////////// 1
                M[34][j] = 2;
                M[35][j] = 2;
                M[36][j] = 2;
                M[37][j] = 2;
                M[38][j] = 2;
                /////////////////// 2
                M[39][j] = 3;
                M[40][j] = 3;
                M[41][j] = 3;
                M[42][j] = 3;
                M[43][j] = 3;
                ////////////////  3
                M[44][j] = 4;
                M[45][j] = 4;
                M[46][j] = 4;
                M[47][j] = 4;
                M[48][j] = 4;
                /////////////////  4
                M[49][j] = 5;
                M[50][j] = 5;
                M[51][j] = 5;
                M[52][j] = 5;
                M[52][j] = 5;
                //////////////////  5
                M[54][j] = 6;
                M[55][j] = 6;
                M[56][j] = 6;
                M[57][j] = 6;
                M[58][j] = 6;
                /////////////////////  6
                M[59][j] = 7;
                M[60][j] = 7;
                M[61][j] = 7;
                M[62][j] = 7;
                M[63][j] = 7;
                //////////////////  7
                M[64][j] = 8;
                M[65][j] = 8;
                M[66][j] = 8;
                M[67][j] = 8;
                M[68][j] = 8;
                //////////////////  8



            }
    }

*/

    //It is sometimes an appropriate response to reality to go insane. - Philip K. Dick

    //Alles ausrechnen
    for (i1 = 0; i1 < w / 2; i1++) {
        for (j1 = 0; j1 < w / 2; j1++) {
            for (j2 = 0; j2 < w; j2++) {
                if (j2 = y1) {
                    for (i2 = x - 1; i2 < x + l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]);
                        GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                        T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                        Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                    }
                }
                if (j2 = y2) {
                    for (i2 = x - 1; i2 < x + l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]);
                        GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                        T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                        Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                    }
                }
            }
        }
    }


    return 0;
}