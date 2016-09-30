import java.util.List;
import java.util.ArrayList;

public class ObserverListener {
	public List<Observer> observers;

	public ObserverListener() {
		observers = new ArrayList<Observer>();
	}
	public void bind(Observer o) {
		observers.add(o);
	}

	public void unbind(Observer o) {
		//
	}

	public void trigger() {
		for(int i=0; i < observers.size(); i++) {
			observers.get(i).callback();
		}
	}
}