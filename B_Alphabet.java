package patternprograms;
import java.util.Scanner;
public class B_Alphabet {

		public static void drawPattern(int n)
		{
			int rows,cols,mid;
			mid=n/2;
			for(rows=1;rows<=n;rows++)
			{
				for(cols=1;cols<=n;cols++)
				{
					if(cols==1 || ((rows==1||rows==(mid+1)||rows==n)&&(cols<=n-1)) || (((rows>1 && rows<=mid)|| (rows>mid+1 && rows<n)) && (cols==n)))
					{
						System.out.print("*");
					}
					else
						System.out.print(" ");
				}
				System.out.println();
			}
		}
		public static void main(String args[])
		{
			int num;
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter a number :");
			num=sc.nextInt();
			
			drawPattern(num);
		}
}