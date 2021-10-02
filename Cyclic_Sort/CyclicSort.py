def cyclicSort(array):
  writes = 0
   
  for cyclicStart in range(0, len(array) - 1):
    item = array[cyclicStart]
     
    pos = cyclicStart
    for i in range(cyclicStart + 1, len(array)):
      if array[i] < item:
        pos += 1
     
    if pos == cyclicStart:
      continue
     
    while item == array[pos]:
      pos += 1
    array[pos], item = item, array[pos]
    writes += 1
     
    while pos != cyclicStart:
       
      pos = cyclicStart
      for i in range(cyclicStart + 1, len(array)):
        if array[i] < item:
          pos += 1
       
      while item == array[pos]:
        pos += 1
      array[pos], item = item, array[pos]
      writes += 1
   
  return writes
   
arr = [1, 8, 3, 9, 10, 10, 2, 4 ]
n = len(arr)
cyclicSort(arr)
 
print("After sort : ")
for i in range(0, n) :
    print(arr[i], end = ' ')
