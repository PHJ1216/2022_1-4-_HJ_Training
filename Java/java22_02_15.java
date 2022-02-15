import java.util.Scanner;

public class java22_02_15 {
		//java while문으로 숫자열 합 구하기
	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		System.out.printf("정수 입력: ");
		int num=scr.nextInt();
		int sum=0;
		while(num!=0) {
		sum=sum+num%10 ; //12345%10 = 5
		System.out.println("num="+num+"      "+"sum"+sum);
		num=num/10;
		}
		
			
		
	}

}
