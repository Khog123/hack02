#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

double  latitudeOrigin, longitudeOrigin, latitudeDestination, longitudeDestination;
double distance, Delta, a, c;

const double R=6371.0;
const double PI=3.14;

printf("Enter the value of your location of the origin(latitude,longitude):");
scanf("%lf,%lf",&latitudeOrigin,&longitudeOrigin);
printf("Enter the value of your destination(latitude,longitude):");
scanf("%lf,%lf",&latitudeDestination,&longitudeDestination);

latitudeOrigin=(latitudeOrigin*PI)/180;
longitudeOrigin=(longitudeOrigin*PI)/180;
latitudeDestination=(latitudeDestination*PI)/180;
longitudeDestination=(longitudeDestination*PI)/180;
Delta = longitudeDestination-longitudeOrigin;
distance=acos(sin(latitudeOrigin) * sin(latitudeDestination) + cos(latitudeOrigin) *cos(latitudeDestination) * cos(Delta))*R;
 //Distance in km

printf("Origin: (%lf,%lf)\nDestination: (%lf,%lf)\n",latitudeOrigin*180/PI,longitudeOrigin*180/PI,latitudeDestination*180/PI,longitudeDestination*180/PI);
printf("Air distance is %lf km\n",distance);
return 0;
}
/*#include <stdio.h>
#include <math.h>

int main() {
    double latitudeOrigin, longitudeOrigin, latitudeDestination, longitudeDestination;
    double distance, Delta, a, c;

    const double R = 6371.0; // Earth's radius in kilometers
    const double PI = 3.14159265359; // More precise value of PI

    printf("Enter the latitude and longitude of the origin (in degrees): ");
    scanf("%lf,%lf", &latitudeOrigin, &longitudeOrigin);

    printf("Enter the latitude and longitude of the destination (in degrees): ");
    scanf("%lf,%lf", &latitudeDestination, &longitudeDestination);

    // Convert degrees to radians
    latitudeOrigin = (latitudeOrigin * PI) / 180;
    longitudeOrigin = (longitudeOrigin * PI) / 180;
    latitudeDestination = (latitudeDestination * PI) / 180;
    longitudeDestination = (longitudeDestination * PI) / 180;

    // Calculate the difference in longitudes
    Delta = longitudeDestination - longitudeOrigin;

    // Haversine formula to calculate distance
    a = pow(sin((latitudeDestination - latitudeOrigin) / 2), 2) + cos(latitudeOrigin) * cos(latitudeDestination) * pow(sin(Delta / 2), 2);
    c = 2 * atan2(sqrt(a), sqrt(1 - a));

    distance = R * c; // Distance in kilometers

    printf("Origin: (%lf,%lf)\nDestination: (%lf,%lf)\n", latitudeOrigin * 180 / PI, longitudeOrigin * 180 / PI, latitudeDestination * 180 / PI, longitudeDestination * 180 / PI);
    printf("Air distance is %lf km\n", distance);

    return 0;
}
*/

