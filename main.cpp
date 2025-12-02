#include <iostream>
#include <cmath>
#include <vector>

//this will be used to create 2d polar coordinates

struct Point2D{
    double x;
    double y;
};

double formula(double theta) {
    // Example polar equation: r = 1 + 2 sin(theta)
    return sin(theta);
}

int main(){
    std::vector<Point2D> points; //dynamic array for point objs

    double theta_start = 0.0;
    double theta_end = 2 * M_PI;
    double step = 0.01;

    for (double theta = theta_start; theta <= theta_end; theta += step){
        double r = formula(theta);
        double x = r * cos(theta);
        double y = r * sin(theta);
        points.push_back({x, y});
    }
    
    for (size_t i = 0; i < points.size(); i++) {
        // Access the element at index i
        std::cout << "(" << points[i].x << ", " << points[i].y << ")\n";
    }
}