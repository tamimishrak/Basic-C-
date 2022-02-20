#include<iostream>

int main(){
    signed int number;
    int temp,remainder,reverse;

    std::cout <<"Enter a number : ";
    std::cin >>number;

    std::cout <<"The number you entered : "<<number<< std::endl;
    reverse = 0;
    for(temp=number;number!=0;number/=10){
        remainder = number%10;
        reverse = reverse*10+remainder; 
    }

    std::cout <<"The reversed number is "<< reverse << std::endl;

    return 0;
}