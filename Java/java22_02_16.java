import java.util.Scanner;

public class java22_02_16 {
	// java while�� for�� if�� Ȱ�� ���ѷ��� ��� ���α׷�
	public static void main(String[] args) {

		Scanner scr = new Scanner(System.in);

		while (true) {
			System.out.println("menu 1");
			System.out.println("menu 2");
			System.out.println("menu 3");
			System.out.printf("�޴��� ���ÿ�(1~3) : ");
			int num = scr.nextInt();
			if (num == 0) {
				break;
			}
			for (;;) {
				if (num == 1) {
					System.out.printf("���� �Է� : ");
					int a = scr.nextInt();
					if (a == 0) {
						break;
					}
					int sum_a = a * a;
					System.out.println(sum_a);
					continue;
				} else if (num == 2) {
					System.out.printf("���� �Է� : ");
					int b = scr.nextInt();
					if (b == 0) {
						break;
					}
					Double sum_b = Math.sqrt(b);
					System.out.println(sum_b);
					continue;
				} else if (num == 3) {
					System.out.printf("���� �Է� : ");
					int c = scr.nextInt();
					if (c == 0) {
						break;
					}
					int sum_c = c * c * c;
					System.out.println(sum_c);
					continue;
				}

			} // for

		} // while
		System.out.println("�����");
	}

}
