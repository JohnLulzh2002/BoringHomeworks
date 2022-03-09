import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int n=in.nextInt(),max=0,b=0;
		while(n-->0){
			b+=in.nextInt();
			if(b>max)
				max=b;
			else if(b<0)
				b=0;
		}
		System.out.println(max);
	}
}