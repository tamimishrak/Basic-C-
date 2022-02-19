#include<iostream>

int main(){
    int i,j,limit;

    std::cout <<"Enter a limit : ";
    std::cin >> limit;
    
    int arr[limit];
    
    //user input
    std::cout <<"Enter elements in the array : "<< std::endl;
    for(i=0;i<limit;i++){
        std::cout <<"Element-"<<(i+1)<<": ";
        std::cin >>arr[i];
    } 
    std::cout <<"The elements in the array are : ";
    for(i=0;i<limit;i++){
        std::cout <<arr[i]<<" ";
    }
    
    //Checking for repeated elements
    int dup[limit];
    int k = 0,temp;

    for(i=0;i<limit;i++){
        temp = arr[i];
        for(j=i+1;j<limit;j++){
            if(temp==arr[j]){
                dup[k] = temp;
                k++;
            }
        }
    }
    //removing repeated elements from the dup array 
    int l;
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(dup[i]==dup[j]){
                for(l=j;l<k-1;l++){
                    dup[l]=dup[l+1];

                }
                k--;
                j--;
            }
        }
    }

    //Final output
    std::cout <<"\nThe duplicate elements in the array are : ";
    for(i=0;i<k;i++){
        std::cout <<dup[i]<<" ";
    }   

    return 0;
}