#include<iostream>

int main(){
    int range,i,target,j;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];
    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>arr[i];
    }

    std::cout<<"The elements inside the array are : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }
    //copy
    int copy[range];
    for(i=0;i<range;i++){
        copy[i]=arr[i];
    }
    std::cout<<std::endl;
    //comparing sum
    target = 9;
    for(i=0;i<range;i++){
        for(j=i+1;j<range;j++){
            if(arr[i]+copy[j]==target){
                std::cout<<"\nThe numbers are "<<arr[i]<<" and "<<copy[j]<<std::endl;
                std::cout<<"Index number of "<<arr[i]<<" and "<<copy[j]<<" is "<<i<<","<<j<<std::endl;
            }
        }
    }
   
    

    return 0;
}