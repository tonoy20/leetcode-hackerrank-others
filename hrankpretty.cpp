#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
 //   cout<<std::hex;
 //   cout<<std::setiosflags(std::ios::showbase | std::ios::uppercase);
 //   cout<<100<<"\n";
 //   cout.setf(ios::hex, ios::basefield);
 //   cout.setf(ios::showbase);
 //   cout<<100<<"\n";
 //   cout.unsetf(ios::showbase);
 //   cout<<100<<"\n";

        cout<<setw(10)<<2.567<<"\n";
        cout<<setfill('_')<< setiosflags(ios::fixed) << setprecision(2)<<setw(10)<<2.567<<"\n";


    return 0;
}
