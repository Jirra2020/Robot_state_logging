#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <vector>
using namespace std;

class Logs {
public:
    Logs();

    void logsfunc(double initial_p, double initial_v, double initial_a, double t); 
   
    void print_logs(); 

protected:
    vector<double> p;
    vector<double> v;
    vector<double> a;
};
#endif // ROBOT_H
