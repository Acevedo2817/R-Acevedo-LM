import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int i = 0;
        float totalTemp = 0;
        String[] year = {"January","February","March","April","May","June","July","August","September","October","November","December"}; // This should save space on the code.
        do{
            System.out.println("Enter the temperature of " + year[i] + " in Celsius.");
            float temp = sc.nextInt();
            totalTemp += temp;
            i++;
        }while(i < 12);
        float average = totalTemp / 12;
        System.out.println("Average temperature of this year: " + average);
    }
}
