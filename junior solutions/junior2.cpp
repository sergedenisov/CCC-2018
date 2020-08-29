#include <iostream>

using namespace std;

int main()
{
    int L;
    cin>>L;
    int num[L];
    char ch[L];
    for(int i=0; i<L; i++){
        cin>>num[i]>>ch[i];
    }
    for(int i=0; i<L; i++){
        //cout<<num[i]<<" ";
        for(int j=0; j<num[i]; j++){
            cout<<ch[i];
        }
        cout<<"\n";
    }
    return 0;
}
