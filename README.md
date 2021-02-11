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


## Linked List
Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Insertion | [insertion](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/Insertion.cpp) | pointers | 28th Dec |
2 | Searching | [searching](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/searching.cpp) | recursion;iteratively | 28th Dec |
3 | Middle element of LL | [middle](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/middlePt.cpp) | slow ptr and fast ptr | 28th Dec |
4 | Reverse | [reverse](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/reverse.cpp) | two adjacent ptrs | 28th Dec |
5 | Deletion | [deletion](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/deletion.cpp) | two adjacent ptrs | 28th Dec |
6 | Finding kth element from last | [findingKth](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/FindingKthFromLast.cpp) | traverse the fast ptr till k from head keeping the slow ptr at head. Then move both ptrs until fast reaches tail | 28th Dec |
7 | Merging Sorted LL | [mergeLL](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/mergingSortedLL.cpp) | create new ll; recursion | 29th Dec |
8 | MergeSort using LL| [mergesort](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/mergeSort.cpp) | combination of finding mid point and merging two sorted LL | 29th Dec |
9 | Detecting cycle in LL | [detectCycle](https://github.com/manohar2000/CB-Algorithms/blob/main/LinkedList/CycleDetection.cpp) | slow and fast ptrs; fast moves two steps and slow move one; if slow==fast then cycle is present; if we want find the start of the cycle, move the slow to head and move both ptrs one step, the point where the meet is the start==fast is the start of cycle | 29th Dec |

## Stacks and Queues
Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------| 
1 | Stack using vectors | [stacksImpl](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/StackUsingVectors.cpp) | creating a class stack and using vector stl| 29th Dec |
2 | Stack STL | [stackSTL](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/Stacktemplate.cpp) | STL | 29th Dec |
3 | Queue using array | [queue](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/queueUsingArray.cpp) | front and rear pointer with isfull() and isEmpty() methods | 29th Dec|
4 | Queue STL | [queueSTL](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/queueSTL.cpp) | STL | 29th Dec|
5 | Stack Reversal using aux stack | [reversal](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/stackReversal.cpp) | use an addition stack. Run a loop till n; In each iteration store the top in temp and transfer rest n-i elements to aux stack; Push the temp to bottom of current stack; Transfer the n-i elements from aux stack to curr stack | 30th Dec|
6 | Stack reversal using recustion | [stackRecur](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/stackreversalRecursion.cpp) | Implement two functions: reversal and place_at_bottom; reversal constantly calls itself and builds a reverse call stack, then call place_at_bottom with elements of this call stack; Place_at_bottom pushes the element at the bottom, else calls itself to build a call stack to put the element at bottom and then pushes the rest elements into the stack | 30th Dec |
7 | Balanced Paranthesis | [isBalanced](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/balancedparenthesis.cpp) | push if '(' and pop if ')' ; if the stack is empty at the end then it has a balanced parenthesis | 30th Dec |
8 | Stock Span | [stockspan](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/StockSpan.cpp) | Creating a stack of indices having strictly decreasing values. ans[i] = i - indice_at_of_stack | 30th Dec|
9 | Largest area under histogram | [LargestArea](https://github.com/manohar2000/CB-Algorithms/blob/main/Stacks%20and%20Queue/largestareaunderHist.cpp) | creating an leftarray  having indices of smallest hist in the left side and similar for rightside. area under each hist will be (r-l-1)xCurr_len | 5th Jan '21 |


## Trees
Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------|
1 | BuildingBST | [implementation](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/BuildingBT.cpp) | pointers and recursion | 4th Jan |
2 | Height of Tree | [height](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/leverorderraversal.cpp) | recursively call left subtree and right subtree; after reaching the bottom of tree return max(left,right) +1 | 4th Jan |
3 | Level Order Traversal | [levelorder](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/leverorderraversal.cpp) | recursively call func for left and right subtree while decrementing value of k; if k==1 print the data  | 4th Jan |
4 | BFS Traversal | [bfs](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/bfstraversal.cpp) | using queue; initializing the queue with root iteratively popping them and pushing their children into the queue until queue is empty | 4th Jan |
5 | Count and Sum of nodes | [countAndsum](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/countNodeandSum.cpp) | recursively calling the same func for left and right subtrees |  4th Jan |
6 | Diameter of a Tree | [diameter](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/diameter.cpp) | recursion. diameter can lie in 3 parts, height of the subtree, entirely in the left subtree or entirely in the right sub tree | 4th Jan |
7 | ReplaceNodebySum | [replaceBysum](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/replaceNodebySum.cpp) | recursion. storing the value of root in a variable and replacing it with sum of children | 4th Jan | 
8 | Is BT Balanced | [isBalanced](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/balanced.cpp) | create a pair of height and isBalanced. recursively call the func for left and right subtree. If (abs(hright-hleft))<=1 and left and right subtree then current subtree is balanced and height = max(left,right)+1 | 5th Jan |
9 | BST from Sorted Array | [BSTfromArray](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/btfromArray.cpp) | recursion. root->left = func(arr,start,mid-1) root->right = func(mid+1,end). until start>end. | 5th Jan |
10 | Insertion in BST | [insertion](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/InsertingInBST.cpp) | recursion | 5th Jan |
11 | Searching in BST | [searching](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/searchinBST.cpp) | recursion | 5th Jan |
12 | Deletion in BST | [deletion](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/deletioninBST.cpp) | 3 cases; 1. no children, then simply delete. 2. one child, then store the child in temp, delete the root and return temp; 2 children, then return inorder successor | 5th Jan |
13 | isBSTBalanced | [isBSTBalanced](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/isBSTbalanced.cpp) | checking if the root is greater than max of left subtree and less than min of right sub tree and calling the same func for left and right subtrees | 5th Jan |
14 | BSTtoLL | [bstToll](https://github.com/manohar2000/CB-Algorithms/blob/main/BinaryTree/BSTtoLL.cpp) | Recursion. Create a class LL with node* head and node* tail. There will 4 major cases. root has: 1)no child: ll.head=ll.tail=root;2)only left child:call the recursive func with left child. ll.head=leftll.head and ll.tail=root;3)only right child: ll.head=root and ll.tail=rightll.tail; root has both the children: call function for both the children. ll.head = leftll.head, ll.tail=rightll.tail. In all the cases connect the root accordingly. | 5th Jan |

## Heap
A heap is a complete tree.
Sno | Topic Name | My Solution | Logic Used | Date Completed |
----|------------|-------------|------------|----------------|
1 | Insertion and Deletion | [insertAndDelete](https://github.com/manohar2000/CB-Algorithms/blob/main/Heap/insertAndDelete.cpp) | Implement through a queue. children of a node are always at 2i and 2i+1; heapify: replace the first element with last and then heapify the first element| 6th Jan |
2 | Heap STL | [heap](https://github.com/manohar2000/CB-Algorithms/blob/main/Heap/heapSTL.cpp) | using queue and funtional(for min heap) header files |  6th Jan |
3 | Merging K sorted arrays | [mergeKarrays](https://github.com/manohar2000/CB-Algorithms/blob/main/Heap/MergingKsortedarrays.cpp) | create a heap and insert all the first elements of each array; remove the top element of the array and push a element from the same array from which the top element was removed. if array has no elements then push infinite | 6th Jan |
4 | Median in a stream of integers | [medianInstream](https://github.com/manohar2000/CB-Algorithms/tree/main/Heap) | maintain two heaps, leftheap-a max heap and rightheap-a min heap. if there are any elements in the right queue and right.top() is smaller than current element then add into right queue else add in left queue. The difference b/w sizes of these should not be greater than 1, in such a case transfer the top element. when queried either print the avg, if size equal else print the top of the largest heap | 6th Jan | 

## Graphs





