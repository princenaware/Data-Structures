# Data Structures
### Author - Prince Naware
 
# Liner Search
 ## What is Linear Search?  
 Linear Search (also known as Sequential Search) is the most basic searching algorithm. It works by visiting every element in a list one by one, starting from the beginning, until the desired element is found or the list ends.
 
 ## The Logic (Step-by-Step)
 1) Input: An array of elements and a key (the value you want to find).
 2) Start: Begin at the first index ($0$).
 3) Compare: Check if the current element is equal to the key.
 4) Match: If arr[i] == key, return the index $i$ (Success).
 5) Move: If not, move to the next index ($i+1$).
 6) End: If you reach the end of the array without a match, the element is not present.

##  Complexity Analysis 
In DSA, we measure how "heavy" an algorithm is using Big O Notation.

Time Complexity:
     Best Case: $O(1)$ — Occurs when the element you are looking for is at the first position.
     Average Case: $O(n)$ — Occurs when the element is somewhere in the middle.
     Worst Case: $O(n)$ — Occurs when the element is at the very last position or not present at all.
     
Space Complexity: $O(1)$ — Because we are not using any extra memory (like another array) to perform the search.
     
 
