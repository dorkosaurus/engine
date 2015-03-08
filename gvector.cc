#include "GVector.h"
GVector::GVector(int xLength,int yLength, int zLength){
    x=xLength;
    y=yLength;
    z=zLength;
}    
GVector GVector::addition(GVector c){
                   GVector newVector(
                                (c.getX()+getX()),
                                (c.getY()+getY()),
                                (c.getZ()+getZ())
                            );
                    return newVector;
   }
    
