#include<iostream>

int main(){
    int range,i,j;
    int count;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];
    std::cout<<"Enter the elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>arr[i];
    }

    std::cout<<"The elements inside the array are : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }
    //comparing
    std::cout<<"\nThe unique elements inside the array : ";
    int unique[range];
    for(i=0;i<range;i++){
        count=0;
        for(j=0;j<range+1;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                count++;
                }
            }
        }
        if(count==0){
            std::cout<<arr[i]<<" ";
        }
    }
    
    return 0;
    
}