import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Skala here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Skala extends Actor
{
    private int smer;
    
    public Skala();
    {
        movethis.smer = 1;
    }
     public Skala(int smer);
    {
        this.smer = 5;
    }
    /**
     * Act - do whatever the Skala wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act() //tato metoda sa spsti po kliknuti na act alebo run
    {
        //pohyb realizujeme v pixeloch
        move(1); //pohyb o pixel v smere tváre
    }
}
