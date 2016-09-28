
public class Singleton {
	private Singleton() {
		field = Math.random();
	}
	private static Singleton instance = new Singleton();
	private double field;

	public static Singleton getInstance() {
		return instance;
	}

	public void printField() {
		System.out.println("hi I am singleton " + Double.toString(field));
	}

	public static void main(String args[]) {
		Singleton s1 = Singleton.getInstance();
		s1.printField();
		Singleton s2 = Singleton.getInstance();
		s2.printField();
	}
}