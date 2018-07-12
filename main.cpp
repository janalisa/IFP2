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

//noooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo



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
    int x3, y3;


    //nur noch 2D

    //Koordinatensystem initialisieren

    double M[w][w];
    double X[w][w];
    double Y[w][w];
    double GX[w][w];
    double GY[w][w];
    double T[w][w];
    double Mag[w][w];
    double Cos[w][w];

    // Eingabeshit fragen, dann aber oben ab = rauskommenteirtn
 //     cout << "Wie lang soll die Platte sein?";
 //     scanf("%i", &l)
 //     cout << "Bei welchem X Wert beginnt die Platte?";
 //     scanf("%i", &x);
 //     cout << "Bei welchem Y Wert liegt die ertse Platte;"
 //     scanf("%i", &y1);
 //     cout << "Bei welchem Y Wert liegt die zweite Platte";
 //     scanf("%i", &y2);
 //     cout << "Wie gross ist die Unterteilung? Der Wert sollte grosser als X+laenge udn das groessere Y sein.";
 //     scanf("%i", &w);
//     cout << "y koordinate des startpunktes";
//     scanf("%i", &y3)
    //     cout << "x komponente des startpunktes";
    //     scanf("%i", &x3)



 /*
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




    //It is sometimes an appropriate response to reality to go insane. - Philip K. Dick

    //Alles ausrechnen


    // was will ich eigetnlich mit der Klasse?


    //Ding was durchfliegt, von links, betrifft nur die x komponente
//    double vx =7;
//    double vy =3;
//    double t=vx/l;
//    double F[w][w];
//    double mm = 9; // Masse vom Teilchen

// am anfang habe ihc GX und so geprinted und zwischendurch kamen Buchstaben? aber ka ob es wirklich GX war weil da noch anders zeug drinnnen war.
    for(i1=0; i1<w/2; i1++){
        for(j1=0; j1<w/2; j1++){
            for(j2=0; j2<w; j2++){
                if(j2=y1){
                    for(i2=x-1; i2<x+l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        if(X[i2][j2] !=0 && Y[i2][j2] !=0) {
                            GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]); //feld(i2,j2i2])
                            GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                            T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                            Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                            Cos[i2][j2] = acos(GX[i2][j2]/Mag[i2][j2]);
                            //F[i][j] = GX[i][j] * mm;
                            //cout << i2, j2;
                        }
                    }
                }
                if(j2=y2){
                    for(i2=x-1; i2<x+l; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        if(X[i2][j2] !=0 && Y[i2][j2] !=0) {
                            GX[i2][j2] = (G * M[i2][j2]) / (X[i2][j2] * X[i2][j2]);
                            GY[i2][j2] = (G * M[i2][j2]) / (Y[i2][j2] * Y[i2][j2]);
                            T[i2][j2] = atan(Y[i2][j2] / X[i2][j2]);
                            Mag[i2][j2] = sqrt(X[i2][j2] * X[i2][j2] + Y[i2][j2] * X[i2][j2]);
                            Cos[i2][j2] = acos(GX[i2][j2]/Mag[i2][j2]);
                            //cout << i2, j2;
                        }
                    }
                }
            }
        }
    }
*/



//ab hier lauft glaube ihc def was schief.

/*
// Spiegeln Betrag
        for(int k=0; k<w/2; k++){
            for(int l=0; l<w/2; l++){
                Mag[k][l] = Mag[k][l] + Mag[w-k][l] + Mag[k][w-l] + Mag[w-k][w-l];
            }
    }*/
/*
//Bild vllt vllt auch bullshit
//warum kommt kein Bild?

    TH2* h = new TH2F("h2", "Feldstaerke", w, 0, w, w, 0, w);
    for(i=0; i<w;i++){
        for(j=0; j<w; j++){
            h->SetBinContent(i,j, Mag[i][j]);
        }
    }
*/

// aber hier laeift es schief


