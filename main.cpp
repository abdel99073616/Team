#include <iostream>

using namespace std;

int main()
{
   int x , c=0;
   cin>>x;
   int arr[x][3];
   for(int i = 0 ; i<x ; i++)
   {
       int sum = 0;
        for(int j = 0 ; j <3 ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            sum++ ;
        }
        if(sum>=2)
            c++;
   }
   cout<<c;

    return 0;
}
