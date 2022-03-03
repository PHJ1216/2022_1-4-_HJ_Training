/*
 클래스명 변수명;  		//참조변수 선언
 변수명 = new 클래스명(); // 객체 생성 후, 객체 주소를 첨조변수에 저장
 
 Tv t;			// Tv클래스 타입의 참조변수 t를 선언
 t = new Tv();	// Tv인스턴스를 생성한 후, 생성된 Tv인스턴스의 주소를 t에 저장
  
 */
public class java22_03_03 {
	
    public static void main(String[] args) {
        Tv t;
        t= new Tv();
        t.channnel=7;
        t.channelDown();
        System.out.println("현재 채널은"+t.channel+"입니다");
        
    }
}

class Tv{
	// Tv의 속성(멤버변수)
	String colorString;
	boolean power;
	int channnel;
	
	// Tv의 기능(메서드)
	void power() {power!=power;}
	void channelUp() {++channel;}
	void channelDown() {--channel;}
}