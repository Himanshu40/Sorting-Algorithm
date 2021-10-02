<?php
function bubbleSort($data)
{
    $swapped=true;
    $n=count($data);
    $temp=null;
    while($swapped)//outer loop
    {
        $swapped = false;
        for($i=0; $i<$n-1; $i++)//inner loop
        {
            if( $data[$i]>$data[$i+1]) //swap if the current value is greater the next value. change > to > for descending order
            {
                $temp=$data[$i];
                $data[$i]=$data[$i+1];
                $data[$i+1]=$temp;
                $swapped=true;
            }
        }
    }
 
    return $data;
}
 
//Simple Example
echo "Unsorted Array: " . implode(",",array(43,23,4,11,2,88,76,46));
echo "\n";
echo "Sorted Array: " . implode(",",bubbleSort(array(43,23,4,11,2,88,76,46)));