/*
	EXPLICAR QUE HACE PROGRAMA.
	AUTOR:
	COMPILAR: 
		
		g++ -Wall -o imagen plantilla.cpp `pkg-config --cflags --libs opencv`
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

	//Declaracion de matrices

Mat contenedor(450,450,CV_8UC3, Scalar(0,0,0));
Mat M1(200,200,CV_8UC3, Scalar(255,0,0));
Mat M2(100,200,CV_8UC3, Scalar(255,0,0));
Mat M3(80,90,CV_8UC3,Scalar(255,0,0));
Mat M4(200,300,CV_8UC3, Scalar(0,0,255));
Mat M5(200,100,CV_8UC3, Scalar(255,30,0));
Mat M6(80,110,CV_8UC3, Scalar(0,255,255));
Mat teclado;
Mat teclado_peq;


Rect R1(Point(20,20),Size(200,200));
Rect R2(Point(230,20), Size(200,100));
Rect R3(Point(230,140),Size(90,80));
Rect R4(Point(20,230),Size(300,200));
Rect R5(Point(330,230),Size(100,200));
Rect R6(Point(340,140),Size(90,80));
Rect R7(Point(40,240),Size(110,80));
Rect R8(Point(40,330),Size(110,80));
Rect R9(Point(170,240),Size(110,80));
Rect R10(Point(170,330),Size(110,80));

M1.copyTo(contenedor(R1));
M2.copyTo(contenedor(R2));
M3.copyTo(contenedor(R3));
M4.copyTo(contenedor(R4));
M5.copyTo(contenedor(R5));
M3.copyTo(contenedor(R6));
M6.copyTo(contenedor(R7));
M6.copyTo(contenedor(R8));
M6.copyTo(contenedor(R9));
M6.copyTo(contenedor(R10));

teclado = imread("keypad.jpg",1);
resize(teclado, teclado_peq, Size(100,200), 0,0,INTER_LINEAR);

teclado_peq.copyTo(contenedor(R5));

	for(;;){

		imshow("V1", contenedor);
		if(waitKey(30)>0) break;
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
