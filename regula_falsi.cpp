#include<bits/stdc++.h>
using namespace std;
double f(double x){
return (x*x*x -x-1);
}
double check_validity(double a,double b){
if(f(a)*f(b)>0){
    cout << "invalid" <<endl;
    return 0;
}

else return 1;
}

int main(){
double a,b,c,error;
cin >> a>>b>>error;
double valid = check_validaty(a,b);
if(valid == 0)
    return 0;
while (abs(a-b)>  error){

    c=(a*f(b) - b*f(a))/(f(b)-f(a));

    if(f(c)==0){
        break;
    }
    else if(f(a)*f(c)<0){
        b=c;
    }
    else {
        a=c;
    }
    cout << "c =" <<c<< "f(c) = "<< f(c)<<endl;
}

cout<< "The root is "<<c<<endl;
cout<<"The value of f(c) is "<<f(c)<<endl;

return 0;
}
