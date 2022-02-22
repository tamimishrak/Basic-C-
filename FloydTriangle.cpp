#include<iostream>

int main(){
    int number;

    std::cout<<"Enter number of rows : ";
    std::cin>>number;

    int i,j,k=1;

    for(i=1;i<=number;i++){
        for(j=i;j>=1;j--){
            std::cout<<j%2;
        }
        std::cout<<std::endl;
    }
}