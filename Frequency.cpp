#include<iostream>

int main(){
    int range;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int arr[range];
    int i,j;

    std::cout<<"Enter elements inside the array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<" : ";
        std::cin>>arr[i];
    }
    std::cout<<"The elements inside the array are : ";
    for(i=0;i<range;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    int count,k;
    int temp[range];
    k=0;
    for(i=0;i<range;i++){
        count = 1;
        if(arr[i]!=-1){
           for(j=i+1;j<range+1;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            } 
        }
        temp[i]=count;
        
    }
    
    for(i=0;i<range;i++){
        if(arr[i]!=-1){
            std::cout<<"Frequency of "<<arr[i]<<" - "<<temp[i]<<std::endl;
        }
    }
    return 0;
}