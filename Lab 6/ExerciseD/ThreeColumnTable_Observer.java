import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {

    public ArrayList<Double> data;

    public ThreeColumnTable_Observer(DoubleArrayListSubject arr) {
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
        int count = 0;
        System.out.println("Notification to Three-Column Table Observer: Data Changed:");
        int row = data.size() / 3;
        for (int i = 0; i < 3 & count < data.size(); i++) {
            for (int q = 0; q < row; q++) {
                System.out.print(data.get(count) + " ");
                count++;
            }
            System.out.println();
        }
        System.out.println();
    }
}
