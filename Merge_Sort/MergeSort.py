import random

def merge(A, aux, l, m, r):
    for k in range(l, r + 1):
        aux[k] = A[k]
    i = l
    j = m + 1
    for k in range(l, r + 1):
        if i > m:
            A[k] = aux[j]
            j += 1
        elif j > r:
            A[k] = aux[i]
            i += 1
        elif aux[j] < aux[i]:
            A[k] = aux[j]
            j += 1
        else:
            A[k] = aux[i]
            i += 1


def mergesort(A, aux, l, r):
    if r <= l:
        return
    m = (l + r) // 2
    mergesort(A, aux, l, m)
    mergesort(A, aux, m + 1, r)
    merge(A, aux, l, m, r)

A = random.sample(range(-10, 10), 10)
print("not ordered array: ", A)
aux = [0] * len(A)
mergesort(A, aux, 0, len(A) - 1)
print("ordered array:", A)