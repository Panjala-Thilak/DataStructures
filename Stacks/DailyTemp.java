//DailyTemperatures 
import java.util.*;
class DailyTemp{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] temp=new int[n];
        for(int i=0;i<n;i++)
        temp[i]=sc.nextInt();
        int[] res = new int[temp.length];
        Stack<Integer> stack = new Stack();
        for (int i = temp.length - 1; i >= 0; --i) {
            while (!stack.isEmpty() && temp[i] >= temp[stack.peek()])
            {
            stack.pop();
            }
            res[i] = stack.isEmpty() ? 0 : stack.peek() - i;
            stack.push(i);
        }
        for(int i=0;i<n;i++)
        System.out.print(res[i]+" ");
    }
}
/*
OUTPUT
8
73 74 75 71 69 72 76 73
1 1 4 2 1 1 0 0
*/