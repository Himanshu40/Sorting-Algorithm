import java.util.Arrays;
import java.util.Random;

public class bogoSort {

    public static void main(String[] args) {
        int[] a = {4, 6, 1, 0, 5, 2};
        bogo_sort(a);
        System.out.println(Arrays.toString(a));
    }

    public static void bogo_sort(int[] a) {
        Random rand = new Random();
        while (!sort_check(a)) {
            for (int i = 0; i < a.length; i++) {
                int r = rand.nextInt(a.length);
                int temp = a[i];
                a[i] = a[r];
                a[r] = temp;
            }
        }
    }

    private static boolean sort_check(int[] a) {
        for (int i = 1; i < a.length; i++) {
            if (a[i] >= a[i - 1]) {
            } else {
                return false;
            }
        }
        return true;
    }
}
