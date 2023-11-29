import java.awt.Graphics;

public class Text implements Component {

    private int x;
    private int y;
    private String text;

    public Text(int x, int y, String t) {
        this.x = x;
        this.y = y;
        this.text = t;
    }

    @Override
    public void draw(Graphics g) {
        g.drawString(text, x, y);
    }

}
