import java.util.Scanner;

public class arraysorted {public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    // Input array size
    System.out.print("Enter array size: ");
    int n = sc.nextInt();

    int[] arr = new int[n];

    // Input array elements
    System.out.println("Enter " + n + " elements:");
    for (int i = 0; i < n; i++) {
        arr[i] = sc.nextInt();
    }

    boolean isSorted = true;

    // Check if sorted
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    // Output result
    if (isSorted) {
        System.out.println("Array is sorted in ascending order.");
    } else {
        System.out.println("Array is NOT sorted.");
    }

    sc.close();
}
}
