package patternprograms;
import java.util.Scanner;

public class RhombousPattern {
	static void drawPattern(int num)
	{
		
		{
			for(int rows=1;rows<=num;rows++)
			{
				for(int spaces=1;spaces<=num-rows;spaces++)
				{
					System.out.print(" ");
				}
				for(int cols=1;cols<=num;cols++)
				{
					System.out.print("*");
				}
				System.out.println();
			}
		}	
	}
	public static void main(String args[])
	{
		int num;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number :");
		num=sc.nextInt();
		
		drawPattern(num);
	}
}
//output
/*
Enter a number :15
 ***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
***************
*/