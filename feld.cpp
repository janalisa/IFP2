//
// Created by sia on 9-7-18.
//


#include "feld.h"
#include "vektor.h"

class feld[100][100];

double[100][100] M;


feld::feld() {
  for(int i=0; i<100; i++){
      for(int j=0; j<100; j++){
          M[i][j]=0;
      }
  }
}

feld::feld(double m, int x, int y1, int y2, int l){
    if(int j==y1){
        for(int i=x; i<=x+l; i++){
            M[i][y1]=m;
        }
    }
    if(int j==y2){
        for (int i = x; i <= x + l; i++) {
            M[i][y2] = m;
        }
    }
}

double[100][100] feld::get() {
    return M;

}



feld::~feld() {

}
