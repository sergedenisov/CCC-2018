#include <iostream>

using namespace std;

int main()
{
    int flag1 = 0;
    int flag2 = 0;
    int t;
    cin>>t;
    int n[t];
    int num[t][2];
    for(int j=0; j<t; j++){
        cin>>n[j];
        num[j][0]=2;
        num[j][1]=n[j]*2;
    }
    for(int j=2; j<t; j++){
        //num[j][0] = j;
        for(int i=0; i < n[j]; i++){
            if(num[i][0] % i == 0){
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0){

           for(int i= n[j]; i < num[j][1]; i++){
                if(num[i][1] % i == 0){
                    flag2 = 1;
                    break;
                }
            }
            if(flag1==0 && flag2==0 && (num[j][0]+num[j][1])/2 == n[j]){
                cout<<num[j][0]+" "+num[j][1];
            }
        }


    }

    return 0;
}
