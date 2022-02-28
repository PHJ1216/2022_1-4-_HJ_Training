public class java22_02_28 {
	// 클래스 인스턴스 지역변수 기초 문법
    public static void main(String[] args) {    
        System.out.println("라면 나트륨 : "+ramen.natryum);
        System.out.println("라면 칼로리 : "+ramen.kcal);
        
        ramen sin_ramen = new ramen();  
        sin_ramen.spicy = "nomal hot";
        sin_ramen.price = 850;
        
        ramen yeol_ramen = new ramen();
        yeol_ramen.spicy = "so hot";
        yeol_ramen.price = 950;
        
        System.out.println("신라면의 맵기는 "+sin_ramen.spicy+"이고, "+sin_ramen.price+
                "원이며, 나트륨과 칼로리는 "+sin_ramen.natryum+","+sin_ramen.kcal+"입니다.");
        System.out.println("열라면의 맵기는 "+yeol_ramen.spicy+"이고, "+yeol_ramen.price+
                "원이며, 나트륨과 칼로리는 "+yeol_ramen.natryum+","+yeol_ramen.kcal+"입니다.");
        
        sin_ramen.natryum = 2000;
        sin_ramen.kcal = 1000;
        System.out.println("신라면의 나트륨과 칼로리를 각각 2000, 1000으로 변경");
        System.out.println("신라면의 맵기는 "+sin_ramen.spicy+"이고, "+sin_ramen.price+
                "원이며, 나트륨과 칼로리는 "+sin_ramen.natryum+","+sin_ramen.kcal+"입니다.");
        System.out.println("열라면의 맵기는 "+yeol_ramen.spicy+"이고, "+yeol_ramen.price+
                "원이며, 나트륨과 칼로리는 "+yeol_ramen.natryum+","+yeol_ramen.kcal+"입니다.");
    }    
}
 
class ramen{
    String spicy; 
    int price;
    static int natryum = 1000;
    static int kcal = 500;
}
