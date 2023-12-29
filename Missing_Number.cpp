#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int n;
    cin>>n;
    long long int a[n];
   long long int f[200001]={0};
   for(int i=0;i<n-1;i++){
    cin>>a[i];
    f[a[i]]++;
   }
   sort(a,a+n);
   for(long long int i=1;i<200001;i++){
     if(f[i]==0)
     {
        cout<<i<<"\n";
        break;
     }
   }
      }
