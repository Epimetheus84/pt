#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>

using namespace std;

const int TYPE_CIRCLE = 1;
const int TYPE_RECTANGLE = 2;
const int TYPE_TRIANGLE = 3;

template <class ShapeType> class shape
{

public:

    int type;
    ShapeType* params;

    void init(int type, ShapeType& params) {
        this->type = type;
    }

    double square() {
        if (this->type == TYPE_CIRCLE) {
            return squareCircle();
        }
        else if (this->type == TYPE_TRIANGLE) {
            return squareTriangle();
        }
        else if (this->type == TYPE_RECTANGLE) {
            return squareRectangle();
        }
        else {
            return 0;
        }
    }

    double squareCircle() {
        ShapeType radius = params[0];
        return M_PI * radius * radius;
    }

    double squareTriangle() {
        ShapeType a = params[0];
        ShapeType b = params[1];
        ShapeType c = params[2];
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double squareRectangle() {
        ShapeType a = params[0];
        ShapeType b = params[1];
        return a * b;
    }
};

int main__old()
{
    shape <double> shp_double;
    shape <int> shp_int;
    int type;

    cout << "choose figure type" << endl;
    cout << "1. circle" << endl;
    cout << "2. rectangle" << endl;
    cout << "3. triangle" << endl;

    cin >> type;
    shp_double.type = type;
    shp_int.type = type;

    cout << "int square" << endl;
    int arr_i[] = { 1, 2, 3 };
    shp_int.params = arr_i;
    cout << shp_int.square() << endl;

    cout << "double square" << endl;
    double arr_d[] = { 1.5, 2.2, 3.7 };
    shp_double.params = arr_d;
    cout << shp_double.square() << endl;

    return 0;
}
