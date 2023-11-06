#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
// Function for bit stuffing
void bitStuffing(int N, int arr[])
{
     
    // Stores the stuffed array
    int brr[30];
 
    // Variables to traverse arrays
    int i, j, k;
    i = 0;
    j = 0;
 
    // Stores the count of consecutive ones
    int count = 1;
 
    // Loop to traverse in the range [0, N)
    while (i < N)
    {
         
        // If the current bit is a set bit
        if (arr[i] == 1)
        {
             
            // Insert into array brr[]
            brr[j] = arr[i];
 
            // Loop to check for
            // next 5 bits
            for(k = i + 1; arr[k] == 1 && k < N && count < 5;
                k++)
            {
                j++;
                brr[j] = arr[k];
                count++;
 
                // If 5 consecutive set bits
                // are found insert a 0 bit
                if (count == 5)
                {
                    j++;
                    brr[j] = 0;
                }
                i = k;
            }
        }
 
        // Otherwise insert arr[i] into
        // the array brr[]
        else
        {
            brr[j] = arr[i];
        }
        i++;
        j++;
    }
 
    // Print Answer
    for(i = 0; i < j; i++)
        cout << brr[i];
}
 
// Driver code
int main()
{
    int N = 6;
    int arr[] = { 1, 1, 1, 1, 1, 1 };
 
    bitStuffing(N, arr);;
    return 0;
}
 
// This code is contributed by target_2
Output
1111101
Time Complexity: O(N)
Auxiliary Space: O(N)

Bit Destuffing or Bit Unstuffing is a process of undoing the changes in the array made during the bit stuffing process i.e, removing the extra 0 bit after encountering 5 consecutive 1’s.

Examples: 

Input: N = 7, arr[] = {1, 1, 1, 1, 1, 0, 1}
Output: 111111
Explanation: During the traversal of the array, 5 consecutive 1’s are encountered after the 4th index of the given array. Hence, the next 0 bit must be removed to de-stuffed array. 

Input: N = 6, arr[] = {1, 0, 1, 0, 1, 0}
Output: 101010

Recommended: Please try 
 
// Function for bit de-stuffing
void bitDestuffing(int N, int arr[])
{
    // Stores the de-stuffed array
    int brr[30];
 
    // Variables to traverse the arrays
    int i, j, k;
    i = 0;
    j = 0;
 
    // Stores the count of consecutive ones
    int count = 1;
 
    // Loop to traverse in the range [0, N)
    while (i < N) {
 
        // If the current bit is a set bit
        if (arr[i] == 1) {
 
            // Insert into array brr[]
            brr[j] = arr[i];
 
            // Loop to check for
            // the next 5 bits
            for (k = i + 1;
                 arr[k] == 1
                 && k < N
                 && count < 5;
                 k++) {
                j++;
                brr[j] = arr[k];
                count++;
 
                // If 5 consecutive set
                // bits are found skip the
                // next bit in arr[]
                if (count == 5) {
                    k++;
                }
                i = k;
            }
        }
 
        // Otherwise insert arr[i] into
        // the array brr
        else {
            brr[j] = arr[i];
        }
        i++;
        j++;
    }
 
    // Print Answer
    for (i = 0; i < j; i++)
        printf("%d", brr[i]);
}
 


