import random

def sort(v):
    quick_sort(v, 0, len(v) - 1)

def quick_sort(v, low, high):
    if low < high:
        pivot = partition(v, low, high)
        quick_sort(v, low, pivot - 1)
        quick_sort(v, pivot + 1, high)
    
def partition(v, low, high):
    index = random.randint(low, high)
    v[index], v[high] = v[high], v[index]
    i = low - 1
    for j in range(low, high):
        if v[j] <= v[high]:
            i += 1
            v[i], v[j] = v[j], v[i]
    v[i + 1], v[high] = v[high], v[i + 1]
    return i + 1
