import rec.Recorder;

public class Main {

    public static void main(String[] args) throws InterruptedException {
        Recorder r = new Recorder();

        r.print();
        r.get();
        r.print();

        Thread.sleep(2000);

        r.get();
        r.print();
        r.unload();
        Thread.sleep(2000);
        r.get();
        r.print();
    }

}
