#include "includes/Point.h"
#include <iostream>

using namespace std;

void Point::set_point(int x_val, int y_val) {
    x = x_val;
    y = y_val;
}

void Point::get_point() {
    cout << x << "\n" << y << endl;
}
