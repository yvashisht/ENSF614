import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {

    protected ArrayList<Double> data;
    private ArrayList<Observer> obs;

    public DoubleArrayListSubject() {
        data = new ArrayList<Double>();
        obs = new ArrayList<Observer>();
    }

    public void addData(Double d) {
        data.add(d);
        notifyObservers();
    }

    public void setData(Double d, int i) {
        data.add(i, d);
        notifyObservers();
    }

    public void populate(double[] arr) {
        for (Double d : arr) {
            data.add(d);
            notifyObservers();
        }
    }

    public void addObserver(Observer o) {
        obs.add(o);
    }

    @Override
    public void remove(Observer o) {
        obs.remove(o);
    }

    @Override
    public void notifyObservers() {
        for (Observer ob : obs) {
            ob.update(data);
        }
    }

    public void display() {
        int count = 0;
        while (count < data.size()) {
            System.out.print(data.get(count) + " ");
        }
        if (count == 0) {
            System.out.println("Empty List ...");
        }
    }
}
