#include<bits/stdc++.h>
using namespace std;

double f(double x){
return x*x*x -2*x -5;
}
int main(){
double x1,x2,x3,error;
cin>>x1>>x2>>error;
cout<<setprecision(3)<<fixed;

do{
    double f1= f(x1);
    double f2= f(x2);
    if(f1 ==f2){
        cout<<"error" <<endl;
    }
    x3 = x2-((f(x2)*(x2-x1) )/(f(x2)-f(x1)));
    cout<<x3<<endl;
    x1=x2;
    x2=x3;
}while(abs(x1-x2)>error);
cout<< "The root is :" <<x2;
return 0;
}
