#include <iostream>
#include <cmath>
//#include "vektor.h"
#include "TH2.h"
#include "feld.h"
using namespace std;

//#experimentelle informatik

int main() {
// TH: wenn Du stdio.h includest, dann wird es C, bei C++ heißt die Funktionalitaet iostream

//#include<Hallo Torsten>
// TH: void greet() { std::cout << "Hallo Leonie" << std::endl;
//#vonvonvonvon

//this code is brought to you by PEPSI MAX

//The Enrichment Center is committed to the well being of all participants. Cake and grief counseling will be available at the conclusion of the test. Thank you for helping us help you help us all.  - GLaDOS


    //int n=10; //Unterteilung
    int l =5; //laenge PLatte
   // int h=4; //hoehe PLatte
    int w =100; //Kantenlaenge Wuerfel
    int i, j, i1, i2, j1, j2; //Laufindizes
    int x =2; //naechste ecke am nullpunkt in x richtung
    int y1 =3;
    int y2 =6; //nachste ecke am nullpunkt in y richtung, v2>v1
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
    double X[i][j];
    double Y[i][j];
    double GX[i][j];
    double GY[i][j];
    double T[i][j];
    double Mag[i][j];

    // Eingabeshit fragen, dann aber oben ab = rauskommenteirtn
 //     cout << "Wie lang soll die Platte sein?";
 //     scanf("%i", &ll)
 //     cout << "Bei welchem X Wert beginnt die Platte?";
 //     scanf("%i", &x);
 //     cout << "Bei welchem Y Wert liegt die ertse Platte;"
 //     scanf("%i", &y1);
 //     cout << "Bei welchem Y Wert liegt die zweite Platte";
 //     scanf("%i", &y2);
 //     cout << "Wie gross ist die Unterteilung? Der Wert sollte grosser als X+laenge udn das groessere Y sein.";
 //     scanf("%i", &w);


    //initialisieren Koordinatensystem
    // ALL the ARRAYS
    for(i=0; i<w; i++) {
        for (j = 0; j < 100; j++) {
            M[i][j] = 0; //Masse also PLatten
            X[i][j] =0; // x Komponente Vektor
            Y[i][j] = 0; //Y Komponente Vektor
            GX[i][j] = 0; //Feld X Komponente
            GY[i][j] = 0; //Feld Y KOmponente
            T[i][j] = 0; // Winkel zwischen X und Y komponente
            Mag[i][j]  = 0; // Laenge Vektor

            cout << j; //haengt sich glaube ichhier schon auf
            cout << "\n";
        }
        //cout << i;
    }

        //muss noch gucken was ich jetzt mache

    for(i=x-1; i<x+l; i++){
        if(j=y1){
            M[i][j]=m;
        }
        if(j=y2){
            M[i][j]=m;
        }
    }
    cout << M;



    //It is sometimes an appropriate response to reality to go insane. - Philip K. Dick

    //Alles ausrechnen


    // was will ich eigetnlich mit der Klasse?


    //Ding was durchfliegt, von links, betrifft nur die x komponente
    double vx =7;
    double vy =3;
    double t=vx/l;
    double F[w][w];
    double mm = 9; // Masse vom Teilchen


    for(i1=0; i1<w/2; i1++){
        for(j1=0; j1<w/2; j1++){
            for(j2=0; j2<w; j2++){
                if(j2=y1){
                    for(i2=x-1; i2<x+l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        cout << X;
                        if(X[i2][j2] !=0 && Y[i2][j2] !=0) {
                            GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]); //feld(i2,j2i2])
                            GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                            T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                            Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                            F[i][j] = GX[i][j] * mm;
                            cout << GX;
                        }
                    }
                }
                if(j2=y2){
                    for(i2=x-1; i2<x+l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        cout << Y;
                        if(X[i2][j2] !=0 && Y[i2][j2] !=0) {
                            GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]);
                            GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                            T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                            Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                            cout << GY;
                        }
                    }
                }
            }
        }
    }


// Spiegeln Betrag
        for(int k=0; k<w/2; k++){
            for(int l=0; l<w/2; l++){
                Mag[k][l] = Mag[k][l] + Mag[w-k][l] + Mag[k][w-l] + Mag[w-k][w-l];
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