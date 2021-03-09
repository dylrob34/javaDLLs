package rec;

public class Recorder {

    static {
        System.loadLibrary("javaRecorder");
    }

    private int count;

    public Recorder() {
        this.count = 0;
        System.out.println("loading");
        this.load();
        System.out.println("Loaded");
    }

    native void load();

    public native void get();

    public native void unload();

    public void print() {
        System.out.println("Current Count: " + this.count);
    }

}
