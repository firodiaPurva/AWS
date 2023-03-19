#include <iostream>
using namespace std;

int main()
{

    int a = 8;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if(j==1){
                cout << "* ";
            }
            else if(j==a){
                cout << "* ";
            }
            else if(i==1){
                cout << "* ";
            }
            else if(i==a){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }



    return 0;
}