import java.util.Scanner;

public class java22_02_14 {
	// java if�� ���� ���� ��ø if��
	public static void main(String[] args) {
		
		System.out.print("������ �Է��ϼ��� : ");
		Scanner scr =new Scanner(System.in);
		int num = scr.nextInt();
		
		char grade=' ', ch='0';
		
		if(num>90) {	
			grade='A';
			if(num>=98) {    //90�� �̻��̰� 98���̻��̸� A+
				ch='+';
			}
			else if(num<=94) {  //90�� �̻������� 94�� ���ϸ� A-
				ch='-';
			}}
		
		else if(num>80) {		//�� if���� ���� �˰���
			grade='B';
			if(num>=88) {
				ch='+';
			}
			
			else if(num<=84) {		
				ch='-'; 
			}
			}
		else {
			grade='C';   //�������� C�� ó��
		}
		System.out.printf("���� : %c%c",grade,ch);
		}
		
			}	
		
	
