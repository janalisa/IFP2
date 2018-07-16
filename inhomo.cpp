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

    double M3[i][j];
    double X3[i][j];
    double Y3[i][j];
    double GX3[i][j];
    double GY3[i][j];
    double T3[i][j];
    double Mag3[i][j];


    //initialisieren Koordinatensystem
    // ALL the ARRAYS
    for (i = 0; i < w; i++) {
        for (j = 0; j < 100; j++) {
            M3[i][j] = 0; //Masse also PLatten
            X3[i][j] = 0; // x Komponente Vektor
            Y3[i][j] = 0; //Y Komponente Vektor
            GX3[i][j] = 0; //Feld X Komponente
            GY3[i][j] = 0; //Feld Y KOmponente
            T3[i][j] = 0; // Winkel zwischen X und Y komponente
            Mag3[i][j] = 0; // Laenge Vektor
        }
    }
*/
    //Platten initialisierenn ist halt hsslicher

 /*   for(j=0; j<w; j++){
            if(j=y1 || j=y2){
                M3[29][j] = 1;
                M3[30][j] = 1;
                M3[31][j] = 1;
                M3[32][j] = 1;
                M3[33][j] = 1;
                //////////////// 1
                M3[34][j] = 2;
                M3[35][j] = 2;
                M3[36][j] = 2;
                M3[37][j] = 2;
                M3[38][j] = 2;
                /////////////////// 2
                M3[39][j] = 3;
                M3[40][j] = 3;
                M3[41][j] = 3;
                M3[42][j] = 3;
                M3[43][j] = 3;
                ////////////////  3
                M3[44][j] = 4;
                M3[45][j] = 4;
                M3[46][j] = 4;
                M3[47][j] = 4;
                M3[48][j] = 4;
                /////////////////  4
                M3[49][j] = 5;
                M3[50][j] = 5;
                M3[51][j] = 5;
                M3[52][j] = 5;
                M3[52][j] = 5;
                //////////////////  5
                M3[54][j] = 6;
                M3[55][j] = 6;
                M3[56][j] = 6;
                M3[57][j] = 6;
                M3[58][j] = 6;
                /////////////////////  6
                M3[59][j] = 7;
                M3[60][j] = 7;
                M3[61][j] = 7;
                M3[62][j] = 7;
                M3[63][j] = 7;
                //////////////////  7
                M3[64][j] = 8;
                M3[65][j] = 8;
                M3[66][j] = 8;
                M3[67][j] = 8;
                M3[68][j] = 8;
                //////////////////  8



            }
    }

*/

    //It is sometimes an appropriate response to reality to go insane. - Philip K. Dick

  /*  //Alles ausrechnen
    for (i1 = 0; i1 < w; i1++) {
        for (j1 = 0; j1 < w; j1++) {
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




//Bild vllt vllt auch bullshit
//warum kommt kein Bild?

        TH2* h = new TH2F("h2", "Feldstaerke", w, 0, w, w, 0, w);
    for(i=0; i<w;i++){
        for(j=0; j<w; j++){
            h->SetBinContent(i,j, Mag[i][j]);
        }
    }





    return 0;
}*/