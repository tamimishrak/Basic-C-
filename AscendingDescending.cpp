#include<iostream>

int main(){
    int i,range,max,min,j,temp;

    std::cout <<"Enter a range : ";
    std::cin >>range;

    //array input
    int array[range];
    std::cout <<"Enter elements in the array : "<< std::endl;
    for(i=0;i<range;i++){
        std::cout <<"Element-"<<(i+1)<<": ";
        std::cin >>array[i];
    }

    std::cout <<"The elements inside the array : ";
    for(i=0;i<range;i++){
        std::cout <<array[i]<<" ";
    }

    //Sorting in ascending order 
    std::cout <<"\n\nArray elements in ascending order : ";
    for(i=0;i<range;i++){
        for(j=i+1;j<range;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<range;i++){
        std::cout <<array[i]<<" ";
    }

    //Sorting in descending order 
    std::cout <<"\nArray elements in descending order : ";
    for(i=0;i<range;i++){
        for(j=i+1;j<range;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<range;i++){
        std::cout <<array[i]<<" ";
    }

    return 0;
}