#include <stdio.h>
int main(){
    int items = 50;
    float cost_per_item = 8.9;
    float total_cost = items * cost_per_item;
    char currency = '$';
    
    printf("Total number of items: %d", items);
    printf("\nCost of each item: %c %.2f", currency, cost_per_item);
    printf("\nTotal cost: %c %.2f", currency, total_cost);
}