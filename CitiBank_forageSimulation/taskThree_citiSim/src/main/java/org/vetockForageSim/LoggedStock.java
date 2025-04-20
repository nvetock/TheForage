package org.vetockForageSim;

import java.math.BigDecimal;
import java.sql.Timestamp;

class LoggedStock {
    private Timestamp timestamp;
    private BigDecimal price;

    public LoggedStock(long timestamp, BigDecimal price) {
        this.timestamp.setTime(timestamp);
        this.price = price;
    }

    public Timestamp getTimestamp() {
        return timestamp;
    }

    public BigDecimal getPrice() {
        return price;
    }

    @Override
    public String toString() {
        //return super.toString();
        return "DJI price: $" + price.toString() + " at " + timestamp.toLocalDateTime().toString();
    }
}
