import java.util.Scanner;
public class libraryLoan {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Due to unfortunate circumstances, only those with an active library card can loan books.");
        System.out.println("Does this user have an active card? (Anything other than 0 means it's active.)");
        int active = sc.nextInt();
        if(active != 0){
            System.out.println("This user can loan a book from this library. Treat it with care!");
        }
        else{
            System.out.println("Sorry, this user can't loan.");
        }
    }
}