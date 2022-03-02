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
    int max = arr[0];
    int track;
    for(i=0;i<range;i++){
        if(max<arr[i]){
            max=arr[i];
            track++;
        }
    }
    std::cout<<"\n\nThe smallest number is "<<max<<std::endl;
    //deleting the smallest number
    for(int j=track;j<range;j++){
        arr[j]=arr[j+1];
    }
    range--;
    //Detecting the small number after deletion
    int max2 = arr[0];
    for(i=0;i<range;i++){
        if(max2<arr[i]){
            max2=arr[i];
        }
    }
    std::cout<<"\nThe second smallest number is "<<max2<<std::endl;

    return 0;
}