#include<iostream>

int main(){
    int range,i,number;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];

    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>arr[i];
    }

    std::cout<<"Elements inside the array : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<"\nEnter a number to check : ";
    std::cin>>number;

    //checking for the specific element
    bool found;
    for(i=0;i<range;i++){
        if(number==arr[i]){
            found = true;
        } 
    }

    if(found==true){
        std::cout<<number<<" is inside the array.";
    } else {
        std::cout<<number<<" is not inside the array.";
    }


    return 0;

}