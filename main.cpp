#include <iostream>
#include <cmath>
//#include "vektor.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "feld.h"
#include "TGraph.h"
#include "TStyle.h"
#include "TMath.h"
#include "TH1F.h"
//#include "TH3F.h"

using namespace std;

//#experimentelle informatik
#define W 100 //Groesse des Koordinatensystems, brauche ich ueberall

// Diese Funktion erstellt den Passenden "Kondensator" aus 4 Auswahlmoeglichkeiten mit Anpassungsmoeglichkeiten
void kondensator(double M[W][W], int v, int o, int q, int y1, int y2, int x, int l, double m){

    //Koordinatensystem vorher ueberall auf Null setzen
    for(int i=0; i<W; i++) {
        for (int j = 0; j < W; j++) {
            M[i][j] = 0;

        }
    }

    //homogene Platten
    if(v==1){
        for(int i=x-1; i<x+l; i++){
            M[i][y1]=m;
            M[i][y2]=m;
        }

    }
    //2 vorgefertigte inhomogene Platten
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
    if(v==3){ //Achteck
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

        M[20][29] = 4;
        M[19][28] = 4;
        M[18][27] = 4;
        M[17][26] = 4;
        M[17][25] = 4;

        M[17][24] = 5;
        M[17][23] = 5;
        M[18][22] = 5;
        M[19][21] = 5;

    }
    //3 Punkte
    if(v==4){
        M[o][q]=m;
        M[y1][y2] =m;
        M[x][l] = m;

    }

   //Wie kriege ich M raus
}







