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

    //exp : f(x) = e ^ X where e = euler 2.718281

    double exponential = std::exp(10);

    std::cout<<"Exponential : "<< exponential<< std :: endl;
    
    //pow is to elavate a number to another

    std::cout<< " 3 ^ 4 is: "<<std::pow(3,4)<< std::endl;
    std::cout<< " 9 ^ 3 is: "<<std::pow(3,4)<< std::endl;

    //log is the logaritmus to reac a number based on Euler

    std::cout<<"To get 1000, you´d need to elavete to 10 to the power of: "<<std::log10(10000)<<std::endl;

    //sqr 

    std::cout<<"sqr root of 64 is "<<std::sqrt(64)<<std::endl;
    return 0;
}