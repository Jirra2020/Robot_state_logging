// Logs.h
#ifndef LOGS_H
#define LOGS_H

#include <iostream>
#include <vector>
using namespace std;

class Logs {
public:
    Logs();  // Constructor
    void logsfunc(double initial_p, double initial_v, double initial_a, double t);
    void print_logs();

protected:
    vector<double> p;
    vector<double> v;
    vector<double> a;
};

#endif  // LOGS_H
