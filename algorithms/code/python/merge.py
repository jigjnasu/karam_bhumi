def sort(v):
    return merge_sort(v, 0, len(v) - 1)

def merge_sort(v, start, end):
    if start < end:
        mid = (start + end) >> 1
        merge_sort(v, start, mid)
        merge_sort(v, mid + 1, end)
        merge(v, start, mid, end)
        
def merge(v, start, mid, end):
    left = []
    for i in range(start, mid + 1):
        left.append(v[i])
    
    right = []
    for i in range(mid + 1, end + 1):
        right.append(v[i])
    
    left_i = 0
    right_i = 0
    iter = start
    while left_i < len(left) and right_i < len(right):
        if left[left_i] < right[right_i]:
            v[iter] = left[left_i]
            iter += 1
            left_i += 1
        else:
            v[iter] = right[right_i]
            iter += 1
            right_i += 1
            
    while left_i < len(left):
        v[iter] = left[left_i]
        iter += 1
        left_i += 1
        
    while right_i < len(right):
        v[iter] = right[right_i]
        iter += 1
        right_i += 1