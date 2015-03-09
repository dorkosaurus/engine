#include <iostream>
#include "gvector.h"
using namespace std;



void identity(){
  double xE = 1,yE=2,zE=3;
  GVector v(xE,yE,zE);
  
  double xA = v.GetX();
  double yA = v.GetY();
  double zA = v.GetZ();
  
  if(xE!=xA)cout << "!X " << endl;
  if(yE!=yA)cout << "!Y " << endl;
  if(zE!=zA)cout << "!Z " << endl;
  
}

void dotProduct(){
  double e =12;; 
  GVector v(3,4,5);
  GVector g(1,1,1);
  double a = v.DotProduct(g);
  if(e!=a)cout<<"!product"<<endl;
}

void equality(){
    GVector one(1,2,3);
    GVector two(3,4,5);
    GVector three(1,2,3);

    bool expected=false;
    bool actual = one.Equals(two);
    if(expected != actual)cout<<"!equality(false)"<<endl;

    expected=true;
    actual = one.Equals(three);
    if(expected != actual)cout<<"!equality(true)"<<endl;
}
void addition(){
         GVector expected(5,6,7);

         GVector v_one(2,2,2);
         GVector v_two(3,4,5);
         GVector actual = v_one.Add(v_two);
         
         bool Equals = expected.Equals(actual);
         if(!Equals)cout<<"!Addition"<<endl;
}

void perpendicular(){
        GVector one (1,2,3);
        GVector perpendicular = one.PerpendicularXY();
        cout << one.ToString() << "  perp:"  <<  perpendicular.ToString() <<endl;

        double expected=0;
        double actual = one.DotProduct(perpendicular);
        if(expected != actual)cout<<"!perpendicular"<<endl;
}

int main(){
    identity();
    equality();
    dotProduct();
    addition();
    perpendicular();}
