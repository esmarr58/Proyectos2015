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
	Mat ventana_calibracion(	500,
														600,
														CV_8UC3,
														Scalar(255,255,255));
	/*
		Ciclo principal
	*/
	for(;;){
			//Dibujar Circulo

			int i = 1;
			for(int x = 40; x <440; x=x+20){
				cout  << "Valor de intentos" 
							<< i << endl;
							i++;
				int ii=1;
				for(int y = 40; y<440; y=y+20){
						cout  << "Valor de intentos22" 
							<< ii << endl;
							ii++;
				}
				
			}
			circle(	ventana_calibracion,
							Point(100,100),
							15,
							Scalar(0,255,0),
							CV_FILLED,
							8,
							0);


		


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
