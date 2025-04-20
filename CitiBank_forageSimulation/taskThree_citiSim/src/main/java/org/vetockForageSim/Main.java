package org.vetockForageSim;

import yahoofinance.Stock;
import yahoofinance.YahooFinance;

import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        // Task: Use Yahoo Finance API to query DJI Avg every 5sec and store with timestamp to a queue

        // A queue will be used as a 'database' for this small implementation
        Queue<LoggedStock> stockQueue = new LinkedList<>();
        Scanner scnr = new Scanner(System.in);

        while(true) {

            System.out.println("To collect Dow Jones Stock data type: 'y'");
            System.out.println("To get the latest input type: 'latest'");
            System.out.println("To quit type: 'q' or 'quit'");


            String userInput = "";
            try {
                userInput = scnr.nextLine();
            } catch (Exception e) {
                throw new RuntimeException(e);
            }

            switch (userInput) {
                case "y":
                    System.out.println("Starting collection...\n"
                            + "Press 'x' at any time to stop.\n"
                            + "Current queue amt is: " + stockQueue.size());
                    while (!userInput.equals("x")) {
                        try {
                            // Utilize the Yahoo Finance API to collect a ^DJI stock object.
                            // The current price associated with that object is stored, the
                            // rest is not needed for this implementation.
                            // A timestamp is created and stored as well. These are stored in a
                            // new object, LoggedStock, and collected in a Queue.
                            Stock temp = YahooFinance.get("^DJI");
                            long currTime = System.currentTimeMillis();
                            LoggedStock s = new LoggedStock(currTime, temp.getQuote().getPrice());
                            stockQueue.offer(s);
                        } catch (IOException e) {
                            throw new IOException(e);
                        }

                        // Sleep this thread for 5 seconds before collecting again.
                        // Because this is the only task performed by this program sleeping
                        // the entire thread was chosen as busy-waiting won't negatively impact
                        // us here.
                        try {
                            Thread.sleep(5000);
                        } catch (InterruptedException e) {
                            throw new RuntimeException(e);
                        }
                    }
                    System.out.println("Stopping collection...\n"
                            + "Current queue total is: " + stockQueue.size());
                    break;
                case "latest":
                    if (!stockQueue.isEmpty()) {
                        System.out.println(stockQueue.peek().toString());
                    }
                    break;
                case "q":
                case "quit":
                    return;
                default:
                    System.out.println("\n\nUnknown command '" + userInput + "'.\nResetting...\n\n");
                    break;
            }
        }

    }
}