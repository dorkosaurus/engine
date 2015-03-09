#include "GVector.h"

double GVector::GetX(){return x;}
double GVector::GetY(){return y;}
double GVector::GetZ(){return z;}
double GVector::GetLength(){return length;}

GVector GVector::Scale(double scalar){
    double scaled_x = scalar*GetX();
    double scaled_y = scalar*GetY();
    double scaled_z = scalar*GetZ();
    
    GVector new_vector(scaled_x,scaled_y,scaled_z);
    return new_vector;
}

double GVector::DotProduct(GVector A){
    double x_product = A.GetX() * GetX();
    double y_product = A.GetY() * GetY();
    double z_product = A.GetZ() * GetZ();
    double dot_product = x_product+y_product+z_product;
    return dot_product;
}

double GVector::SquaredDotProduct(){
    return DotProduct(*this);
}

double GVector::Length(){
    double square = SquaredDotProduct();
    double square_root = sqrt(square);
    return square_root;
}

GVector GVector::PerpendicularXY(){
    double new_x = -GetY();
    double new_y =  GetX();
    double new_z =  0;
    GVector vector (new_x,new_y,new_z);
    return vector;
}

GVector GVector::Add(GVector c){
                   GVector new_vector(
                                (c.GetX()+GetX()),
                                (c.GetY()+GetY()),
                                (c.GetZ()+GetZ())
                            );
                    return new_vector;
}



GVector::GVector(double x_length,double y_length, double z_length){
    x=x_length;
    y=y_length;
    z=z_length;
}    

bool GVector::Equals(GVector c){
        bool ret=true;
        if(c.GetX()!=GetX())ret=false;
        if(c.GetY()!=GetY())ret=false;
        if(c.GetZ()!=GetZ())ret=false;
        return ret;
}

string GVector::ToString(){
    stringstream ss;
    ss <<  "(" << GetX() << "," << GetY() << "," << GetZ() << ")";
    string id = ss.str();
   
    return id;
}
  
