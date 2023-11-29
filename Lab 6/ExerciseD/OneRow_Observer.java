import java.util.ArrayList;

public class OneRow_Observer implements Observer {

    public ArrayList<Double> data;

    public OneRow_Observer(DoubleArrayListSubject arr) {
        data = new ArrayList<Double>();
        for (Double d : arr.data) {
            data.add(d);
        }
        arr.addObserver(this);
        display();
    }

    @Override
    public void update(ArrayList<Double> arr) {
        for (Double d : arr) {
            data.add(d);
        }
    }

    public void display() {
        System.out.println("Notification to One Row Observer: Data Changed:");
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
        }
        System.out.println();
    }
}
