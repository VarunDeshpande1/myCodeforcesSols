#include <iostream>

using namespace std;

int main()
{
   int n,ctr=0;
   cin>>n;
   int a[n][3];
   int s=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<3;j++)
       cin>>a[i][j];
   }
//     for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<3;j++)
//       cout<<a[i][j];
//       cout<<endl;
//   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<3;j++)
       {
           s=s+a[i][j];
          
       }
       if(s>=2)
           { 
               ++ctr;
           }
           s=0;
   }
    
cout<<ctr;

    return 0;
}
