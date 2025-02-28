# ECE 341 UMass Amherst
# Author: William Neel
# Date: 2/16/2025

# Homework Assignment 2: Insertion Sort Implementation

def insertionSort(arr):
    for j in range(1, len(arr)):
        key = arr[j]
        i = j - 1
        while i >= 0 and arr[i] > key:
            arr[i+1] = arr[i]
            i = i - 1
        arr[i+1] = key
    return arr

# end of file