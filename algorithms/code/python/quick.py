import random

def sort(v):
    quick_sort(v, 0, len(v) - 1)

def quick_sort(v, low, high):
    if low < high:
        q = partition(v, low, high)
        quick_sort(v, low, q - 1)
        quick_sort(v, q + 1, high)
        
def partition(v, low, high):
    pivot = v[random.randint(low, high)]
    i = low - 1
    for j in range(low, high):
        if v[j] <= pivot:
            i += 1
            v[i], v[j] = v[j], v[i]
    v[high], v[i + 1] = v[i + 1], v[high]
    return i + 1
