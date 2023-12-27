#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    float a, b, c, result;
    cout<<"Give me three numbers, please\n";
    cin>>x>>y>>z;
    a = (x - y) * (x + z);
    c = (x + y + z) * (x + y + z);
    b = c + 1;
    result = a / b;
    cout<<"THE RESULT IS:"<<result<<"\n";
};
