#include <iostream>
#include <cmath>
//#include "vektor.h"
#include "TH2.h"
#include "TCanvas.h"
#include "feld.h"
using namespace std;

//#experimentelle informatik


/*double rk(double functi(double [], double [], int , double [] double []), int ti, int tf, int xi, int yi){
    double k1[4], k2[4], k3[4], k4[4];
    double h,t;
    h=tf-ti;
    t=ti;

    //k1 Berechnen
            functi(t, xi, b[4]) //was muss ihc hier eintippen?
            for( j=0; j<4;j++){
                k1[j]=h+b[j];
                a[j]=xi[j]+k1[j]/2;
                }

 //k2 Berechnen
            functi(t, xi, b[4]) //was muss ihc hier eintippen?
            for( j=0; j<4;j++){
                k2[j]=h+b[j];
                a[j]=xi[j]+k2[j]/2;
                }

     //k3 Berechnen
        functi(t, xi, b[4]) //was muss ihc hier eintippen?
        for( j=0; j<4;j++){
            k3[j]=h+b[j];
            a[j]=xi[j]+k3[j]/2;
            }


     //k4 Berechnen
    functi(t, xi, b[4]) //was muss ihc hier eintippen?
    for( j=0; j<4;j++){
        k4[j]=h+b[j];
        x[j] = xi[j] + k1[j]/6.0+k2[j]/3.0+k3[j]/3.0+k4[j]/6.0;
        }

}

*/


/* a[0]=x   b[0]=dx
 * a[1]=y   b[1]=dy
 * a[2]=dx  b[2]=ddxx
 * a[3]=dy  b[3]=ddyy
 * */
/*double functi(double a[4], double b[4], int w, double X[w][w], double Y[w][w]){ //welche davon brauche ich???
    b[0]=a[2];
    b[1]=a[3];

    b[2]=X[][];
    b[3]=Y[][];

}*/


// Diese Funktion erstellt den Passenden Kondensator
double kondensator(int v, /*int w,*/ int o, int q, int y1, int y2, int x, int l, double m){
    double M[w][w];

    for(int i=0; i<w; i++) {
        for (int j = 0; j < w; j++) {
            M[i][j] = 0;

        }
    }


    if(v==1){
        for(int i=x-1; i<x+l; i++){
            M[i][y1]=m;
            M[i][y2]=m;
        }

    }
    if(v==2){
                M[29][y2] = 1;
                M[30][y2] = 1;
                M[31][y2] = 1;
                M[32][y2] = 1;
                M[33][y2] = 1;
                //////////////// 1
                M[34][y2] = 2;
                M[35][y2] = 2;
                M[36][y2] = 2;
                M[37][y2] = 2;
                M[38][y2] = 2;
                /////////////////// 2
                M[39][y2] = 3;
                M[40][y2] = 3;
                M[41][y2] = 3;
                M[42][y2] = 3;
                M[43][y2] = 3;
                ////////////////  3
                M[44][y2] = 4;
                M[45][y2] = 4;
                M[46][y2] = 4;
                M[47][y2] = 4;
                M[48][y2] = 4;
                /////////////////  4
                M[49][y2] = 5;
                M[50][y2] = 5;
                M[51][y2] = 5;
                M[52][y2] = 5;
                M[52][y2] = 5;
                //////////////////  5
                M[54][y2] = 6;
                M[55][y2] = 6;
                M[56][y2] = 6;
                M[57][y2] = 6;
                M[58][y2] = 6;
                /////////////////////  6
                M[59][y2] = 7;
                M[60][y2] = 7;
                M[61][y2] = 7;
                M[62][y2] = 7;
                M[63][y2] = 7;
                //////////////////  7
                M[64][y2] = 8;
                M[65][y2] = 8;
                M[66][y2] = 8;
                M[67][y2] = 8;
                M[68][y2] = 8;
                //////////////////  8


                M[29][y1] = 1;
                M[30][y1] = 1;
                M[31][y1] = 1;
                M[32][y1] = 1;
                M[33][y1] = 1;
                //////////////// 1
                M[34][y1] = 2;
                M[35][y1] = 2;
                M[36][y1] = 2;
                M[37][y1] = 2;
                M[38][y1] = 2;
                /////////////////// 2
                M[39][y1] = 3;
                M[40][y1] = 3;
                M[41][y1] = 3;
                M[42][y1] = 3;
                M[43][y1] = 3;
                ////////////////  3
                M[44][y1] = 4;
                M[45][y1] = 4;
                M[46][y1] = 4;
                M[47][y1] = 4;
                M[48][y1] = 4;
                /////////////////  4
                M[49][y1] = 5;
                M[50][y1] = 5;
                M[51][y1] = 5;
                M[52][y1] = 5;
                M[52][y1] = 5;
                //////////////////  5
                M[54][y1] = 6;
                M[55][y1] = 6;
                M[56][y1] = 6;
                M[57][y1] = 6;
                M[58][y1] = 6;
                /////////////////////  6
                M[59][y1] = 7;
                M[60][y1] = 7;
                M[61][y1] = 7;
                M[62][y1] = 7;
                M[63][y1] = 7;
                //////////////////  7
                M[64][y1] = 8;
                M[65][y1] = 8;
                M[66][y1] = 8;
                M[67][y1] = 8;
                M[68][y1] = 8;
                //////////////////  8

    }
    if(v=3){ //Achteck
        M[20][20] = 1;
        M[21][20] = 1;
        M[22][20] = 1;
        M[23][20] = 1;
        M[24][21] = 1;

        M[25][22] = 2;
        M[26][23] = 2;
        M[26][24] = 2;
        M[26][25] = 2;
        M[26][26] = 2;

        M[25][27] = 3;
        M[24][28] = 3;
        M[23][29] = 3;
        M[22][29] = 3;
        M[21][29] = 3;
        ////////////////  3
        M[20][29] = 4;
        M[19][28] = 4;
        M[18][27] = 4;
        M[17][26] = 4;
        M[17][25] = 4;
        /////////////////  4
        M[17][24] = 5;
        M[17][23] = 5;
        M[18][22] = 5;
        M[19][21] = 5;

    }
    if(v==4){
        M[o][q]=m;
        M[y1][y2] =m;
        M[x][l] = m;

    }

   return M[][]; //Wie kriege ich M raus
}







