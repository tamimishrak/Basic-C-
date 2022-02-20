#include<iostream>

int main(){
    int number,temp,reverse,remainder;

    std::cout <<"Enter a number : ";
    std::cin >>number;
    std::cout <<"The number you entered is "<<number<<std::endl;

    reverse = 0;
    for(temp=number;number!=0;number/=10){
        remainder = number % 10;
        reverse = reverse*10+remainder;
    } 

    std::cout <<"The reversed number is "<<reverse<<std::endl;
    if(temp==reverse){
        std::cout <<temp<<" is a palindrome number";
    } else {
        std::cout <<temp<<" is not a palindrome number.";
    }

    return 0;
}