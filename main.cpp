 /*
    Steven O' Brien
    06/11/17
    Exercise 9
    Sphere Calculations
  */



#include <iostream>
#include <cmath>

using namespace std;

//Function declarations
void Sphere(double rad,double *ptra, double *ptrv);

int main()
{
    //Displays Programme Title
    cout << "Sphere Calculations" << endl;

    //Declaration of variables type double
    double radius=0, area=0, volume=0;
    double *ptr_area, *ptr_volume ;

    // Assigned values to variables
    ptr_area = &area;
    ptr_volume = &volume;

    // While loop to ensure positive value is entered for radius
    while (radius <=0)
    {
       cout << "Enter a positive value for radius (m):";
       cin >> radius ;
    }
    // Calling subfunction sphere
     Sphere(radius, ptr_area, ptr_volume);

     //Displays results to user
    cout << "The area of the sphere is :" << *ptr_area << endl;
    cout << "The volume of the sphere is :" << *ptr_volume << endl;

    return 0;
}

// sub function to calculate area and volume of a sphere
 void Sphere(double rad, double *ptra, double *ptrv)
 {


     *ptra = 4 * M_PI* pow(rad,2);
     *ptrv = (4/3.0)* M_PI* pow(rad,3);

     return;

 }
