#include <iostream>

using namespace std;

int main()
{
    int a3, a2, a1;
    int b3, b2, b1;

    cin>>a3;
    cin>>a2;
    cin>>a1;

    cin>>b3;
    cin>>b2;
    cin>>b1;

    if(3*a3+2*a2+a1 > 3*b3+2*b2+b1){
        cout << "A" << endl;
    } else if(3*a3+2*a2+a1 < 3*b3+2*b2+b1){
        cout << "B" << endl;
    } else{
        cout << "T" << endl;
    }
    return 0;
}
