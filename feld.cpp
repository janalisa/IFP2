//
// Created by sia on 9-7-18.
//


#include "feld.h"
#include "vektor.h"


feld::feld() {
  for(int i=0; i<100; i++){
      for(int j=0; j<100; j++){
          M[i][j]=0;
      }
  }
}

feld::feld(double m, int x, int y1, int y2, int l){
    for(int j=0; j<100; j++){
            if(j==y1){
                for(int i=x; i<=x+l; i++){
                    M[i][y1]=m;
            }//TH: was soll hier j sein? Ich blicke da leider nicht durch.

        }
    }
    for(int j=0; j<100; j++){
        if(j==y2){
            for(int i=x; i<=x+l; i++){
                M[i][y2]=m;
            }//TH: was soll hier j sein? Ich blicke da leider nicht durch.

        }
    }
}

feld::~feld() {

}
