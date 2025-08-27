#include <iostream>
using namespace std;

template <class T>
class Calculator {
   /* private: */
   /*  T num1, num2; */

   public:
    
    T add2(T a, T b) { return a + b; }
    T add3(T a, T b, T c) { return a + b + c; }
};

int main() {
    Calculator<int> intCalc;
    Calculator<float> floatCalc;


    cout << endl << floatCalc.add2(4.7,5.2)<<endl;
    cout << endl << intCalc.add2(4,5)<<endl;
    cout << endl << intCalc.add3(4,5,6)<<endl;

    return 0;
}
