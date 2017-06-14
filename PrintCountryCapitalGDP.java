import java.util.*;
public class Hello {

    public static void main(String[] args) 
    {
		//Your Code Here
    String s1,s2;
    double num;
    Scanner sc=new Scanner(System.in);
    s1=sc.nextLine();
    s2=sc.nextLine();
    num=sc.nextDouble();
    System.out.print("The capital of "+s1+" is"+s2+" and it's GDP is "+num);
	}
}
