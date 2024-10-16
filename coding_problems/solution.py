#!/bin/emv python3
# -*- coding: utf-8 -*-
# uaing binary search 

def solution(arr):
    left, right = 0, len(arr) - 1
    
    while left < right:
        mid = (left + right) // 2
        
        # Check if mid is greater than right
        if arr[mid] > arr[right]:
            left = mid + 1
        else:
            right = mid
            
    return arr[left]
    

def main():    
    arr = [3, 4, 5, 88, 2]
    print(solution(arr))    
    
if __name__ == '__main__':
    main()