package live;
import music.playable;
import music.string.veena;
import music.wind.Saxophone;
public class Test{
    public static void main(String[] args)
    {
        veena v = new veena();
        v.play();

        Saxophone saxo = new Saxophone();
        saxo.play();

        playable p;

        p = new veena();

        p.play();
        p = new Saxophone();
        p.play();
   }
}