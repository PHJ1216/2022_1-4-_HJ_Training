import java.util.Arrays;
import java.util.Scanner;

public class java22_02_17 {
	// java �迭 ���� ����
	public static void main(String[] args) {
		// �ܾ� ���߱� ���α׷�
		Scanner scn=new Scanner(System.in);
		String word[][] = {
				{"computer","��ǻ��"}, //00 01
				{"chair","����"},	     //10 11
				{"student","�л�"}    //20 21
		};
		for(int i=0;i<word.length;i++) {
			System.out.println("Q"+(i+1)+": "+word[i][0]+"�� ����?");
			String str=scn.nextLine();
			
		if(str.equals(word[i][1])) {
			System.out.println("����!");
		}else {
			System.out.println("Ʋ�Ƚ��ϴ� ������"+word[i][1]);
		}
		}
	} // main

} // class