#include <iostream>
#include <cmath>

using namespace std;

int main() {
// TH: wenn Du stdio.h includest, dann wird es C, bei C++ heißt die Funktionalitaet iostream

//#include<Hallo Torsten>
// TH: void greet() { std::cout << "Hallo Leonie" << std::endl;
//#vonvonvonvon


    //int n=10; //Unterteilung
    int a=5; //laenge PLatte
    int b=4; //hoehe PLatte
    int w=10; //Kantenlaenge Wuerfel
    int i, j, k; //Laufindizes
    int x=2; //naechste ecke am nullpunkt in x richtung
    int y1=3;
    int y2=6; //nachste ecke am nullpunkt in y richtung, v2>v1
    int z=4; //naechste ecke am nullpunkt in z richtung
    double rsqr; //Abstand segmente quadrat
    float d; //Abstand der PLatten
    double R; //Summe von rsqr fuer Superposition
    double G=6.67408; //gravitationskonstante ohne POtentz
    double M= 7; // Massensegment der Platte
    double g; //Feld
    double eps = pow(10,-4); //epsilon

    double A[w][w][w];




//leerem Raum initialisieren
    for(i=0; i<=w; i++){ // x Koordinate
        for(j=0; j<=w; j++){
            for(k=0; k<=w; k++){
                A[i][j][k]=0;

            }
        }
    }


//Ausgabe
    for(k=0; k<=w; k++){ // z Koordinate
        for(j=0; j<=w; j++){
            for(i=0; i<=w; i++){
                cout << A[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << "\n \n" << endl;
    }


//Platten in leerem Raum initialisieren
    for(i=x; i<=x+a; i++){
        for(k=z; k<=z+b; k++){
            A[i][0][k]=17;
            //A[i][y2][k]=M-2;
            cout << i << j;
        }
    }


//Ausgabe
    cout << "Nach Anlegen der Platten: \n" << endl;

    for(k=0; k<=w; k++){ // z Koordinate
        for(j=0; j<=w; j++){
            for(i=0; i<=w; i++){
                cout << A[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << "\n \n" << endl;
    }


//cout << A[1][1][1];



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
