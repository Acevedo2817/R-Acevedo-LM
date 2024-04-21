import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int unit = 0, hour, extraTime = 0;
        float pay, totalPay, finalPay, extraPay = 0;
        do{
            unit++;
            System.out.println("----------------------------------------------------------------------------------------------------\nWorker #" + unit + "\nEnter this worker's hourly pay. (In $)");
            pay = sc.nextFloat();
            System.out.println("For how long has he/she worked? (In hours)");
            hour = sc.nextInt();
            if(hour > 40){
                extraTime = hour - 40;
                extraPay = pay * extraTime * 2;
            }
            totalPay = (pay * hour) + extraPay;
            finalPay = totalPay / (float)1.07;
            System.out.println("----------------------------------------------------------------------------------------------------");
            System.out.println("Total hours worked: " + hour + " (" + extraTime + " overtime)");
            System.out.println("Gross pay: $" + totalPay);
            System.out.println("Payroll tax: $" + (totalPay * 0.07));
            System.out.println("----------------------------------------------------------------------------------------------------");
            System.out.println("Final pay: $" + finalPay);
        }while(unit < 3);
    }
}
