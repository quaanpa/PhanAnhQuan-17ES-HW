
public class Circle {
	private	float R;
	public void setR(float x)
	{
		R=x;
	}
	public float area()
	{
		return (float)(R*R*Math.PI);
	}
	public float perimeter()
	{
		return (float)(2*R*Math.PI);
	}
	public static void main(String[] args) {
	
		Circle a= new Circle();
		a.setR(5);
		System.out.println("Area of circle a is "+a.area());
		System.out.println("Perimeter of circle a is "+a.perimeter());
		Circle b= new Circle();
		b.setR(13);
		System.out.println("Area of circle b is "+b.area());
		System.out.println("Perimeter of circle b is "+b.perimeter());
	
	
	}

}
