import random
import time
from matplotlib import pyplot as plt
from insertionSort import insertionSort


if __name__ == '__main__':

    arr1k = [random.randint(0, 1000) for i in range(1000)]

    arr5k = [random.randint(0, 5000) for i in range(5000)]

    arr10k = [random.randint(0, 10000) for i in range(10000)]

    arr50k = [random.randint(0, 50000) for i in range(50000)]

    payloadArr = [arr1k, arr5k, arr10k, arr50k]
    tempArr = []
    timeArr = []
    completionTime = 0

    for arr in payloadArr:
        for i in range(0, 4):
            start = time.time()
            insertionSort(arr)
            end = time.time()
            tempArr.append(end-start)
        avg = sum(tempArr)/5
        timeArr.append(avg)
        tempArr = []
        completionTime = (completionTime+1)/4
        print(f"Arrays Evaluated: {completionTime*100}%")
    print(timeArr)

    plt.plot([1000, 5000, 10000, 50000], timeArr, 'ro-')
    plt.xlabel('Array Size')
    plt.ylabel('Time in seconds (s)')
    plt.title('ECE 341 HW2: Insertion Sort \n Time Complexity Analysis of Insertion Sort')
    plt.show()

    # end of file