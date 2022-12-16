import sys
import time
import random

def load_modules():
    sys.path.insert(0, '../../code/python/')

def get_random_list(n, r):
    v = []
    for i in range(n):
        v.append(random.randint(0, r))
    return v

def test_bubble_sort(v, v_sorted):
    import bubble
    start_time = time.time()
    v = bubble.sort(v)
    assert v == v_sorted
    print(f'bubble sort execution time    == {time.time() - start_time} seconds')

def test_insertion_sort(v, v_sorted):
    import insertion
    start_time = time.time()
    v = insertion.sort(v)
    assert v == v_sorted
    print(f'insertion sort execution time == {time.time() - start_time} seconds')

def test_selection_sort(v, v_sorted):
    import selection
    start_time = time.time()
    v = selection.sort(v)
    assert v == v_sorted
    print(f'selection sort execution time == {time.time() - start_time} seconds')

def test_sort():    
    n = int(2e4)
    r = int(1e9)

    v = get_random_list(n, r) 
    v_sorted = v
    v_sorted.sort()   
    test_bubble_sort(v, v_sorted)
    test_insertion_sort(v, v_sorted)
    test_selection_sort(v, v_sorted)
    
if __name__ == '__main__':
    load_modules()
    test_sort()