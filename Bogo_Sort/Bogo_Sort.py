import random

def sort_check(a):
    n = len(a)
    for i in range(0,n-1):
        if (a[i] > a[i + 1]):
            return False
    return True

def bogosort(a):
    n = len(a)
    while (sort_check(a) == False):
        shuffle(a)

def shuffle(a):
    n = len(a)
    for i in range (0,n):
        r = random.randint(0,n-1)
        a[i], a[r] = a[r], a[i]

a = [7, 4, 0, 2, 8, 3, 6]
bogosort(a)
print(a)