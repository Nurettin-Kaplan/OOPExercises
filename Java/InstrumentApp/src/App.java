public class App {
    public static void main(String[] args) throws Exception {
        
        Guitar guitar = new Guitar();
        Instrument piano = new Piano();

        guitar.play();
        guitar.setChord();
        piano.play();

    }
}
