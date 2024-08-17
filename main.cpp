//library that provide basic commands in c++
#include<iostream>
//library that provide trigonometry commands
#include<cmath>

int main(){

    //variable declaration double
    double weight{7.7};

    //floor takes the number down  if decimal

    std::cout<<"Weight rounded to floor: "<<std::floor(weight)<<std::endl;

    //ceil takes the number above if decimal

    std::cout<<"Weight rounded to ceil: "<<std::ceil(weight)<<std::endl;

    //ABS is the absolute number

    double savings{-5000};

    std::cout<<"Abs value of Weight: "<<std::abs(weight)<<std::endl;
    std::cout<<"Abs value of savings: "<<std::abs(savings)<<std::endl;


    return 0;
}