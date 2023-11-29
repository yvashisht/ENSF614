import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {

    public ArrayList<Double> data;

    public FiveRowsTable_Observer(DoubleArrayListSubject arr) {
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
        System.out.println("Notification to Five-Rows Table Observer: Data Changed:");
        int col = data.size() / 5;
        for (int i = 0; i < 5 & count < data.size(); i++) {
            for (int q = 0; q < col; q++) {
                System.out.print(data.get(count) + " ");
                count++;
            }
            System.out.println();
        }
        System.out.println();
    }
}
