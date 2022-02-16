
public class java22_02_16 {
	// java 1+(1+2)+(1+2+3)+...+(1+2+3+...+10) 구하기
	public static void main(String[] args) {

		int sum = 0;
		for (int i = 1; i <= 10; i++) { // 수정시 범위는 <=n 까지
			sum+=i*(11-i);  //만약 마지막이 n이라면 11자리에 n+1을 대입하면 된다
			System.out.println(sum);
		}
		

	} // object

} // class
