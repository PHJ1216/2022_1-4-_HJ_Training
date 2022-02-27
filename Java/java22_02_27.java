public class java22_02_27 {
	// 클래스 인스턴스 지역변수 기초 문법
    public static void main(String[] args) {    
        System.out.println("Ferrari width : "+Ferrari.width);
        System.out.println("Ferrari height : "+Ferrari.height);
        
        Ferrari spider = new Ferrari();  
        spider.color = "red";
        spider.price = 100;
        
        Ferrari roma = new Ferrari();
        roma.color = "black";
        roma.price = 200;
        
        System.out.println("spider는 "+spider.color+","+spider.price+
                "원이며,크기는 "+spider.width+","+spider.height+"입니다.");
        System.out.println("roma는 "+roma.color+","+roma.price+
                "원이며,크기는 "+roma.width+","+roma.height+"입니다.");
        
        spider.width = 2000;
        spider.height = 1000;
        System.out.println("spider의 width와 height를 각각 2000, 1000으로 변경");
        System.out.println("spider는 "+spider.color+","+spider.price+
                "원이며,크기는 "+spider.width+","+spider.height+"입니다.");
        System.out.println("roma는 "+roma.color+","+roma.price+
                "원이며,크기는 "+roma.width+","+roma.height+"입니다.");
        
    }    
}
 
class Ferrari{
    String color; 
    int price;
    static int width = 1000;
    static int height = 500;
}
