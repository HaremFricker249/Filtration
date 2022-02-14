
#include <iostream>
#include <math.h>
using namespace std;
double L = 50;
double pr = 5;
double pk = 1;
double x = 0;
double step = 0.1;
double k = 1.006 * pow(10, -5); //vyazkost
double u = 0.0009;              //poristost
double m = pow(10, -14);        //pronitsaemost
int main()
{
    while (x >= 0 && x <= L) 
    {
        double px = ((pr - pk) / L) * x + pk;
        cout << px << endl;
        x = x + step;
    }
        double U = (k / u) * ((pk - pr) / L);
        double p_ = (pk + pr) / 2;
        cout << endl << "U=" << " " << U << endl << "p_=" << " " << p_;
}

