import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Mucha here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Hroch extends Actor
{
    private int rychlost;
    private int smer;
    private int uhol;
    public Hroch(int smer){
    if(this.smer == 1){ 
        this.uhol = 90;
    }
    else if(this.smer == 0)
    {
      this.uhol = 0;
    }
    this.smer= smer;    
    this.rychlost=5;
        
    }
    /**
     * Act - do whatever the Mucha wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    
    {
        turn(-this.uhol);
        move(this.rychlost);
        turn(this.uhol);
        
        if(this.isAtEdge()){
            this.rychlost *= -1;
        }
    }
}
