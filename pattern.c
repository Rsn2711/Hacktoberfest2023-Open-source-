#include <stdio.h>

int main() {
    int n;
    
     printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input for the number of elements.\n");
        return 1; 
    }
    
    int arr[n];
    int sum = 0;
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    double average = (double)sum / n;
    
    printf("Average of %d elements is: %.2lf\n", n, average);
    
    return 0;
}
