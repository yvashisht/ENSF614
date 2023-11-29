public interface Subject {

    public void addData(Double d);

    public void setData(Double d, int i);

    public void populate(double[] arr);

    public void addObserver(Observer o);

    public void remove(Observer o);

    public void notifyObservers();

}