int main() {


    int l;
    int i, j, i1, i2, j1, j2; //Laufindizes
    int x; //=10; //naechste ecke am nullpunkt in x richtung
    int y1; //=30;
    int y2; //=60; //nachste ecke am nullpunkt in y richtung, v2>v1

    double G=6.67408; //gravitationskonstante ohne POtentz
    double m//= 7; // Massensegment der Platte

    int v;
    int q;
    int o;




    //Koordinatensystem initialisieren

    double M[W][W]; //wo die masse ist
    double X[W][W]; //x Komponenten Kraft/Feld
    double Y[W][W]; //y komponente Kraft/Feld


    // Eingaben um zu entscheiden welcher "Kondensator" benutzt wird, hierbei bitte Hirn einschalten und #Variablenrecycling
    cout << "Fuer einen homogenen Kondensator bitte die 1 druecken, fuer einen inhomogenen Kondensator bitte die 2 druecken, fuer ein Achteck bitte die 3 druecken, fuer 3 Punkte bitte die 4 druecken."<< endl;
    scanf("%i", &v);

    //cout << "Wie gross ist die Unterteilung? Der Wert sollte grosser als X+laenge und das groessere Y sein."<< endl;
  //  scanf("%i", &w);
    if(v==1){
        cout << "Wie lang soll die Platte sein?"<< endl;
        scanf("%i", &l);
        cout << "Bei welchem X Wert beginnt die Platte?"<< endl;
        scanf("%i", &x);
        cout << "Bei welchem Y Wert liegt die ertse Platte;"<< endl;
        scanf("%i", &y1);
        cout << "Bei welchem Y Wert liegt die zweite Platte"<< endl;
        scanf("%i", &y2);
        cout << "Was ist die Masse eines unterteilungsstueckes?"<< endl;
        scanf("%i", &m);
        o=0;
        q=0;
        if(x+l>W || y1>W ||y2>W){
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
        if( y1>W ||y2>W){
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
    if(v==4){ //W, o, q, y1, y2, x, l,
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
        cout << "Was sind die Massen der Punkte?"<< endl; //Immer die gleiche Masse
        scanf("%i", &m);
    }



    //initialisieren/Nullsetzen Koordinatensysteme
   for(i=0; i<W; i++) {
        for (j = 0; j < W; j++) {
            X[i][j] =0; // x Komponente Vektor
            Y[i][j] = 0; //Y Komponente Vektor
        }
    }


    //Aufruf der Kondensatorfunktion um die Massen im Koordinatensysyem zu erhalten
    kondensator(M, v, /*w,*/ o, q, y1, y2, x, l, m);



// Berechnung der Kraft/des Feldes
    for(i1=0; i1<W; i1++){
        for(j1=0; j1<W; j1++){
            cout<< M[i1][j1];
            if (M[i1][j1] != 0) {


                for (i2 = 0; i2 < W; i2++) {
                    for (j2 = 0; j2 < W; j2++) {
                        if (M[i2][j2] == 0)
                        {
                            double r = sqrt((i2 - i1) * (i2 - i1) + (j2 - j1) * (j2 - j1));
                            double force = M[i1][j1] * G / pow(r, 3);
                            X[i2][j2] += force * (i2 - i1);
                            Y[i2][j2] += force * (j2 - j1);

                        }

                    }
                }
            }
        }
    }


    //Ausgabe des Betrages des Feldes als Bild
    TCanvas *c = new TCanvas("c","c",800,600);
    TH2D *h = new TH2D("h", "Feldstaerke", 100 , 0., 99., 100, 0., 99.);
    for(i=1; i<=W;i++){
        for(j=1; j<=W; j++){
            h->SetBinContent(i,j, (double) sqrt(X[i][j]*X[i][j] + Y[i][j]*Y[i][j]));

        }
    }
    h->SetEntries(1);
    h->Draw("ACP");
    c->Update();
    cout << "bla" << endl;
    c->SaveAs("feldstaerke.png");


    // Ein Teilchen wird durch das Koordinaten sytem geschossen. Hier  wird nach genauerem gefragt.
    int xi,yi;
    double vx,vy,xx,yy;
    int t;
    cout << "Wie lange soll das Teilchen fliegen?"<< endl;
    scanf("%i", &t);

     cout << "Was ist die x ort  des Teilchens"<< endl;
     scanf("%d", &xi);
     cout << "Was ist die y ort  des Teilchens"<< endl;
     scanf("%d", &yi);
     cout << "Was ist die x geschwindigkeit  des Teilchens"<< endl;
     scanf("%lf", &vx);
     cout << "Was ist die y geschwindigkeit  des Teilchens"<< endl;
     scanf("%lf", &vy);


    Int_t tt=t;
    Double_t rootx[tt], rooty[tt];
    //Berechnung der Punkte wo sich das Teilchen befindet
    rootx[0]=xi+vx;
    rooty[0]=yi+vy;
    for(i=1; i<=t; i++){
        //if (M[xi][yi] != 0) continue;
        //if (xi>W || xi< 0 ||yi<0 || yi>W) break;
        //if(xi>=0 && xi<=W &&yi>=0 && yi<=W){
            rootx[i]=rootx[i-1]+0.5*X[(int)rootx[i-1]][(int)rooty[i-1]]*1*1;
            rooty[i]=rooty[i-1]+0.5*Y[(int)rootx[i-1]][(int)rooty[i-1]]*1*1;
            if (rootx[i]>=W) break;
            if (rooty[i]>=W) break;
            if (rootx[i]<0) break;
            if (rooty[i]<0) break;
/*            xx=xi+vx*1+0.5*X[xi][yi]*1*1;
            yy=yi+vy*1+0.5*Y[xi][yi]*1*1;
            xi=(int)ceil(xx);
            yi=(int)ceil(yy);
            vx=vx+X[xi][yi];
            vy=vy+Y[xi][yi];
            rootx[i]=xx;
            rooty[i]=yy;*/
        //}
       /* else {
            cout << "hallo" << endl;
        }*/
    }
    //Bild mit den Punkten wo sich das Teilchen befindet
    TCanvas *c2 = new TCanvas("c2","c2",800,600);
    c2->cd();
    TGraph *h2 = new TGraph( 100 , rootx, rooty);
    h2->SetMarkerStyle(6);
    /*for(i=1; i<=W;i++){
            cout << "x="<<rootx[i] << "  y="<<rooty[i] << endl;
            h2->Fill(rootx[i], rooty[i]);


    }*/
    //h->SetEntries(1);
    h2->Draw();
    c2->Update();
    //h->Draw("ARR" );
    cout << "bla" << endl;
    c2->SaveAs("teilchen.png");



    //EEEEEEEEEEEENDEEEEEEEEEE
    return 0;
}


