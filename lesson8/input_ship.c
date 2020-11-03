#include <stdio.h>
#include "novigation.h"
struct position input_port() {
struct position res;
int k=0;
do {
scanf("%d", &res.lat.degree);
scanf("%d", &res.lat.minutes);
scanf("%d", &res.lat.seconds);
scanf("%d", &res.longitude.degree);
scanf("%d", &res.longitude.minutes);
scanf("%d", &res.longitude.seconds);
if ((res.lat.degree >= 0) && (res.lat.degree <= 90) && (res.lat.minutes >= 0) && (res.lat.minutes <= 60) &&
 (res.lat.seconds >= 0) && (res.lat.seconds <= 60) && (res.longitude.degree >= 0) && (res.longitude.degree <= 180)
&& (res.longitude.minutes >= 0) && (res.longitude.minutes <= 60) && (res.longitude.seconds >= 0)
&& (res.longitude.seconds <= 60))
k=1;
else
printf("ERROR, try input again"); 
}
while (k == 0);

return res;
}



void input_ship (int N, struct position *ship) {
int i, k=0;
while (1==1) {
for  ( i = 0;  i < N; i++) {
scanf("%d", &ship[i].lat.degree);
scanf("%d", &ship[i].lat.minutes);
scanf("%d", &ship[i].lat.seconds);
scanf("%d", &ship[i].longitude.degree);
scanf("%d", &ship[i].longitude.minutes);
scanf("%d", &ship[i].longitude.seconds);
if ((ship[i].lat.degree < 0) || (ship[i].lat.degree > 90)   ||  (ship[i].lat.minutes < 0) ||  (ship[i].lat.minutes > 60)
 || (ship[i].lat.seconds < 0) || (ship[i].lat.seconds > 60) || (ship[i].longitude.degree < 0) || (ship[i].longitude.degree > 180)
|| (ship[i].longitude.minutes < 0) || (ship[i].longitude.minutes > 60) || (ship[i].longitude.seconds < 0)
|| (ship[i].longitude.seconds > 60)) {
printf("ERROR, try input again ");
continue; }
}
break;
}
return;

}
