def compAndSwap(a, i, j, dir):
    if (dir==1 and a[i] > a[j]) or (dir==0 and a[i] < a[j]):
        a[i],a[j] = a[j],a[i]
 

def bitonicMerge(a, low, cnt, di):
    if cnt > 1:
        k = cnt/2
        for i in range(low , low+k):
            compAndSwap(a, i, i+k, dir)
        bitonicMerge(a, low, k, dir)
        bitonicMerge(a, low+k, k, dir)
 

def bitonicSort(a, low, cnt,dir):
    if cnt > 1:
          k = cnt/2
          bitonicSort(a, low, k, 1)
          bitonicSort(a, low+k, k, 0)
          bitonicMerge(a, low, cnt, dir)
 

def sort(a,N, up):
    bitonicSort(a,0, N, up)
 

a = [3, 7, 4, 8, 6, 2, 1, 5]
n = len(a)
up = 1
 
sort(a, n, up)
print ("\n\nSorted array is")
for i in range(n):
    print("%d" %a[i]),