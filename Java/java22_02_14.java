import java.util.Scanner;

public class java22_02_14 {
	// java if문 기초 문법 중첩 if문
	public static void main(String[] args) {
		
		System.out.print("점수를 입력하세요 : ");
		Scanner scr =new Scanner(System.in);
		int num = scr.nextInt();
		
		char grade=' ', ch='0';
		
		if(num>90) {	
			grade='A';
			if(num>=98) {    //90점 이상이고 98점이상이면 A+
				ch='+';
			}
			else if(num<=94) {  //90점 이상이지만 94점 이하면 A-
				ch='-';
			}}
		
		else if(num>80) {		//위 if문과 같은 알고리즘
			grade='B';
			if(num>=88) {
				ch='+';
			}
			
			else if(num<=84) {		
				ch='-'; 
			}
			}
		else {
			grade='C';   //나머지는 C로 처리
		}
		System.out.printf("학점 : %c%c",grade,ch);
		}
		
			}	
		
	