// path
//haengt irgendwie davon ab wierum der array laeuft, wie geht das jetzt weiter?
/*
//    while(break){
            for(Y[x3][y3] != y1 && Y[x3][y3] != y2) {
                for (X[x3][y3] < x || X[x3][y3] > x + l - 1) {


                    if (X[x3][y3] > 0 && Y[x3][y3] > 0) {
                        x3 = x3 + 1;
                        y3 = y3 + 1;
                    }
                    if (X[x3][y3] > 0 && Y[x3][y3] < 0) {
                        x3 = x3 + 1;
                        y3 = y3 - 1;
                    }
                    if (X[x3][y3] < 0 && Y[x3][y3] > 0) {
                        x3 = x3 - 1;
                        y3 = y3 + 1;
                    }
                    if (X[x3][y3] < 0 && Y[x3][y3] < 0) {
                        x3 = x3 - 1;
                        y3 = y3 - 1;
                    }
                    if (X[x3][y3] == 0 && Y[x3][y3] > 0) {
                        x3 = x3;
                        y3 = y3 + 1;
                    }
                    if (X[x3][y3] == 0 && Y[x3][y3] < 0) {
                        x3 = x3;
                        y3 = y3 - 1;
                    }
                    if (X[x3][y3] == 0 && Y[x3][y3] == 0) {
                        x3 = x3;
                        y3 = y3;
                    }
                    if (X[x3][y3] > 0 && Y[x3][y3] == 0) {
                        x3 = x3 + 1;
                        y3 = y3;
                    }
                    if (X[x3][y3] < 0 && Y[x3][y3] == 0) {
                        x3 = x3 - 1;
                        y3 = y3;
                    }
                }
            }
*/


    //Koordinatensystem initialisieren inhomogen

    // warum ist hier w nicht declared????
    double M3[w][w];
    double X3[w][w];
    double Y3[w][w];
    double GX3[w][w];
    double GY3[w][w];
    double T3[w][w];
    double Mag3[w][w];
    double Cos3[w][w];


    //initialisieren Koordinatensystem nhomogen
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
            Cos3[i][j] = 0;
        }
    }

    //Platten initialisierenn ist halt hsslicher inhomogen

       for(j=0; j<w; j++){
               if(j==y2){
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
           if(j==y1){
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



// am anfang habe ihc GX und so geprinted und zwischendurch kamen Buchstaben? aber ka ob es wirklich GX war weil da noch anders zeug drinnnen war.

    //WARUM IST NICHTS DECLARED???????????????????????????????? ok irgendwie funktioniert das jetzt??????
    for(i1=0; i1<w; i1++){
        for(j1=0; j1<w; j1++){
            for(j2=0; j2<w; j2++){
                if(j2=y1){
                    for(i2=29; i2<69; i2++) {
                        X3[i2][j2] = i2 - i1;
                        Y3[i2][j2] = j2 - j1;
                        if(X3[i2][j2] !=0 && Y3[i2][j2] !=0) {
                            GX3[i2][j2] = (G * M3[i2][j2]) / (X3[i2][j2] * X3[i2][j2]); //feld(i2,j2i2])
                            GY3[i2][j2] = (G * M3[i2][j2]) / (Y3[i2][j2] * Y3[i2][j2]);
                            T3[i2][j2] = atan(Y3[i2][j2] / X3[i2][j2]);
                            Mag3[i2][j2] = sqrt(X3[i2][j2] * X3[i2][j2] + Y3[i2][j2] * X3[i2][j2]);
                            Cos3[i2][j2] = acos(GX[i2][j2]/Mag3[i2][j2]);
                            //F[i][j] = GX[i][j] * mm;
                            cout << i2, j2;
                        }
                    }
                }
                if(j2=y2){
                    for(i2=29; i2<69; i2++) {
                        X[i2][j2] = i2 - i1;
                        Y[i2][j2] = j2 - j1;
                        if(X3[i2][j2] !=0 && Y3[i2][j2] !=0) {
                            GX3[i2][j2] = (G * M3[i2][j2]) / (X3[i2][j2] * X3[i2][j2]);
                            GY3[i2][j2] = (G * M3[i2][j2]) / (Y3[i2][j2] * Y3[i2][j2]);
                            T3[i2][j2] = atan(Y3[i2][j2] / X3[i2][j2]);
                            Mag3[i2][j2] = sqrt(X3[i2][j2] * X3[i2][j2] + Y3[i2][j2] * X3[i2][j2]);
                            Cos3[i2][j2] = acos(GX[i2][j2]/Mag[i2][j2]);
                            cout << i2, j2;
                        }
                    }
                }
            }
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