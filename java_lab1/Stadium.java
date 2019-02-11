public class Stadium {

public int viewers;
public String name;
public int lightning;
private String city;
static private int area;
protected int seats;
protected  int VIP_lounge;
 public String city(){
 return city;
 }
 public void setCity(String city){
     this.city = city;
 }
    public void setSeats(int seats){
        this.seats = seats;
 }
    public int getSeats(){
        return seats;
    }
    public Stadium(){}

    public Stadium( int viewers, String name, int lightning, String city){
    this.viewers = viewers;
    this.name = name;
    this.lightning = lightning;
    this.city = city;
    }
    public Stadium ( int viewers, String name, int lightning, String city, int area, int seats, int VIP_lounge){
    this( viewers, name, lightning, city);
    this.area = area;
    this.seats = seats;
    this.VIP_lounge = VIP_lounge;
        }
public String toString(){
return viewers + " " + name + " " + lightning;
 }
 public void printArea(){
 System.out.println(area);
}
public void resetValues(int viewers, String name, int lightning, String city, int area, int seats, int VIP_lounge){
    this.viewers = viewers;
    this.name = name;
    this.lightning = lightning;
    this.city = city;
    this.area = area;
    this.seats = seats;
    this.VIP_lounge = VIP_lounge;

}
}

