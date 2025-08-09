#include<bits/stdc++.h>
using namespace std;

double f(double x){
return x*x*x-x-2;
}

double fd(double x){
return 3*x*x-1;
}


int main(){
double x,error;
cin>>x>>error;

if(f(x)==0){
    cout<<"The root is : "<<x<<endl;
    return 0;
}

double h = f(x) /fd(x);
while(abs(h)> error){
    h = f(x)/fd(x);
    x=x-h;
}
cout<<"The value of root is "<<x<<endl;

return 0;
}
