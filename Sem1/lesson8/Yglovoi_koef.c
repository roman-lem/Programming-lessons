#include<stdio.h>
#include"novigation.h"

void matrix_of_slopes (int N, struct position *ship, struct fig triangle, struct  position port, float (*slopes)[4])
{
    struct degree
    {
        float CurrentDegreeLat;
        float CurrentDegreeLon;
    };
    struct degree CurrentDegreeShip , CurrentDegreeObj ;
    int i ;
    for(i=0 ; i<N ; i++)
    {
        //Ship co-rd
        CurrentDegreeShip.CurrentDegreeLat = (float)ship[i].lat.degree + ((float)ship[i].lat.minutes + ((float)ship[i].lat.seconds/60))/60 ;
        CurrentDegreeShip.CurrentDegreeLon = (float)ship[i].longitude.degree + ((float)ship[i].longitude.minutes + ((float)ship[i].longitude.seconds/60))/60 ;
        //Port co-rd
        CurrentDegreeObj.CurrentDegreeLat = (float)port.lat.degree + ((float)port.lat.minutes + ((float)port.lat.seconds/60))/60 ;
        CurrentDegreeObj.CurrentDegreeLon = (float)port.longitude.degree + ((float)port.longitude.minutes + ((float)port.longitude.seconds/60))/60 ;
        //Ygl_koef_port
        slopes[i][3] = (CurrentDegreeObj.CurrentDegreeLat - CurrentDegreeShip.CurrentDegreeLat)/(CurrentDegreeObj.CurrentDegreeLon - CurrentDegreeShip.CurrentDegreeLon);

        CurrentDegreeObj.CurrentDegreeLat = (float)triangle.apex1.lat.degree + ((float)triangle.apex1.lat.minutes + ((float)triangle.apex1.lat.seconds/60))/60 ;
        CurrentDegreeObj.CurrentDegreeLon = (float)triangle.apex1.longitude.degree + ((float)triangle.apex1.longitude.minutes + ((float)triangle.apex1.longitude.seconds/60))/60 ;
        //Ygl_koef_1-st_vershina
        slopes[i][0] = (CurrentDegreeObj.CurrentDegreeLat - CurrentDegreeShip.CurrentDegreeLat)/(CurrentDegreeObj.CurrentDegreeLon - CurrentDegreeShip.CurrentDegreeLon);

        CurrentDegreeObj.CurrentDegreeLat = (float)triangle.apex2.lat.degree + ((float)triangle.apex2.lat.minutes + ((float)triangle.apex2.lat.seconds/60))/60 ;
        CurrentDegreeObj.CurrentDegreeLon = (float)triangle.apex2.longitude.degree + ((float)triangle.apex2.longitude.minutes + ((float)triangle.apex2.longitude.seconds/60))/60 ;
        //Ygl_koef_1-st_vershina
        slopes[i][1] = (CurrentDegreeObj.CurrentDegreeLat - CurrentDegreeShip.CurrentDegreeLat)/(CurrentDegreeObj.CurrentDegreeLon - CurrentDegreeShip.CurrentDegreeLon);

        CurrentDegreeObj.CurrentDegreeLat = (float)triangle.apex3.lat.degree + ((float)triangle.apex3.lat.minutes + ((float)triangle.apex3.lat.seconds/60))/60 ;
        CurrentDegreeObj.CurrentDegreeLon = (float)triangle.apex3.longitude.degree + ((float)triangle.apex3.longitude.minutes + ((float)triangle.apex3.longitude.seconds/60))/60 ;
        //Ygl_koef_1-st_vershina
        slopes[i][2] = (CurrentDegreeObj.CurrentDegreeLat - CurrentDegreeShip.CurrentDegreeLat)/(CurrentDegreeObj.CurrentDegreeLon - CurrentDegreeShip.CurrentDegreeLon);


    }
}
