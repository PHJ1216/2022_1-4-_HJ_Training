import java.util.Scanner;

public class java22_02_15 {
		//java switch�� ����
	public static void main(String[] args) {
		Scanner scr=new Scanner(System.in);
		int num=scr.nextInt();
		System.out.println(num);
		
		switch (num) {
		case 3: case 4: case 5: 
			System.out.println("��~"); 
			break;
		case 6: case 7: case 8: 
			System.out.println("����~"); 
			break;
		case 9: case 10: case 11: 
			System.out.println("����~"); 
			break;
			
		default:System.out.println("�ܿ�~");
			
		}
		
	}

}
