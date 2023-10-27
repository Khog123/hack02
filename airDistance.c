#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

double  latitudeOrigin, longitudeOrigin, LatitudeDestination, LongitudeDestination;
double distance, Delta, a, c;

const double R=6371.0;
const double PI=3.14;

printf("Enter the value of your location of the origin(latitude,longitude):");
scanf("%lf,%lf",&latitudeOrigin,&longitudeOrigin);
printf("Enter the value of your destination(latitude,longitude):");
scanf("%lf,%lf",&latitudeDestination,longitudeDestination);

latitudeOrigin=(latitudeOrigin*PI)/180;
longitudeOrigin=(longitudeOrigin*PI)/180;
latitudeDestination=(latitudeDestination*PI)/180;
longitudeDestination=(longitudeDestination*PI)/180;

Delta = longitudeDestination-longitudeOrigin;

a = pow(sin((latitudeDestinstion-latitudeOrigin)/2),2)+ cos(latitudeOrigin)*cos(latitudeDestination)*pow(sin(Delta/2)/2);
c=2*atan2(sqrt(a),sqrt(1-a));

distance=R*c; //Distance in km

printf("Origin: (%lf,%lf)\nDestination: (%lf,%lf)\n",latitudeOrigin*180/PI,longitudeOrigin*180/PI,latitudeDestination*180/PI,longitudeDestination*180/PI);
printf("Air distance is %lf km\n",distance);

return 0;
}