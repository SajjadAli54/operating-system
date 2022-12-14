
class JavaThread implements Runnable {
    String message = null;
    int limit = 0;

    public JavaThread(String msg, int limit) {
        message = msg;
        this.limit = limit;
    }

    public void run() {
        for (int i = 0; i < limit; i++) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
            System.out.println(message);
        }
    }

    public static void main(String[] args) {
        Thread threads[] = { new Thread(new JavaThread("My Turn", 10)), new Thread(new JavaThread("Your Turn", 3)) };

        threads[0].start();
        threads[1].start();

        try {
            threads[0].join();
            threads[1].join();

        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}