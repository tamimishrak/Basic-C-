//insert number in sorted array
#include<iostream>

int main(){
    int range,i,num;

    std::cout<<"Set a range : ";
    std::cin>>range;

    int arr[range];

    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<" : ";
        std::cin>>arr[i];
    }
    std::cout<<"Element inside the array : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" "; 
    }
    std::cout<<"\nEnter a number to insert in the array : ";
    std::cin>>num;

    //Process for inserting a number
    int position;
    for(i=0;i<range;i++){
        if(arr[i]<num){
            position++;
        } else {
            break;
        }
    }
    for(i=range-1;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=num;

    //Printing number
    for(i=0;i<=range;i++){
        std::cout<<arr[i]<<" ";
    }


    return 0;
}