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


