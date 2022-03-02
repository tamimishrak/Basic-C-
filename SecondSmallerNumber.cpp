#include<iostream>

int main(){
    int range,i;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int  arr[range];
    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<" : ";
        std::cin>>arr[i];
    }
    //displaying array
    std::cout<<"\nThe elements inside the array : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }
    //Detecting the smallest number
    int min = arr[0];
    int track;
    for(i=0;i<range;i++){
        if(min>arr[i]){
            min=arr[i];
            track++;
        }
    }
    std::cout<<"\n\nThe smallest number is "<<min<<std::endl;
    //deleting the smallest number
    for(int j=track;j<range;j++){
        arr[j]=arr[j+1];
    }
    range--;
    //Detecting the small number after deletion
    int min2 = arr[0];
    int track2;
    for(i=0;i<range;i++){
        if(min2>arr[i]){
            min2=arr[i];
            track++;
        }
    }
    std::cout<<"\nThe second smallest number is "<<min2<<std::endl;

    return 0;
}