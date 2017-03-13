import numpy as np
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import random
import time


def maxsubsumOn(vector):
    max_ending_here = max_so_far = vector[0]
    for x in vector[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far


def maxsubsumOn3(vector):
    maxsum = 0
    vectorlen = len(vector)
    for i in range(vectorlen):
        for j in range(i,vectorlen):
            thissum=0
            for k in range (i,j):
                thissum=thissum+vector[k]
                if(thissum>maxsum):
                    maxsum=thissum
    return maxsum


def find_max_triple(a,b,c):
    if a>b:
        if b>c:
            return a
        elif a>c:
            return a
        else:
            return c
    elif b>c:
        return b
    else:
        return c


def find_middle(list):
    middle=int(len(list)/2)
    
    sum_left_max=0
    sum_left=0
    for i in range(middle-1,-1,-1):
        sum_left=sum_left+list[i]
        if sum_left>sum_left_max:
            sum_left_max=sum_left
      
        
    sum_right_max=0
    sum_right=0
    for i in range(middle,len(list)):
        sum_right=sum_right+list[i]
        if sum_right>sum_right_max:
            sum_right_max=sum_right
    
    return sum_left_max+sum_right_max


def maxsubsumOnlogn(array):
    if(len(array)<2):
        return sum(array)
    else:
        middle=int(len(array)/2)
        sum_left=maxsubsumOnlogn(array[0:middle - 1])
        sum_right=maxsubsumOnlogn(array[middle:])
        sum_middle=find_middle(array)
    return find_max_triple(sum_left,sum_right,sum_middle)


if __name__ == '__main__':
    nib = random.sample(range(-500, 500), k=100)
    nonib = random.sample(range(-5000, 5000), k=500)
    zuybin = random.sample(range(-50000, 50000), k=1000)
    noylim = random.sample(range(-500000, 500000), k=2000)

    circle = {'nib': nib,
              'nonib': nonib,
              'zuybin': zuybin,
              'noylim': noylim}
    times = {}
    for key in circle:
        print(key)
        print(circle[key], times, time.time())
        print(key)

        start = time.time()
        maxsubsumOnlogn(circle[key])
        times['nlogn' + key] = time.time() - start

        start = time.time()
        maxsubsumOn3(circle[key])
        times['n3' + key] = time.time() - start

        start = time.time()
        maxsubsumOn(circle[key])
        times['n' + key] = time.time() - start

    x = np.array([100, 500, 1000, 2000])
    n3 = np.array([times['n3nib'],
                    times['n3nonib'],
                    times['n3zuybin'],
                    times['n3noylim']])
    nlogn = np.array([times['nlognnib'],
                      times['nlognnonib'],
                      times['nlognzuybin'],
                      times['nlognnoylim']])
    n = np.array([times['nnib'],
                  times['nnonib'],
                  times['nzuybin'],
                  times['nnoylim']])

    plt.plot(x, n3*100)
    plt.plot(x, nlogn*100)
    plt.plot(x, n * 100)
    plt.xticks(x)
    plt.xlabel('Dizi uzunluğu')
    plt.ylabel('Zaman (milisaniye)')
    plt.legend(['n3', 'nlogn', 'n'], loc='upper left')
    plt.savefig('foo.png', dpi=1000)
