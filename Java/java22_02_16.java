
public class java22_02_16 {
	// java 1+(1+2)+(1+2+3)+...+(1+2+3+...+10) ���ϱ�
	public static void main(String[] args) {

		int sum = 0;
		for (int i = 1; i <= 10; i++) { // ������ ������ <=n ����
			sum+=i*(11-i);  //���� �������� n�̶�� 11�ڸ��� n+1�� �����ϸ� �ȴ�
			System.out.println(sum);
		}
		

	} // object

} // class
