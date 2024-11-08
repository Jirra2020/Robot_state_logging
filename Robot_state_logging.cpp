#include <iostream>
#include <vector>
using namespace std;

class Logs {
public:
    Logs() {
        p.push_back(0);  // Initialize with initial conditions
        v.push_back(0);
        a.push_back(0);
    }

    void logsfunc(double initial_p, double initial_v, double initial_a, double t) {
        // Set initial conditions
        p[0] = initial_p;
        v[0] = initial_v;
        a[0] = initial_a;

        for (int i = 1; i < 50; i++) {
            double new_a = a[0];  // Assuming constant acceleration as per your code
            double new_v = v[i - 1] + t * new_a;
            double new_p = p[i - 1] + t * v[i - 1] + (t * t / 2) * new_a;

            a.push_back(new_a);  // Append to vector
            v.push_back(new_v);
            p.push_back(new_p);
        }
    }

    void print_logs() {
        for (size_t i = 0; i < p.size(); i++) {
            cout << "t=" << i * 0.1 << "s, Position=" << p[i] << ", Velocity=" << v[i] << ", Acceleration=" << a[i] << endl;
        }
    }

protected:
    vector<double> p;
    vector<double> v;
    vector<double> a;
};

int main() {
    Logs states;
    states.logsfunc(0, 0, 0.2, 0.1);  // Initialize with starting values
    states.print_logs();  // Print the logged data

    return 0;
}
