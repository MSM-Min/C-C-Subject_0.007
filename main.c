//main.c
//author:小江71122175

#include <iostream>
using namespace std;

template <typename T>
struct CalculatorTraits { };

template<>
struct CalculatorTraits<int> {
    typedef int ReturnType;
    static constexpr ReturnType LIMIT = 100;
};

template<>
struct CalculatorTraits<long> {
    typedef long ReturnType;
    static constexpr ReturnType LIMIT = 1000;
};

template<>
struct CalculatorTraits<float> {
    typedef float ReturnType;
    static constexpr ReturnType LIMIT = 999.99;
};

template<>
struct CalculatorTraits<double> {
    typedef double ReturnType;
    static constexpr ReturnType LIMIT = 888.888888;
};

template <typename T>
struct Calculator {
    typename CalculatorTraits<T>::ReturnType GetLimit() {
        return CalculatorTraits<T>::LIMIT;
    }   
};

int main() {
    Calculator<int> c1;
    Calculator<long> c2;
    Calculator<float> c3;
    Calculator<double> c4;
    cout << c1.GetLimit() << endl;
    cout << c2.GetLimit() << endl;
    cout << c3.GetLimit() << endl;
    cout << c4.GetLimit() << endl;
    return 0;
}
