# Coding Block's Algorithm++ course

Important algorithms topic wise:


## Arrays

Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | generating subarrays | [@subarrays](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/Subarray%20Sum/generating%20subarrays.cpp) | Two indices to generating all pairs | 13th Dec |
2 | subarray sum | [@Kadane's Algo](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/Subarray%20Sum/kadane's%20algorithm.cpp) | Take the cummulative sum. If sum is negative change it to 0| 13th Dec|
3 | String Palindrome | [@Palindrome](https://github.com/manohar2000/CB-Algorithms/tree/main/arrays/Char%20arrays) | Two indices. One from start,other from end. Loop till i<j| 14th Dec|
4 | Consecutive dupl chars in a string | [@conschars](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/Char%20arrays/consecutive_duplicate_chars.cpp) | Two consecutive indices from the start| 14th Dec |
5 | 2d matrix spiral print | [@spiralPrint](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/2d-array/spiralprint.cpp) | 4 indices in 4 corners of the matrix | 14th Dec |
6 | 2d matrix wave print | [@waveprint](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/2d-array/waveform.cpp) | If column odd traverse from bottom to top, if column is even traverse from top to botton | 14th Dec |
7 | Rotate 2d matrix anticlockwise | [@rotateArray](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/2d-array/rotate_array.cpp) | Reverse rows/columns then transpose | 14th Dec |
8 | Staircase search | [@staircase](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/2d-array/staircase_search.cpp) | start top right, if curr>k j-=1 else i+=1 | 14th Dec |
9 | Sorting string based on token | [@sortingStrings](https://github.com/manohar2000/CB-Algorithms/blob/main/arrays/Strings/StringsChallenge.cpp) | tokenization,custom comparators,pairs | 15th Dec |


## Sorting and Searching

Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Bubble Sort | [@bubleSort](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/bubble%20sort.cpp) | placing the largest element in the last place of the unsorted array in subsequent iterations | 17th Dec |
2 | Selection Sort | [@selectionSort](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/selection_sort.cpp) | place the smallest element in the first index of the unsorted array in subsequents iterations | 17th Dec |
3 | Insertion Sort | [@insertionSort](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/insertion_sort.cpp) | sorting left side of the array | 17th Dec |
4 | Counting Sort | [@countingsort](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/counting_sort.py) | storing a cummulative freq array. | 17th Dec |
5 | Wave Sort | [@wavesort](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/wave_sort.cpp) | making each even index as local minima | 17th Dec |
6 | Binary Search | [@binarysearch](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/binary_search.cpp) | comparing the key with middle element and accordingly changing the mid-point | 17th Dec |
7 | lower/upper bound of an element | [@1st/last occurence](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/lower_upper_bound.cpp) | increasing/reducing the start/end for first/last occ respectively | 17th Dec |
8 | Sqrt of a no. with x precision | [@sqrt](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/sqrt.cpp) | for int part apply binary search on 0 to n, for decimal inc iteratively and check sqaure of ans | 18th Dec |
9 | Searching rotated sorted arr | [@srs](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/searching_in_rotated.cpp) | searching in 3 parts of array(visualize the graph of arr) | 18th Dec |
10 | Book Allocation Prob | [@allocation](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/book_allocation_prob.cpp) | binary search on range of total pages | 18th Dec |
11 | Partioning | [@partioning](https://github.com/manohar2000/CB-Algorithms/blob/main/Sorting%20and%20Searching/partioning.cpp) | two indices from start and replacing arr[i++] and arr[j++] if i++ is less | 20th Dec |

## Bit Masking

Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Generating all subsequences of a string| [@subsequences](https://github.com/manohar2000/CB-Algorithms/blob/main/Bitmasking/generating_subsequences.cpp) | generating all pow(2,n-1) masks and applying & b/w string and mask | 19th Dec |
2 | Index of lucky number | [@lucky no](https://github.com/manohar2000/CB-Algorithms/blob/main/Bitmasking/index_of_lucky_no.cpp) | permutation and combination | 19th Dec |

## Number Theory

Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Prime no. or not | [@isprime](https://github.com/manohar2000/CB-Algorithms/blob/main/NumberTheory/primeTilln.cpp) | Prime Seive | 20th Dec |
2 | SubArrayDivisiblebyN | [@subdivbyN](https://github.com/manohar2000/CB-Algorithms/blob/main/NumberTheory/subArrayDivisiblebyN.cpp) | cal modulo prefix sum, and calculate combination | 20th Dec |

## Recursion and Backtracking
Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Power of N | [@powOfN](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/PowerOfN.cpp) | reducing b in each rec call, base is b==0 | 20th Dec |
2 | Ascending/Descending till N | [@PrintingN](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/printingNo.cpp) | concept of call stack | 20th Dec |
3 | StringToInt | [@stringToInt](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/StringToInt.cpp) | char[i]-'0' + funccall with i+1, until i>=n ] | 20th Dec |
4 | IntToSpelling | [2048](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/IntToSpelling.cpp) | generating a map of int and recursion with (n/10) until n==0 | 20th Dec |
5 | BinarySearchRec | [binarySearch](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/binarySearchRec.cpp) | rec with change of (low,high) until low>=high | 20th Dec |
6 | Bubble Sort Rec | [bubbleSort](https://github.com/manohar2000/CB-Algorithms/blob/main/Backtracking%20and%20Recursion/bubbleSort.cpp) | call rec till j+1 and swapping if j==n-1 then n-=1 until n==1 | 20th Dec |
7 | Merge Sort Rec | [MergeSort](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/MergeSort.cpp) | constantly merging the array until start>=end, calling merge function to combine two arrays | 20th Dec |
8 | Quick Sort Rec | [quicksort](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/quicksort.cpp) | recursively partition around the last element until start>=end | 20th Dec |
9 | Generating Subsequences | [generatingsubseq](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/generating_subsequences.cpp) | ! Review from video ! | 21st Dec |
10 | KeyPad Substrings | [keypadSubstr](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/keypadSubstrings.cpp) | iterating through 3 values(e.g 2-"abc") and calling recursion func for i+1(inp arr) and j+1(out arr) | 21st Dec |
11 | Rat in a maze | [rateInmaze](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/RatInaMaze.cpp) | for every i,j check if "X" is present return false or if reached m,n then return true else call for func for down(i+1,j) and right(i,j+1) and mark it as 1. Mark 0 after both func are called | 22nd Dec |
12 | N-Queen | [N-queen](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/N-Queen.cpp) | call recursively for row+1. construct 3 bit arrays:column,diag 1 and diag2. for every call loop from c=0 to n and check if that index is occupied in the array. | 22nd Dec |
13 | Suduko Solver | [suduko](https://github.com/manohar2000/CB-Algorithms/blob/main/Recursion%20and%20Backtracking/SudukoSolver.cpp)| for all empty cells try to fill no. from 1 to 9 and build a function canplace(), which checks if the no. can be placed or not. call recursively for j+1 until row end and then i+1 | 22nd Dec |
