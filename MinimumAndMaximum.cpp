#include<iostream>

int main(){
    int range,i,max,min;

    std::cout <<"Enter a range : ";
    std::cin >>range;

    int array[range];
    std::cout <<"Enter elements in the array : "<< std::endl;
    for(i=0;i<range;i++){
        std::cout <<"Element-"<<(i+1)<<": ";
        std::cin >>array[i];
    }
    
    std::cout <<"\nThe elements in the array are : ";
    for(i=0;i<range;i++){
        std::cout <<array[i]<<" ";
    }

    //checking for maximum number 
    max = array[0];
    for(i=0;i<range;i++){
        if(max<array[i]){
            max = array[i];
        }
    }

    std::cout <<"\n\nThe maximum number inside the array is "<<max<<".";

    //Checking fot minimum number 
    min = array[0];
    for(i=0;i<range;i++){
        if(min>array[i]){
            min = array[i];
        }
    } 
    
    std::cout <<"\nThe minimum number in the array is "<<min<<".";


    return 0;
}