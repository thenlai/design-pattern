public class ObserverTest {
	public static void main(String args[]) {
		ObserverListener ol = new ObserverListener();
		ObserverOne o1 = new ObserverOne();
		ol.bind(o1);
		ObserverTwo o2 = new ObserverTwo();
		ol.bind(o2);
		
		ol.trigger();
	}
}