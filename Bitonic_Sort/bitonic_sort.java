public class BitonicSort
{
	void compAndSwap(int a[], int i, int j, int dir)
	{
		if ( (a[i] > a[j] && dir == 1) ||
			(a[i] < a[j] && dir == 0))
		{
			
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	
	void Merge(int a[], int low, int count, int dir)
	{
		if (cnt>1)
		{
			int k = count/2;
			for (int i=low; i<low+k; i++)
				compAndSwap(a,i, i+k, dir);
			Merge(a,low, k, dir);
			Merge(a,low+k, k, dir);
		}
	}

	
	void Sort(int a[], int low, int count, int dir)
	{
		if (cnt>1)
		{
			int k = count/2;

			
			Sort(a, low, k, 1);

			
			Sort(a,low+k, k, 0);

			
			Merge(a, low, cnt, dir);
		}
	}

	
	void sort(int a[], int N, int up)
	{
		Sort(a, 0, N, up);
	}

	
	static void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	
	public static void main(String args[])
	{
		int a[] = {3, 7, 4, 8, 6, 2, 1, 5};
		int up = 1;
		Sort ob = new Sort();
		ob.sort(a, a.length,up);
		System.out.println("\nSorted array");
		printArray(a);
	}
}
