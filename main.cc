#include <iostream>
#include "gvector.h"
using namespace std;



void identity(){
  int xE = 1,yE=2,zE=3;
  GVector v(xE,yE,zE);
  
  int xA = v.getX();
  int yA = v.getY();
  int zA = v.getZ();
  
  if(xE!=xA)cout << "!X " << endl;
  if(yE!=yA)cout << "!Y " << endl;
  if(zE!=zA)cout << "!Z " << endl;
  
}

void product(){
  int e =60; 
  GVector v(3,4,5);
  int a = v.product(5);
  if(e!=a)cout<<"!product"<<endl;
}

void equality(){
    bool expected=false;
    GVector one(1,2,3);
    GVector two(3,4,5);
    GVector three(1,2,3);

    bool actual = one.equals(two);
    if(expected != actual)cout<<"!equality(false)"<<endl;

    expected=true;
    actual = one.equals(three);
    if(expected != actual)cout<<"!equality(true)"<<endl;
}
void addition(){
 GVector expected(5,6,7);

 GVector v_one(2,2,2);
 GVector v_two(3,4,5);
 GVector actual = v_one.add(v_two);
 
 bool equals = expected.equals(actual);
 if(!equals)cout<<"!addition"<<endl;
}

int main(){
    identity();
    product();
    addition();
}
