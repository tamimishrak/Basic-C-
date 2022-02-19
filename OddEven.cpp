#include<iostream>

int main(){
    int i,range;

    std::cout <<"Enter a range : ";
    std::cin >>range;

    int array[range];
    std::cout <<"Enter elements in the array : "<< std::endl;
    for(i=0;i<range;i++){
        std::cout <<"Element-"<<(i+1)<<": ";
        std::cin >>array[i];
    }

    std::cout <<"The elements inside the array are : ";
    for(i=0;i<range;i++){
        std::cout <<array[i]<<" ";
    }

    //Checking for odd and even numbers inside the array 
    //for odd
    int odd[range];
    int k,temp1;
    k=0;
    for(i=0;i<range;i++){
        temp1=array[i];
        if(temp1%2!=0){
            odd[k]=temp1;
            k++;
        }
    }
    //for even
    int even[range];
    int l,temp2;
    l=0;
    for(i=0;i<range;i++){
        temp2=array[i];
        if(temp2%2==0){
            even[l]=temp2;
            l++;
        }
    }

    //printing odd
    std::cout <<"\n\nThe odd numbers inside the array : ";
    for(i=0;i<k;i++){
        std::cout <<odd[i]<<" ";
    }
    //printing even
    std::cout <<"\nThe even numbers inside the array : ";
    for(i=0;i<l;i++){
        std::cout <<even[i]<<" ";
    }

    return 0;
}