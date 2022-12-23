import sys
import time
import copy
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
    bubble.sort(v)
    assert v == v_sorted
    print(f'bubble sort execution time    == {time.time() - start_time} seconds')

def test_insertion_sort(v, v_sorted):
    import insertion
    start_time = time.time()
    insertion.sort(v)
    assert v == v_sorted
    print(f'insertion sort execution time == {time.time() - start_time} seconds')

def test_selection_sort(v, v_sorted):
    import selection
    start_time = time.time()
    selection.sort(v)
    assert v == v_sorted
    print(f'selection sort execution time == {time.time() - start_time} seconds')

def test_merge_sort(v, v_sorted):
    import merge
    start_time = time.time()
    merge.sort(v)
    assert v == v_sorted
    print(f'merge sort execution time     == {time.time() - start_time} seconds')
    
def test_heap_sort(v, v_sorted):
    import heap
    start_time = time.time()
    heap.sort(v)
    assert v == v_sorted
    print(f'heap sort execution time      == {time.time() - start_time} seconds')
    
def test_quick_sort(v, v_sorted):
    import quick
    start_time = time.time()
    quick.sort(v)
    #assert v == v_sorted
    print(f'quick sort execution time     == {time.time() - start_time} seconds')

def test_sort():    
    n = int(20)
    r = int(100)

    v = get_random_list(n, r)
    v1 = copy.deepcopy(v)
    v2 = copy.deepcopy(v)
    v3 = copy.deepcopy(v)
    v4 = copy.deepcopy(v)
    v5 = copy.deepcopy(v)
    v6 = copy.deepcopy(v)
    v_sorted = copy.deepcopy(v)
    v_sorted.sort()   
    
    #test_bubble_sort(v1, v_sorted)
    #test_insertion_sort(v2, v_sorted)
    #test_selection_sort(v3, v_sorted)
    #test_merge_sort(v4, v_sorted)
    #test_heap_sort(v5, v_sorted)
    test_quick_sort(v6, v_sorted)
    print(v6)
    print(v_sorted)

if __name__ == '__main__':
    load_modules()
    test_sort()