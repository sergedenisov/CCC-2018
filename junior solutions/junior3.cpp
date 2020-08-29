#include <iostream>

using namespace std;

int main()
{
    // input start
    int n;
    cin>>n;
    char char_in [n][80];
    for(int i=0; i<n; i++){
        for(int j=0; j<80; j++){
            cin>>char_in[i][j];
            if (cin.get() == '\n'){
                break;
            }
        }
    }// input end

    for(int i=0; i<n; i++){
        char kn, ko;
        int num = 0;
        for(int j=1; j<81; j++){
            ko = char_in[i][j-1];
            kn = char_in[i][j];
            if(ko == kn){
                num++;
            }
            cout<<num+" "<<ko;
        }
        //cout<<num+" "<<ko+"\n";
    }
    return 0;
}
