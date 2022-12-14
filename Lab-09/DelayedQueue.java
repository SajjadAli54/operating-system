public class DelayedQueue {
    Node front = null;
    Node rear = null;

    public void enqueue(int data) {
        Node n = new Node(data);
        if (rear == null) {
            rear = n;
            front = rear;
        } else {
            rear.next = n;
            rear = n;
        }
    }

    public int dequeue() {
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        int data = Integer.MIN_VALUE;
        if (front != null) {
            data = front.data;
            front = front.next;
            if (front == null)
                rear = null;
        }
        return data;
    }

    private class Node {
        int data = 0;
        Node next = null;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static void main(String[] args) {
        DelayedQueue que = new DelayedQueue();
        for (int i = 0; i < 10; i++) {
            que.enqueue(i);
        }
        for (int i = 0; i < 10; i++) {
            System.out.print(que.dequeue() + " ");
        }
    }
}