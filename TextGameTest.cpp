#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <random>
#include <array>
#include <algorithm>
void Text(std::string x)
{
    std::cout << x <<std::endl;
}
/* inventory 


║               Inventory             ║
║╔═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╗║
║║27 ║28 ║29 ║30 ║31 ║32 ║33 ║34 ║35 ║║
║╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣║
║║36 ║37 ║38 ║39 ║40 ║41 ║42 ║43 ║44 ║║
║╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣║
║║45 ║46 ║47 ║48 ║49 ║50 ║51 ║52 ║53 ║║
║╚═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╝║
║╔═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╗║
║║54 ║55 ║56 ║57 ║58 ║59 ║60 ║61 ║62 ║║
║╚═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╝║
╚═════════════════════════════════════╝
*/

int main()
{
    
    std::vector<int> items{1, 2, 3}; 
    std::random_device rd; 
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, items.size() - 1);
    //items[distr(eng)];
    
    bool bone;
    std::string x;

    Text("You have awoken in a damp, wet area. You do not know where you are.");
    sleep(4);
    system("clear");
    Text("It is hard to see, do you want to feel around?");
    Text("y/n");
    std::cin >> x;
    if(x == "y")
    {
        system("clear");
        Text("You feel around, not being able to tell much. However, you now have a small cut on your right index finger.");
        sleep(4);
        system("clear");
        Text("You decide to stand up but you bump your head on a rocky ceiling. You feel around some more and realize that you are in a small tunnel.");
        Text("There are two ways you can go, straight, or behind");
        Text("straight/behind");
        std:: cin >> x;
        if(x == "straight")
        {
            Text("you continue straight, and realize that the tunnel is starting to open up. You can now stand and walk freely.");
            sleep(4);
            system("clear");
            Text("Your back hurts, and there feels a heavy weight on your shoulders. You feelin your shoulders and feel two straps. You slide off the backpack you didnt know you had and look inside.");
            sleep(2);
            Text(".");
            sleep(2);
            Text("..");
            sleep(2);
            Text("...");
            sleep(4);
            system("clear");
            Text("You have what feels to be 3 items.");
            sleep(3);
            Text("You cant see so you pick one at random.");
            sleep(3);

            //flashlight
            if(items[distr(eng)] = 1)
            {
                Text("flash");
            }
            //matches
            else if(items[distr(eng)] = 2)
            {
                Text("Match");
            }
            //knife
            else if(items[distr(eng)] = 3)
            {
                Text("knife");
            }
        }

    }
    else
    {
        Text("test n");
    }
    
}