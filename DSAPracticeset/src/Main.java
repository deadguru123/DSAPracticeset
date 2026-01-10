public class Main {
    public static void main(String[] args) {
        int[] numbers = {45, 12, 78, 23, 5, 67, 89};

        int min = numbers[0];

        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }

        System.out.println("Minimum number: " + min);
    }
}