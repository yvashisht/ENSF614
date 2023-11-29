import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {

    @Override
    public void sort(ArrayList<Item<E>> storage) {
        for (int i = 0; i < storage.size(); i++) {
            int small = i;
            for (int j = 0; j < storage.size(); j++) {
                if (storage.get(j).getItem().compareTo(storage.get(small).getItem()) < 0) {
                    small = j;
                }
            }
            storage.add(i, storage.remove(small));
        }
    }
}
