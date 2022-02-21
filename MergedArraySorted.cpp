#include<iostream>

int main(){
    int range;

    std::cout<<"Enter a range : ";
    std::cin>>range;

    int array1[range];
    int array2[range];
    int i,j;

    std::cout<<std::endl;
    std::cout<<"Enter elements in the first array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>array1[i];
    }
    std::cout<<std::endl;
    std::cout<<"The elements inside the first array : ";
    for(i=0;i<range;i++){
        std::cout<<array1[i]<<" ";
    }
    //copying array
    int limit = range+range;
    int merge[limit]; 
    int k = range;
    for(i=0;i<range;i++){
        merge[i]=array1[i];
    }
    std::cout<<std::endl;
    std::cout<<"Enter elements in the second array : "<<std::endl;
    for(i=0;i<range;i++){
        std::cout<<"Element-"<<(i+1)<<": ";
        std::cin>>array2[i];
        merge[k]=array2[i];
        k++;
    }
    std::cout<<std::endl;
    std::cout<<"The elements inside the second array : ";
    for(i=0;i<range;i++){
        std::cout<<array2[i]<<" ";
    }

    //array after merging
    std::cout<<"\nMerged array : ";
    for(i=0;i<limit;i++){
        std::cout<<merge[i]<<" ";
    }

    //Sorting the merged array in descending order
    int swap;
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(merge[i]<merge[j]){
                swap = merge[i];
                merge[i]=merge[j];
                merge[j]=swap;
            }
        }
    }

    std::cout<<"\nThe merged array in descending order : ";
    for(i=0;i<limit;i++){
        std::cout<<merge[i]<<" ";
    }

    //Sorting the merged array in ascending order
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(merge[i]>merge[j]){
                swap = merge[i];
                merge[i]=merge[j];
                merge[j]=swap;
            }
        }
    }
    std::cout<<"\nMerged Array in ascending order : ";
    for(i=0;i<limit;i++){
        std::cout<<merge[i]<<" ";
    }

    return 0;
}