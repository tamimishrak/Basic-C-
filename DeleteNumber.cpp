#include<iostream>

int main(){
    int range,i,number,j;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];

    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>arr[i];
    }

    std::cout<<"\nThe elements inside the array : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"\nEnter a number to delete from the array : ";
    std::cin>>number;

    //checking for the number 
    bool found;
    int track;
    for(i=0;i<range;i++){
        if(number==arr[i]){
            found = true;
            track=i;
        }
    }

    if(found==true){
        std::cout<<"The new array is : ";
        for(j=track;j<range;j++){
                arr[j]=arr[j+1];
        }
        range--;
        
        for(i=0;i<range;i++){
            std::cout<<arr[i]<<" ";
        }
    } else{
        std::cout<<"\nNo such numbers found.";
    }

    return 0;
}