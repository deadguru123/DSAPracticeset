import java.util.Scanner;

public class secondlargestelement {

        public static void main(String[] args){
            Scanner ip=new Scanner(System.in);
            System.out.print("Enter the size of the array: ");
            int n = ip.nextInt();
            int [] arr=new int[n];
            System.out.println("Enter " + n + " elements:");
            for (int i = 0; i < n; i++) {
                arr[i] = ip.nextInt();
            }
            int largest = arr[0];

            // Find largest element
            for (int i = 1; i < n; i++) {
                if (arr[i] > largest) {
                    largest = arr[i];
                }
            }
            int secondlargest=-1;
            for (int i = 1; i < n; i++) {
                if (arr[i] > secondlargest && arr[i]!=largest) {
                    secondlargest = arr[i];
                }
            }
            System.out.println("Largest element in the array is: " + largest);
            System.out.println("Largest element in the array is: " + secondlargest);



        }
    }



