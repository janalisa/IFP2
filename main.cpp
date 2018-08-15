#include <iostream>
#include <cmath>
//#include "vektor.h"
//#include "TH2D.h"
//#include "TCanvas.h"
//#include "feld.h"
//#include "TGraph.h"
//#include "TStyle.h"
//#include "TMath.h"
//#include "TH1F.h"
//#include "TH3F.h"

using namespace std;

//neu und in 3D
double M[100][100][100];

void platten(int lx, int ly, int z1, int z2, int x, int y, double m, double M[100][100][100]){
    for(int i=x; i<x+lx; i++){
        for(int j=y; j<ly+y; j++){
            M[i][j][z1]=m;
            M[i][j][z2]=m;
        }
    }
};




int main(){


    double G[100][100][100][3];
    int lx, ly;
    int z1, z2;
    int x, y;
    double m;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            for(int k=0; k<100; k++){
                M[i][j][k] =0;
                for(int f=0; f<3; f++){
                    G[i][j][k][f]=0;
                }
            }
        }
    }



    cout << "Was ist die Laenge der Platte in x - Richtung"<< endl;
    scanf("%i", &lx);
    cout << "Was ist die Laenge der Platte in y - Richtung"<< endl;
    scanf("%i", &ly);
    cout << "Bei welchem X Wert beginnt die Platte?"<< endl;
    scanf("%i", &x);
    cout << "Bei welchem Y Wert beginnt die Platte?"<< endl;
    scanf("%i", &y);
    cout << "Bei welchem Z Wert liegt die erste Platte"<< endl;
    scanf("%i", &z1);
    cout << "Bei welchem Z Wert liegt die zweite Platte"<< endl;
    scanf("%i", &z2);
    cout << "Was ist die Masse eines Unterteilungsstueckes?"<< endl;
    scanf("%lf", &m);

    platten(lx, ly, z1, z2, x, y, m, M);



    return 0;
}





































































//altes Programm

