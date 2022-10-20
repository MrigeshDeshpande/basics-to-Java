public class logicalAnd
{
    public static void main(String args[]){
        int a=10;
        int b=5;
        int c=20;
        System.out.println(a<b&&a<c);//false && true = false
        System.out.println(a<b&a<c);//false & true = false
    }
}
/*
        The logical && operator doesn't check the second condition
         if the first condition is false. It checks the second condition only if
        the first one is true.

        The bitwise & operator always checks both conditions whether
        first condition is true or false.
 */