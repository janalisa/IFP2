#include <iostream>
#include <cmath>
#include "vektor.h"

using namespace std;

int main() {
// TH: wenn Du stdio.h includest, dann wird es C, bei C++ heißt die Funktionalitaet iostream

//#include<Hallo Torsten>
// TH: void greet() { std::cout << "Hallo Leonie" << std::endl;
//#vonvonvonvon




    //int n=10; //Unterteilung
    int l=5; //laenge PLatte
   // int h=4; //hoehe PLatte
   // int w=100; //Kantenlaenge Wuerfel
    int i, j, k; //Laufindizes
    int x=2; //naechste ecke am nullpunkt in x richtung
    int y1=3;
    int y2=6; //nachste ecke am nullpunkt in y richtung, v2>v1
  //  int z=4; //naechste ecke am nullpunkt in z richtung
    double rsqr; //Abstand segmente quadrat
    float d; //Abstand der PLatten
    double R; //Summe von rsqr fuer Superposition
    double G=6.67408; //gravitationskonstante ohne POtentz
    double m= 7; // Massensegment der Platte
    double g; //Feld
    double eps = pow(10,-4); //epsilon


    //nur noch 2D

    //Koordinatensystem initialisieren

    double M[i][j];
    for(i=0; i<100; i++) {
        for (j = 0; j < 100; j++) {
            if (j == y1) {
                for (i >= x; i <= x + l; i++) {
                    M[i][j] = m;
                }
            }
            if (j == y2) {
                for (i >= x; i <= x + l; i++) {
                    M[i][j] = m;
                }
            }
        }

        //muss noch gucken was ich jetzt mache












        //hier kommt nur noch alter shit und return 0;

        /*  vektor ***A;
          A = new vektor**[100];

          double M[100][100][100];

          // Raum fr mAssen
          for(i=0; i<w; i++){
              A[i] = new vektor*[100];
              for(j=0; j<w; j++){
                  A[i][j]=new vektor[100];
                  for(k=0; k<w; k++){
                      M[i][j][k] = 0;
                      A[i][j][k]=vektor();
                  }
              }
          }

          //platten als masssenpunkte
          for(i=x; i<x+l; i++){
              for(k=z; k<z+h; z++){
                  if(j==y1){
                      M[i][j][k] = m;
                  }
                  if(j==y2){
                      M[i][j][k] = m;
                  }
              }
          }
      */

//leerem Raum initialisieren
        /* for(i=0; i<=w; i++){ // x Koordinate
             for(j=0; j<=w; j++){
                 for(k=0; k<=w; k++){
                     vektor

                 }
             }
         }*/


// Ausgabe
        /* for(k=0; k<=w; k++){ // z Koordinate
             for(j=0; j<=w; j++){
                 for(i=0; i<=w; i++){
                     cout << A[i][j][k] << " ";
                 }
                 cout << endl;
             }
             cout << "\n \n" << endl;
         } */
/*

//Platten in leerem Raum initialisieren
    for(i=x; i<=x+l; i++){
        for(k=z; k<=z+h; k++){
            A[i][0][k]=17;complex::complex() {
    real = 0;
    ima = 0;
}
            //A[i][y2][k]=M-2;
            cout << i << j;
        }
    }*/





/* //Ausgabe
    cout << "Nach Anlegen der Platten: \n" << endl;

    for(k=0; k<=w; k++){ // z Koordinate
        for(j=0; j<=w; j++){
            for(i=0; i<=w; i++){
                cout << A[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << "\n \n" << endl;
    }*/






/*
    for(k1=1; k1<=n; k1++){
        for(j1=1; j1<=n; j1++){
            for(i1=1; i1<=n; i1++){
                if(abs((w*j1/n)-v1) <eps){	//Richtig krasse abs
                    if((w*i1/n)>=u && (w*i1/n)<=u+a){
                        if((w*k1/n)>=t && (w*k1/n)<=t+b){
                            for(k2=1; k2<=n; k2++){
                                for(j2=1; j2<=n; j2++){
                                    for(i2=1; i2<=n; i2++){
                                        rsqr=(w*i1/n)*(w*i1/n)+(w*j1/n)*(w*j1/n)+(w*k1/n)*(w*k1/n);
                                        R=R+rsqr;
                                        //arrays und so
                                        //return R;
                                    }
                                }
                            }
                        }
                    }
                }
                if(abs((w*j1/n)-v2) <eps){
                    if((w*i1/n)>=u && (w*i1/n)<=u+a){
                        if((w*k1/n)>=t && (w*k1/n)<=t+b){
                            for(k2=1; k2<=n; k2++){
                                for(j2=1; j2<=n; j2++){
                                    for(i2=1; i2<=n; i2++){
                                        rsqr=(w*i1/n)*(w*i1/n)+(w*j1/n)*(w*j1/n)+(w*k1/n)*(w*k1/n);
                                        R=R+rsqr;
                                        //arrays und so
                                        //return R;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }///letzte Klammer


    g=G*M*(1/R)*pow(10, -11);

    std::cout <<"g="<< g << std::endl;

    //TH: wer int main sagt, muss auch return sagen



*/
        return 0;
    }