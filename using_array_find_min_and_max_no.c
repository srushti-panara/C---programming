#include <stdio.h>

// Function to find maximum
int max(int arr[], int size) {  // Function to find maximum element in array  
    int maximum = arr[0];   // Assume first element is the maximum 
    for (int i = 1; i < size; i++) {  // Traverse the array from second element 
        if (arr[i] > maximum) {  // If current element is greater than maximum found so far 
            maximum = arr[i]; // Update maximum 
        } 
    }
    return maximum; 
}

// Function to find minimum
int min(int arr[], int size) {  // Function to find minimum element in array 
    int minimum = arr[0];  // Assume first element is the minimum 
    for (int i = 1; i < size; i++) {  // Traverse the array from second element
        if (arr[i] < minimum) {  // If current element is less than minimum found so far 
            minimum = arr[i];  // Update minimum
        }
    }
    return minimum;
}

int main() {
    int n;         
    printf("Enter number of elements: ");      
    scanf("%d", &n);      

    int a[n];  // Declare an array of size n

    for (int i = 0; i < n; i++) {  // Input elements of the array 
        printf("Enter element %d: ", i + 1);  // Prompt for each element 
        scanf("%d", &a[i]);  
    }

    for (int i = 0; i < n; i++) {  // Output elements of the array 
        printf("%d ", a[i]);  
    }
    printf("\n");

    printf("Maximum element is: %d\n", max(a, n));
    printf("Minimum element is: %d\n", min(a, n));

    return 0;
}

/*

Input: 
Enter number of elements: 3
Enter element 1: 10
Enter element 2: 5
Enter element 3: 20
Output:
10 5 20
Maximum element is: 20
Minimum element is: 5
Explanation:
The program first takes the number of elements as input and then the elements themselves. It then finds the maximum and minimum elements using the max and min functions respectively and prints them. 

The max function iterates through the array, comparing each element to find the largest one, while the min function does the same to find the smallest one.

*/