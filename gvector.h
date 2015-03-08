#ifndef GVector_H
#define GVector_H

class GVector{
    private:
        int x,y,z;
        int length;
    public:
        GVector(int xLength,int yLength, int zLength);
        int getX(){return x;}
        int getY(){return y;}
        int getZ(){return z;}
        int product(int c){return (c*x)+(c*y)+(c*z);}
        GVector add(GVector c);
        bool equals(GVector c);
};
#endif
