import java.util.Scanner;

public class OddNumberPrinter {

    // Method to check if a string represents a valid number
    public static boolean isNumber(String str) {
        if (str == null || str.isEmpty()) {
            return false;
        }
        for (char c : str.toCharArray()) {
            if (!Character.isDigit(c)) {
                return false;
            }
        }
        return true;
    }

    // Method to print odd numbers between two values
    /**
     * @param input1
     * @param input2
     */
    public static void printOddNumbersBetween(String input1, String input2) {
        try {
            if (isNumber(input1) && isNumber(input2)) {
                int m = Integer.parseInt(input1); // Convert string to integer
                int n = Integer.parseInt(input2);

                // Ensure m is the smaller number and n is the larger number
                int start = Math.min(m, n);
                int end = Math.max(m, n);

                System.out.println("The Odd Numbers Between " + start + " and " + end + ":");

                // Print odd numbers between start and end
                for (int i = start; i <= end; i++) {
                    if (i % 2 != 0) {
                        System.out.print(i + " ");
                    }
                }
                System.out.println();
            } else {
                System.out.println("Enter valid numbers as values!");
            }
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid number format.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter two values: ");
        String input1 = scanner.next();
        String input2 = scanner.next();

        printOddNumbersBetween(input1, input2);

        scanner.close();
    }
}
