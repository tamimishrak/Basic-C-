#include<iostream>

int main(){
    int range;
    int i;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];

    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>arr[i];
    }

    std::cout<<"The elements inside the array : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }

    //checking for consecutive number
    int temp,k;
    int cons_num[range];
    k=0;
    std::cout<<"\nThe elements that are in consecutive order : ";
    for(i=0;i<range-2;i++){
        if(arr[i]==arr[i+1] && arr[i]==arr[i+2]){
            std::cout<<arr[i]<<" ";
        }
    }

    return 0;
}
