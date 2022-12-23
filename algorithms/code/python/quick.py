import random

def sort(v):
    quick_sort(v, 0, len(v) - 1) 

def partition(v, low, high):
    index = random.randint(low, high)
    pivot = v[index]
    i = low - 1
 
    for j in range(low, high):
        if v[j] <= pivot:
            i = i + 1
            (v[i], v[j]) = (v[j], v[i])
    (v[i + 1], v[index]) = (v[index], v[i + 1])
    return i + 1
 
def quick_sort(v, low, high):
    if low < high:
        pi = partition(v, low, high)
        quick_sort(v, low, pi - 1)
        quick_sort(v, pi + 1, high)
    