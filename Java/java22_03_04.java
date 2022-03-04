
public class java22_03_04 {
		//클래스 객체 배열 기초 문법
    public static void main(String[] args) {
    	// 객체 배열
    	Tv[] tarr = new Tv[3]; // 객체를 생성해서 배열에 저장
    	Tv[] tarr1= {new Tv(),new Tv(),new Tv()}; // 배열의 초기화 블럭 사용
    	
    	Tv[] tarr2 = new Tv[100]; // 객체를 생성해서 배열에 저장
    	for(int i=0;i<tarr.length;i++) { // 만약 객체의 수가 많다면 for문을 사용하면 됨 
    		tarr2[i]=new Tv();
    	}
    	
    }
}

class Tv{
	// Tv의 속성(멤버변수)
	String color;
	boolean power;
	int channel;
	
	// Tv의 기능(메서드)
	void power() {power=!power;}
	void channelUp() {++channel;}
	void channelDown() {--channel;}
}