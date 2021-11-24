import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Typek here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class TypekP extends Actor
{
    public int rychlost =1;
    public String smer;
    public TypekP(String smer)
    {this.smer =smer;
    }
    public void act()
    {   
       //move(this.rychlost);
        if(smer =="dopdol"){
        setLocation(getX()+this.rychlost,getY()); 
        if(getX() > getWorld().getWidth() - 10){
            this.setImage("typekL.png");   
            this.rychlost = this.rychlost *= -1;}
        else if(getX() < 10){
        
            this.setImage("typekP.png");
            this.rychlost = this.rychlost *= -1;
            this.getImage().scale(60,60);
        
        }
    }
        else if(smer == "hordol"){
        setLocation(getY()+this.rychlost, getX()); 
         if(getY() > getWorld().getHeight() -10)
        {
            this.setImage("typekH.png");   
            this.rychlost = this.rychlost *= -1;           
         }                
        else if(getY() < 10)
        {
         this.setImage("typekD.png");
         this.rychlost = this.rychlost *= -1;
         }
    }
}
}
