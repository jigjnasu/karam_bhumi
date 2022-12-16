def sort(v):
    for i in range(len(v)):
        min_index = i
        for j in range(i + 1, len(v)):
            if v[j] < v[min_index]:
                min_index = j
        v[i], v[min_index] = v[min_index], v[i]
    return v