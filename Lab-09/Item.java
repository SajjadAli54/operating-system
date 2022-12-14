import java.util.Random;

class ItemQueue {
    Item rear = null;
    Item front = null;
    int size = 0;
    double avgWaitTime = 0;

    public void enqueue(String name) {
        Random random = new Random();
        Item node = new Item(name, random.nextInt(10));
        if (rear == null) {
            rear = node;
            front = rear;
        } else {
            rear.next = node;
            rear = node;
        }
        size++;
    }

    public String dequeue() {
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        if (front == null)
            return null;
        String name = front.name;
        front.endTime = System.nanoTime();
        time();
        System.out.println("Average wait Time per queue of " + name + " is " + avgWaitTime);
        return name;
    }

    private void time() {
        Item c = front;
        avgWaitTime = 0;
        while (c.next != null) {
            avgWaitTime += c.waitingTime();
            c = c.next;
        }
        avgWaitTime /= size;
    }

    public static void main(String[] args) {
        ItemQueue queue = new ItemQueue();

        queue.enqueue("Sajjad");
        queue.enqueue("Sajan");
        queue.enqueue("Sajida");
        queue.enqueue("Sajda");

        queue.dequeue();
    }

    private class Item {
        /*
         * CPU burst: the amount of time the process uses the processor before it is no
         * longer ready.
         */
        String name = null;
        long startTime = 0;
        long endTime = 0;
        int cpuBurst = 0;

        Item next = null;

        public Item(String value, int cpuBurst) {
            name = value;
            this.cpuBurst = cpuBurst;
            startTime = System.nanoTime();
        }

        public long waitingTime() {
            return (int) (endTime - startTime - cpuBurst);
        }
    }
}
