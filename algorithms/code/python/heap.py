def sort(v):
    n = len(v)
    build_heap(v, n)
    for i in range(n - 1, 0, -1):
        v[0],v[i] = v[i], v[0]
        max_heapify(v, i, 0)

def build_heap(v, n):
    for i in range(n >> 1, -1, -1):
        max_heapify(v, n, i)

def max_heapify(v, n, index):
    while True:
        largest = index
        l = left(index)
        r = right(index)
        
        if l < n and v[l] > v[largest]:
            largest = l
        if r < n and v[r] > v[largest]:
            largest = r
        if largest == index:
            break
        v[index], v[largest] = v[largest], v[index]
        index = largest

def left(index):
    return (index << 1) + 1

def right(index):
    return (index << 1) + 2