/*//#experimentelle informatik
#define W 100 //Groesse des Koordinatensystems, brauche ich ueberall, im Zweifel hier aendern

// Diese Funktion erstellt den passenden "Kondensator" aus 4 Auswahlmoeglichkeiten mit Anpassungsmoeglichkeiten
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


}







int main() {


    int l;
    int i, j, i1, i2, j1, j2; //Laufindizes
    int x; //=10; //naechste ecke am nullpunkt in x richtung
    int y1; //=30;
    int y2; //=60; //nachste ecke am nullpunkt in y richtung, v2>v1

    double G=6.67408; //gravitationskonstante ohne POtentz
    double m;//= 7; // Massensegment der Platte

    int v; //fuer die Abfrage
    int q; //fuer die Abfrage
    int o; //fuer die Abfrage




    //Koordinatensystem initialisieren

    double M[W][W]; //wo die Masse ist im Koordinatensystem
    double X[W][W]; //x Komponenten Kraft/Feld
    double Y[W][W]; //y komponente Kraft/Feld


    // Eingaben um zu entscheiden welcher "Kondensator" benutzt wird, hierbei bitte Hirn einschalten und #Variablenrecycling
    cout << "Fuer einen homogenen Kondensator bitte die 1 druecken, fuer einen inhomogenen Kondensator bitte die 2 druecken, fuer ein Achteck bitte die 3 druecken, fuer 3 Punkte bitte die 4 druecken."<< endl;
    scanf("%i", &v);


    if(v==1){
        cout << "Wie lang soll die Platte sein?"<< endl;
        scanf("%i", &l);
        cout << "Bei welchem X Wert beginnt die Platte?"<< endl;
        scanf("%i", &x);
        cout << "Bei welchem Y Wert liegt die erste Platte;"<< endl;
        scanf("%i", &y1);
        cout << "Bei welchem Y Wert liegt die zweite Platte"<< endl;
        scanf("%i", &y2);
        cout << "Was ist die Masse eines Unterteilungsstueckes?"<< endl;
        scanf("%i", &m);
        o=0;
        q=0;
        if(x+l>W || y1>W ||y2>W){
            cout<< "Idiot"<< endl;
        }

    }
    if(v==2){
        cout << "Hierfuer wurde ein Standdardkondensator erstellt, um mehr als den Ort der y komponenten der Kondensatoren einzustellen bitte nach Anleitung in den Programmcode tippen" << endl;
        cout << "Bei welchem Y Wert liegt die erste Platte;"<< endl;
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
        cout << "Was ist die x Komponente des ersten Punktes" << endl;
        scanf("%i", &o);
        cout << "Was ist die y Komponente des ersten Punktes"<< endl;
        scanf("%i", &q);
        cout << "Was ist die x Komponente des zweiten Punktes"<< endl;
        scanf("%i", &y1);
        cout << "Was ist die y Komponente des zweiten Punktes"<< endl;
        scanf("%i", &y2);
        cout << "Was ist die x Komponente des dritten Punktes"<< endl;
        scanf("%i", &x);
        cout << "Was ist die y Komponente des dritten Punktes"<< endl;
        scanf("%i", &l);
        cout << "Was sind die Massen der Punkte?"<< endl; //Immer die gleiche Masse
        scanf("%i", &m);
    }



    //Initialisieren/Nullsetzen Koordinatensysteme
   for(i=0; i<W; i++) {
        for (j = 0; j < W; j++) {
            X[i][j] =0; // x Komponente Vektor
            Y[i][j] = 0; //Y Komponente Vektor
        }
    }


    //Aufruf der Kondensatorfunktion um die Massen im Koordinatensysyem zu erhalten
    kondensator(M, v, o, q, y1, y2, x, l, m);



// Berechnung der Kraft/des Feldes
    for(i1=0; i1<W; i1++){
        for(j1=0; j1<W; j1++){
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
    c->SaveAs("feldstaerke.png");


    // Ein Teilchen wird durch das Koordinatensytem geschossen. Hier  wird nach genauerem gefragt.
    int xi,yi;
    double vx,vy,xx,yy;
    int t;
    cout << "Wie lange soll das Teilchen fliegen?"<< endl;
    scanf("%i", &t);

     cout << "Was ist die x Ort  des Teilchens"<< endl;
     scanf("%d", &xi);
     cout << "Was ist die y Ort  des Teilchens"<< endl;
     scanf("%d", &yi);
     cout << "Was ist die x Geschwindigkeit  des Teilchens"<< endl;
     scanf("%lf", &vx);
     cout << "Was ist die y Geschwindigkeit  des Teilchens"<< endl;
     scanf("%lf", &vy);


    Int_t tt=t;
    Double_t rootx[tt], rooty[tt];
    //Berechnung der Punkte wo sich das Teilchen befindet
    rootx[0]=xi+vx;
    rooty[0]=yi+vy;
    for(i=1; i<=t; i++){
            rootx[i]=rootx[i-1]+0.5*X[(int)rootx[i-1]][(int)rooty[i-1]]*1*1;
            rooty[i]=rooty[i-1]+0.5*Y[(int)rootx[i-1]][(int)rooty[i-1]]*1*1;
            //vx=vx+X[xi][yi];
            //vy=vy+Y[xi][yi];
            if (rootx[i]>=W) break;
            if (rooty[i]>=W) break;
            if (rootx[i]<0) break;
            if (rooty[i]<0) break;
           // if (M[rootx[i]][rooty[i]]=m) break;

    }

    //Bild mit den Punkten wo sich das Teilchen befindet
    TCanvas *c2 = new TCanvas("c2","c2",800,600);
    c2->cd();
    TGraph *h2 = new TGraph( 100 , rootx, rooty);
    h2->SetMarkerStyle(6);


    h2->Draw();
    c2->Update();
    c2->SaveAs("teilchen.png");



    //EEEEEEEEEEEENDEEEEEEEEEE
    return 0;
}

*/
