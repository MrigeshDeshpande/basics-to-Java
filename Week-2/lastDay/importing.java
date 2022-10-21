package lastDay;
import java.util.Scanner; // import the Scanner class 

public class importing 
{
   
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String userName;
    
    // Enter username and press Enter
    System.out.println("Enter username"); 
    userName = sc.nextLine();   
       
    System.out.println("Username is: " + userName);        
  }
}


