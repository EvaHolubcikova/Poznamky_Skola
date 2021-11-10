import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Typek here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class TypekP extends Actor
{
    public int rychlost;
    
    public TypekP()
    {
        this.rychlost=1;
    }
    public void act()
    {
        pohyb();
    }
    public void pohyb()
    {
        setLocation(getX()+1, getY()){
            
        }
        if(isAtEdge()){
            rychlost *=-1;
            this.setImage("typekL.png")
        }
    }
}
