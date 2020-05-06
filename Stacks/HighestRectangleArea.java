import java.util.Scanner;
import java.util.Stack;

public class HighestRectangleArea {
	public static void maxArea(int a[],int n)
	{
		Stack<Integer> st=new Stack<>();
		int maximumarea=0,top,area;
		int i=0;
		while(i<n)
		{
			if(st.empty()||a[st.peek()]<=a[i])
				st.push(i++);
			else
			{
				top=st.peek();
				st.pop();
				area=a[top]*(st.empty()?i:i-st.peek()-1);
				if(area>maximumarea)
					maximumarea=area;
			}
		}
		while(st.empty()==false)
		{
			top=st.peek();
			st.pop();
			area=a[top]*(st.empty()?i:i-st.peek()-1);
			if(area>maximumarea)
				maximumarea=area;
		}
		System.out.println(maximumarea);
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		maxArea(a,n);
	}

}
/*
OUTPUT
7
6 2 5 4 5 1 6
12
*/
