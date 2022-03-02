class Name{
    static void print() { //클래스 메소드
	System.out.println("My name is HyeonJun");
    }

    void print2() { //인스턴스 메소드
	System.out.println("I'm 2nd grade");
    }
}

public class java22_03_02 {
	
    public static void main(String[] args) {
        Name.print(); //인스턴스를 생성하지 않아도 호출이 가능
    	
        Name name = new Name(); //인스턴스 생성
        name.print2(); //인스턴스를 생성하여야만 호출이 가능
    }
}