int main() {


    int l; //=75; //laenge PLatte
   // int h=4; //hoehe PLatte
    int w; //=100; //Kantenlaenge Wuerfel
    int i, j, i1, i2, j1, j2; //Laufindizes
    int x; //=10; //naechste ecke am nullpunkt in x richtung
    int y1; //=30;
    int y2; //=60; //nachste ecke am nullpunkt in y richtung, v2>v1
  //  int z=4; //naechste ecke am nullpunkt in z richtung
    double rsqr; //Abstand segmente quadrat
    float d; //Abstand der PLatten
    double R; //Summe von rsqr fuer Superposition
    double G=6.67408; //gravitationskonstante ohne POtentz
    double m= 7; // Massensegment der Platte
    double g; //Feld
    double eps = pow(10,-4); //epsilon
    int x3, y3;
    int v;
    int q;
    int o;


    //nur noch 2D

    //Koordinatensystem initialisieren

    //double M[w][w];
    double X[w][w];
    double Y[w][w];
    double GX[w][w];
    double GY[w][w];
    double T[w][w];
    double Mag[w][w];
    double Cos[w][w];

    // Eingabeshit fragen, dann aber oben ab = rauskommenteirtn
    cout << "Fuer einen homogenen Kondensator bitte die 1 druecken, fuer einen inhomogenen Kondensator bitte die 2 druecken, fuer ein Achteck bitte die 3 druecken, fuer 3 Punkte bitte die 4 druecken."<< endl;
    scanf("%i", &v);
    cout << "Wie gross ist die Unterteilung? Der Wert sollte grosser als X+laenge und das groessere Y sein."<< endl;
    scanf("%i", &w);
    if(v==1){
        cout << "Wie lang soll die Platte sein?"<< endl;
        scanf("%i", &l);
        cout << "Bei welchem X Wert beginnt die Platte?"<< endl;
        scanf("%i", &x);
        cout << "Bei welchem Y Wert liegt die ertse Platte;"<< endl;
        scanf("%i", &y1);
        cout << "Bei welchem Y Wert liegt die zweite Platte"<< endl;
        scanf("%i", &y2);
        o=0;
        q=0;
        if(x+l>w || y1>w ||y2>w){
            cout<< "Idiot"<< endl;
        }

    }
    if(v==2){
        cout << "Hierfuer wurde ein Standdardkondensator erstellt, um mehr als den Ort der y komponenten der Kondensatoren einzustellen bitte nach Anleitung in den Programmcode tippen";
        cout << "Bei welchem Y Wert liegt die ertse Platte;"<< endl;
        scanf("%i", &y1);
        cout << "Bei welchem Y Wert liegt die zweite Platte"<< endl;
        scanf("%i", &y2);
        o=0;
        q=0;
        x=0;
        l=0;
        if( y1>w ||y2>w){
            cout<< "Idiot";
        }
    }
    if(v==3){
        cout << "Hierfuer wurde ein Standdardachteck erstellt, um mehr einzustellen bitte nach Anleitung in den Programmcode tippen"<< endl;
        o=0;
        q=0;
        y1=0;
        y2=0;
        x=0;
        l=0;
    }
    if(v==4){ //w, o, q, y1, y2, x, l,
        cout << "Was ist die x Koponente des ersten Punktes" << endl;
        scanf("%i", &o);
        cout << "Was ist die y Koponente des ersten Punktes"<< endl;
        scanf("%i", &q);
        cout << "Was ist die x Koponente des zweiten Punktes"<< endl;
        scanf("%i", &y1);
        cout << "Was ist die y Koponente des zweiten Punktes"<< endl;
        scanf("%i", &y2);
        cout << "Was ist die x Koponente des dritten Punktes"<< endl;
        scanf("%i", &x);
        cout << "Was ist die y Koponente des dritten Punktes"<< endl;
        scanf("%i", &l);
    }



 //    cout << "y koordinate des startpunktes";
 //    scanf("%i", &y3)
 //          cout << "x komponente des startpunktes";
 //        scanf("%i", &x3)




    //initialisieren Koordinatensystem
    // ALL the ARRAYS
   for(i=0; i<w; i++) {
        for (j = 0; j < w; j++) {
           // M[i][j] = 0; //Masse also PLatten
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

  /* for(i=x-1; i<x+l; i++){
            M[i][y1]=m;
            M[i][y2]=m;
    }
*/




    kondensator(v, w, o, q, y1, y2, x, l, m);

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
    for(i1=0; i1<w; i1++){
        for(j1=0; j1<w; j1++){

            if (M[i1][j1] != 0) continue;


            for(i2=0; i2<w; i2++){
                    for(j2=0; j2<w; j2++) {
                        if (M[i2][j2] == 0) //wie kriege ihc M hin?
                        {
                           double r = sqrt((i2-i1)*(i2-i1)+(j2-j1)*(j2-j1));
                           double force= M[i2][j2]*G/pow(r,3);
                           X[i2][j2] += force*(i2-i1);
                           Y[i2][j2] += force*(j2-j1);

                        }

                }
            }
        }
    }





    TH2* h = new TH2F("h2", "Feldstaerke", w, 0, w, w, 0, w);
    for(i=0; i<w;i++){
        for(j=0; j<w; j++){
            h->SetBinContent(i,j, sqrt(X[i][j]*X[i][j] + Y[i][j]*Y[i][j]));
            gStyle->SetPalette(ncolors == 1 && colors == 0,colors);
        }
    }
    TCanvas* c = new TCanvas("c","c",800,600);
    h->Draw("col4z");
    //h->Draw("ARR" );
    cout << "bla" << endl;
    c->SaveAs("feldstaerke.png");



//a[] auch hier definieren?


   // cout << "Was ist die x ort  des Teilchens"<< endl;
   // scanf("%i", &a[0]);
    // cout << "Was ist die y ort  des Teilchens"<< endl;
    // scanf("%i", &a[1]);
    // cout << "Was ist die x geschwindigkeit  des Teilchens"<< endl;
    // scanf("%i", &a[2]);
    // cout << "Was ist die y geschwindigkeit  des Teilchens"<< endl;
    // scanf("%i", &a[3]);y
























    return 0;
}


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
/*



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




*/




/*   X[i2][j2] = i2 - i1;
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
                    }*/










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