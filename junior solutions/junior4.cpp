#include <iostream>

using namespace std;
int a[2][2] = { {1, 2},
                {3, 4} };
char in [1001];

int main()
{
    cin>>in;
    for(int i=0; i < sizeof(in); i++){
        if(in[i] == 'H'){
            a[0][0] = a[0][0] + a[0][1];
            a[0][1] = a[0][0] - a[0][1];
            a[0][0] = a[0][0] - a[0][1];

            a[1][1] = a[1][1] + a[1][0];
            a[1][0] = a[1][1] - a[1][0];
            a[1][1] = a[1][1] - a[1][0];
        }
        if(in[i] == 'V'){
            a[0][0] = a[0][0] + a[1][0];
            a[1][0] = a[0][0] - a[1][0];
            a[0][0] = a[0][0] - a[1][0];

            a[1][1] = a[1][1] + a[0][1];
            a[0][1] = a[1][1] - a[0][1];
            a[1][1] = a[1][1] - a[0][1];
        }
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
