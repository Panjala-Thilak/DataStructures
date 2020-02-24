/*Rearrange a linked list in to alternate first and last element*/
import java.util.*;
public class Rearrange
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		LinkedList<Integer> ll=new LinkedList<>();
		for(int i=0;i<n;i++)
		{
		    ll.add(sc.nextInt());
		}
		System.out.println(ll);
		Iterator<Integer> it=ll.iterator();
        Iterator it1=ll.descendingIterator();
        LinkedList<Integer> ll1=new LinkedList<>();
        int count=0;
        while(count<ll.size()/2)
        {
            ll1.add((Integer)it.next());
            ll1.add((Integer)it1.next());
            count++;
        }
        if(ll.size()%2==1)
        ll1.add(ll.get(ll.size()/2));
        System.out.println(ll1);
	}
}