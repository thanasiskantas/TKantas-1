#include <iostream>
#include <cmath>

int fac(int c){

    int res = 1;

    for(int i=1; i<=c; i++){

        res = res * i;

    }

    return res;
}

double sin (double x, int k){
    double sum=0;
    for(int i=0; i<=k; i++){
        sum = sum + ((std::pow(-1,i))/fac(2*i+1))*(std::pow(x*3.1415/128,2*i+1));
    }

    return sum;

}


int main(){
    double x,k;

    std::cout<<"enter a value k:  ";
    std::cin>> k;

    for(int i=-128; i<=127; i++){
        std::cout<<i<<"  "<<127*sin(i,k)+128<<std::endl;
    }


}