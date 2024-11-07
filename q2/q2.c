#include <stdio.h>

void price_analyzer(float prices[3][7], int row, int column){
    float average = 0;
    float smallest;
    float biggest;
    float total = 0;
    int biggest_day = 0;
    int smallest_day = 0;

    for(int i=0; i<row; i++){
        smallest = prices[i][0];
        biggest = prices[i][0];
        total = 0;
        printf("Company %d:\n", i+1);
        for(int z=0; z<column; z++){
            if(prices[i][z]<=smallest){
                smallest = prices[i][z];
                smallest_day = z+1;
            } else if(prices[i][z]>=biggest){
                biggest = prices[i][z];
                biggest_day = z+1;
            }
            total = total + prices[i][z];
        }
        average = total / column;
        printf("Average Closing Price: $%.2f\n", average);
        printf("Highest Closing Price: $%.2f (Day %d)\n", biggest, biggest_day);
        printf("Lowest Closing Price: $%.2f (Day %d)\n", smallest, smallest_day);
        printf("\n");
    }
}

int main(){
    float prices[3][7] = {
        {45.20,44.80,44.50,45.60,45.75,45.90,45.40}, 
        {62.30,62.10,64.80,63.50,61.90,59.40,60.70},
        {30.75,34.25,32.90,29.80,31.20,33.10,30.95}};


    price_analyzer(prices, 3, 7);


}
