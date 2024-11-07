// Merge sort
#include <stdio.h>

void merge(int *arr, int left, int mid, int right){
    //Sizes of both arr
    int n1 = mid - left + 1;
    int n2 = right - mid; 

    int leftArray[n1], rightArray[n2];

    for(int i=0; i<n1; i++){
        leftArray[i] = *(arr + left + i); // Copy the data to temp arrays(left --> Mid)
    }
    for(int i=0; i<n2; i++){
        rightArray[i] = *(arr + mid+1 + i); // Coppy the data to temp arrays(mid --> right)
    }

    // Sort the arrays in decending order
    int i=0, j=0, k=left;
    while(i<n1 && j<n2){
        if(leftArray[i]>=rightArray[j]){
            *(arr+k) = leftArray[i];
            i++;
        } else {
            *(arr+k) = rightArray[j];
            j++;
        }
        k++;
    }
        while(i<n1){
        *(arr + k) = leftArray[i];
        i++;
        k++;
    }

    //Copy the remaining values from right array 
    while(j<n2){
        *(arr + k) = rightArray[j];
        j++;
        k++;
    }
}


void merge_sort(int *arr, int left, int right){
    if(left<right){
        int mid = left + ((right-left)/2);

        //Call it self to sort the left arr
        merge_sort(arr, left, mid);
        //Call itself to sort the right arr
        merge_sort(arr, mid+1, right);

        //Merge both arr
        merge(arr, left, mid, right);
    }
}

int main(){
    int user_input[10];
    //int *ptr = user_input;
    
    for(int i = 0; i<(sizeof(user_input)/sizeof(user_input[0])); i++){
        printf("Please enter a number(%d): ", i+1);
        scanf("%d", &user_input[i]);
    }

    //10 4 5 2 1 98 23 12 7 101 // 4 5 2 1 98 23 12 7 101 10
    merge_sort(user_input, 0, 9);

    for(int i=0; i<10; i++){
        printf("%d ", user_input[i]);
    }

    return 0;
}