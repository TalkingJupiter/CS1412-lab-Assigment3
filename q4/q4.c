#include <stdio.h>

void inputArray(int *arr, int size);
void printArtay(int *arr, int size, char name[], char stat[]);
void swapArray(int *sourceArr, int *destArr, int size);


int main(){
    
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    //TODO: Declare the arrays
    int input_arr[size];
    int dest_arr[size];

    //TODO: Get the numbers

    //TODO: Enter the requested prototypes

    

}

void inputArray(int *arr, int size){
    int inp_num;
    for(int i=0; i<size; i++){
        printf("Enter a number: ");
        scanf("%d", &inp_num);
        *(arr+i) = inp_num;
    }
}

void printArray(int *arr, int size, char name[], char stat[]){
     printf("%s array %s swapping: ", name, stat);
    for(int i=0; i<size; i++){
        if(i == size -1){
            printf("%d", *(arr+i)); //Remove the comma on the last element
        }else{
            printf("%d, ", *(arr+i));
        }
        printf("\n");
    }
}

void swapArray(int *sourceArr, int *destArr, int size){
    //TODO: Swap the arrays
}