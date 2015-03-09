#include <math.h>
#include <sstream>
#include <string>
using namespace std;    

#ifndef GVector_H
#define GVector_H
class GVector{
        private:
                double x,y,z;
                double length;

        public:
                double GetX();
                double GetY();
                double GetZ();
                double GetLength();

                GVector Scale(double scalar);

                double DotProduct(GVector A);

                double SquaredDotProduct();

                double Length();

                GVector PerpendicularXY();

                GVector Add(GVector c);


                GVector(double x_length,double y_length, double z_length);

                bool Equals(GVector c);
                string ToString();
};
#endif
