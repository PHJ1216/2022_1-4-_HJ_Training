
public class java22_02_16 {
	// java 2 �Ǵ� 3�� ����� �ƴ� ���� ���� ���ϱ�
	public static void main(String[] args) {

		int i;
		int sum = 0;
		for (i = 1; i <= 21; i++) {
			if (i % 2 == 0 || i % 3 == 0) {
				continue;
			}

			sum += i;
			System.out.println(sum);
		}

	} // object

} // class
