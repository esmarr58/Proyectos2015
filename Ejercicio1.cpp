#include<iostream>

using namespace std;

	int LadoA=0;
	int LadoB=0;
	int NoDivisiones=0;
	int DistanciaX = 0;
	int DistanciaY = 0;
	int i=0;
	int j=0;
	int inc = 0;
	

int main(void){
	cout << "Indicar cuanto mide el lado A: ";
	cin >> LadoA;

	cout << "Indicar cuanto mide el lado B: ";
	cin >> LadoB;

	cout << "Indicar cuantos circulos por lado ";
	cin >> NoDivisiones;
	int Punto_Y[NoDivisiones*NoDivisiones-1];
	int Punto_X[NoDivisiones*NoDivisiones-1];
	
	DistanciaX = LadoA/(NoDivisiones+1);
	DistanciaY = LadoB/(NoDivisiones+1);

	cout << DistanciaX << endl;
	cout << DistanciaY << endl;

	for(i = 1; i <= NoDivisiones; i++){
			for(j = 1; j<= NoDivisiones; j++){
				 Punto_Y[inc]    = DistanciaY*j;
				 Punto_X[inc]	   = DistanciaX*i;
					inc++;
				//cout << DistanciaX*i << endl;
 			}
		
	}

	for(i=0; i<=(NoDivisiones*NoDivisiones)-1; i++){
			cout 	<< "p" << i<< " ( " 
						<< Punto_X[i] 
					<< " , "
						<< Punto_Y[i]
						<< " )" << endl;

	}
	

	



}

