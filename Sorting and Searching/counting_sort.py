n = int(input())
arr = list(map(int,input().split(" ")))

def insertion_sort(arr,n):
    '''
    credits GFG - https://www.geeksforgeeks.org/counting-sort/
    For simplicity, consider the data in the range 0 to 9. 
    Input data: 1, 4, 1, 2, 7, 5, 2
    1) Take a count array to store the count of each unique object.
    Index:     0  1  2  3  4  5  6  7  8  9
    Count:     0  2  2  0   1  1  0  1  0  0

    2) Modify the count array such that each element at each index 
    stores the sum of previous counts. 
    Index:     0  1  2  3  4  5  6  7  8  9
    Count:     0  2  4  4  5  6  6  7  7  7

    The modified count array indicates the position of each object in 
    the output sequence.
    
    3) Output each object from the input sequence followed by 
    decreasing its count by 1.
    Process the input data: 1, 4, 1, 2, 7, 5, 2. Position of 1 is 2.
    Put data 1 at index 2 in output. Decrease count by 1 to place 
    next data 1 at an index 1 smaller than this index.
    
    '''
    
    #creating frequency array
    freq_arr = [0]*(max(arr)+ 1)
    for i in arr:
        freq_arr[i]+=1
        
    # calculating cummulative frequency
    cum_sum = freq_arr[0]
    for i in range(1,len(freq_arr)):
        cum_sum+=freq_arr[i]
        freq_arr[i] = cum_sum
    

    # output array
    output_arr = [0]*n
    for i in range(0,n):
        output_arr[freq_arr[arr[i]]-1] = arr[i]
        freq_arr[arr[i]]-=1

    return output_arr
    
print(insertion_sort(arr,n))
        