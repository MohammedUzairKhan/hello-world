// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
#include <cmath>    //contains power, sqrt, and other math functions.

using namespace std; // cout, endl, complex are all part of this namespace

typedef complex<float> Complex; //re-define complex


int main()
{
	string wish;        //command to do another calculation
	int a,b,c;          //quadratic co-efficients
	do{
        cin >> a >> b >> c;             //input
        float discrim = pow(b,2)-4*a*c; // define discriminant
        if(discrim>=0)                                                  //if the discriminant is greater than zero, roots are real
            {
                float root2 = (-b-sqrt(discrim))/(2*a);
                float root1 = (-b+sqrt(discrim))/(2*a);
                cout << "The roots are: " << root1 << " and " << root2 << endl;
            }

            else                                                        //else it is imaginary and we use the complex typedef
            {
                auto root = Complex{-b/(2*a),sqrt(-discrim)/(2*a)};
                cout << "The roots are: " << root.real() << " + " << root.imag() << "j" << endl;    //output
                cout << "and " << root.real() << " - " << root.imag() << "j" << endl;
            }
        cout << "do you wish to do another caluclation?" << endl;                                   //wish to do another calculation
        cin >> wish;
	}
        while(wish != "q");                                                                         //loops unless q is entered when asked for wish

	return 0;
}

