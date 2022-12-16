# def sort(v):
#     build_maxify(v)

# def build_maxify(v):
#     for i in range(len(v) >> 1, -1):
#         maxify(v, i)

# def maxify(v, i):
#     while True:
#         l = left(i)
#         r = right(i)
#         largest = i
#         if l < len(v) and v[l] > v[largest]:
#             largest = l
#         if r < len(v) and v[r] > v[largest]:
#             largest = r
#         if i == largest:
#             break
#         v[i], v[largest] = v[largest], v[i]
#         i = largest
        
# def left(i):
#     return (i << 1) + 1

# def right(i):
#     return (i << 1) + 2

# if __name__ == '__main__':
#     import random
#     v = []
#     for _ in range(20):
#         v.append(random.randint(1, 50))
#     print(v)
#     sort(v)
#     print(v)

def test(v):
    v[0],v[1] = v[1], v[0]
    
v = [1, 2]
print(v)
test(v)
print(v)