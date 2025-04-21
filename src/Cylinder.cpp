# ifndef CYLINDER_CPP
# define CYLINDER_CPP
#include<iomanip>
#include<bits/stdc++.h>
# include "Cylinder.h"
#define Pi M_PI
double Cylinder :: SurfaceArea(){
    return (Pi * 2 * radius *(radius+ (double)height));
}

double Cylinder :: Volume(){
    return (Pi * radius * radius * height);
}

double Cylinder :: Circumference(){
    return (Pi * 2 * radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{   
    out << fixed << std::setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif

