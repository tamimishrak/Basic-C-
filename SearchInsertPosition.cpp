#include<iostream>

int main(){
    int arr[] = {1,3,5,6};
    int i,length,num;

    length = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"The given array is : ";
    for(i=0;i<length;i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<"\nEnter a number : ";
    std::cin>>num;

    //checking the number if it exists in the array 
    bool found = false;
    int track;
    for(i=0;i<length;i++){
        if(num==arr[i]){
            found=true;
            track = i;
        }
    }

    //Printing the number
    int position=0;
    int track_new;
    if(found==true){
        std::cout<<num<<" is in the array and occurs at "<<track<<std::endl;
    } else { 
        for(i=0;i<length;i++){
            if(arr[i]<num){
                position++;
            } else {
                break;
            }
        }

        for(i=length-1;i>=position;i--){
            arr[i+1]=arr[i];
        }
        arr[position]=num;
       
        std::cout<<num<<" will occure at "<<position<<std::endl;
    }

    return 0;
}