import sys
import random

def load_modules():
    sys.path.insert(0, '/home/shishya/git_hub/learning_arena/algorithms/code/python')

def test_sort():
    load_modules()

    n = 10
    v = []
    for i in range(n):
        v.append(random.randint(0, 100))
    print(v)
    
    import bubble
    v = bubble.sort(v)
    print(v)
    
if __name__ == '__main__':
    test_sort()