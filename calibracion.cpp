/*
	EXPLICAR QUE HACE PROGRAMA.
	AUTOR:
	COMPILAR: 
		
		g++ -Wall -o calibracion%##@^@#$Ddfsf34234 calibracion.cpp `pkg-config --cflags --libs opencv`


*/



#include<opencv2/core/core.hpp>
#include<opencv2/ml/ml.hpp>
#include<opencv/cv.h>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/video/background_segm.hpp>
#include<cmath>

#include <iostream>

#include<fstream>

#include <stdio.h>    
#include <stdlib.h> 
#include <stdint.h>   
#include <string.h>   
#include <unistd.h>   
#include <fcntl.h>   
#include <errno.h>    
#include <termios.h>  
#include <sys/ioctl.h>

using namespace cv;
using namespace std;

int LadoA=0;
	int LadoB=0;
	int NoDivisiones=0;
	int DistanciaX = 0;
	int DistanciaY = 0;
	int i=0;
	int j=0;
	int inc = 0;

static void SiRatonMueve(int evt, int x, int y, int flags, void* param){
	switch(evt)
	{
		case CV_EVENT_LBUTTONDOWN :

				break;
		default : 
				break;
	}

}


int main( void ){
	/*
		Declarar una matriz de 3 canales, verde,
		tamanio 600x400, 8 bits
	
	*/
	

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

	Mat ventana_calibracion(	LadoB,
														LadoA,
														CV_8UC3,
														Scalar(255,255,255));

	for(i = 1; i <= NoDivisiones; i++){
			for(j = 1; j<= NoDivisiones; j++){
				 Punto_Y[inc]    = DistanciaY*j;
				 Punto_X[inc]	   = DistanciaX*i;
					inc++;
				//cout << DistanciaX*i << endl;
 			}
		
	}




	/*
		Ciclo principal
	*/
	for(;;){
			//Dibujar Circulo

		for(i=0; i<=(NoDivisiones*NoDivisiones)-1; i++){
			
						circle(	ventana_calibracion,
								Point(Punto_X[i],Punto_Y[i]),
								2,
								Scalar(0,255,0),
								CV_FILLED,
								2,
								0);

	}
			


				
				
			
			


		


			//Mostrar la matriz en Ventana1
			imshow("Ventana1" , ventana_calibracion);
			/*
				Si el usuario presiona cualquier
				tecla	el programa termina.
			*/	
			if(waitKey(0) > 0 ) break;

	}
	
	return(0);
}

//  Mat imagen(100,100,CV_8UC3,Scalar(0, 255, 0));
//	imshow("NombreVentana", NombreMatriz);
//	waitKey( 0 );
//  VideoCapture cam(0);
//  if(cam.isOpened()) return -1;
//  cam >> video;
/*
    cvtColor(video, video, CV_BGR2HSV, 0);	
		inRange(video,
		Scalar(0,0,50),
		Scalar(70,150,200),
		oediv);
    NOmbre_Matriz_Guardar_Imagen = imread("imagen1.png");
    
    imwrite("HOla.jpg", video);
    
    resize(video, temporal, Size(250,150), 0,0,INTER_LINEAR);
    
    GaussianBlur(temporal, blur, Size(5, 5), 2, 2);
    
    Rect R1(Point(10,10), Size(200,100));
    
    createTrackbar("SatMin", "ControlCasa-V0.111", &SatMin, 255);
    
    cvSetMouseCallback("ControlCasa-V0.111",SiRatonMueve, &temp );
    
    temporal.copyTo(plantilla(R4));
*/
