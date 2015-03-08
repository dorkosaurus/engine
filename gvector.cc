#include "GVector.h"
GVector::GVector(int xLength,int yLength, int zLength){
    x=xLength;
    y=yLength;
    z=zLength;
}    
GVector GVector::add(GVector c){
                   GVector newVector(
                                (c.getX()+getX()),
                                (c.getY()+getY()),
                                (c.getZ()+getZ())
                            );
                    return newVector;
   }
bool GVector::equals(GVector c){
        bool ret=true;
        if(c.getX()!=getX())ret=false;
        if(c.getY()!=getY())ret=false;
        if(c.getZ()!=getZ())ret=false;
        return ret;
}  
