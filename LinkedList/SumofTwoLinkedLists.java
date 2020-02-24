import java.util.*;
public class SumofTwoLinkedLists
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		LinkedList<Integer> ll=new LinkedList<>();
		LinkedList<Integer> ll1=new LinkedList<>();
		LinkedList<Integer> ll2=new LinkedList<>();
		for(int i=0;i<n;i++)
		{
		    ll.add(sc.nextInt());
		}
		int n1=sc.nextInt();
		for(int i=0;i<n1;i++)
		{
		    ll1.add(sc.nextInt());
		}
		Iterator<Integer> it=ll.iterator();
        Iterator it1=ll1.iterator();
        int carry=0,size;
        if(n1>n)
        size=n1;
        else
        size=n;
        while(size!=0)
        {
            if(it.hasNext()&&it1.hasNext())
            {
            Integer s=(Integer)it.next()+(Integer)it1.next();
            if(s/10==0)
            {
            ll2.add(s+carry);
            carry=0;
            }
            else
            {
            ll2.add(s%10+carry);
            carry=1;
            }
            }
            else
            {
                if(it.hasNext())
                {
                    ll2.add((Integer)it.next()+carry);
                    carry=0;
                }
                if(it1.hasNext())
                {
                    ll2.add((Integer)it1.next()+carry);
                    carry=0;
                }
            }
            size--;
        }
        if(carry==1)
        ll2.add(carry);
        System.out.println(ll2);
	}
}
/*
OUTPUT
3 1 2 3
3 1 2 3
[2, 4, 6]
*/
