/*
Project 3 - Part 1a-d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you 
writing C++ code that compiles and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5 in C++ Language Fundamentals.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch.
    Part 1a: you will learn to think about an object in terms of 
    its sub-objects.
    
    Part 1b: you will write 4 un-related UDTs in plain english.
    
    Part 1c: you will write 1 UDT in plain english that will be 
    made of 5 related sub-objects.
    
    Part 1d: you will write plain-english UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e: you will convert those 10 plain-english UDTs into code 
    that runs.
************************
*/

/*
Part 1a
1) Look at the picture of the car interior (Part1a pic.jpg).  
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) horn
        4) volume control
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) beep the horn
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speed dial
        2) gear display
        3) temperature display
        4) rpm dial
    Name 3 things you can do with the:   Instrument Cluster
        1) see your current speed
        2) see the current rpm
        3) see the temperature
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) air conditioning button
        2) temperature control
        3) airflow control
    Name 3 things you can do with the:   Environment Controls
        1) change the temperature
        2) change the airflow
        3) turn on the air conditioning

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) radio button
        2) phone call button
        3) phone hang up button
    Name 3 things you can do with the:   Infotainment System
        1) turn on the radio
        2) make a phone call
        3) hang up the phone

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) arm rest 
        2) incline adjustment 
        3) head rest
    Name 2 things you can do with the:   Seat
        1) sit on it
        2) adjust the angle
*/

/*
Part 1b
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next, write 4 un-related UDTs in plain english:
*/
/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___" checks whether or not your object **has the 
    ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings in this project.
 */

/*
Part 1b Assignment:
1)  Fill in the 4 UDTs below with a random UDT in plain english.
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.
*/

 /*
Part 1c
You have just finished practicing writing out a UDT that is has 
5 properties and can perform 3 actions.  

Now you will write 1 UDT in plain english. 

This UDT will be different than the previous 4 you wrote: It will 
use UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 'property' UDTs in Part 1d.
 */

 /*
Part 1c example:
    Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___" checks whether or not your object **has 
    the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/
/*
Part 1c assignment:
1) Fill in the 10th UDT below.
    Define an object that is made of 5 sub-objects.
    These parts will not be defined using Primitives, but instead 
    will be their own UDTs you'll define in Part 1d.

2) write the name of the primitive type you'll be using after each 
    property in UDTs 1-4:
    pick properties that can be represented with 
    'int float double bool char std::string'.
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)
*/

/*
Part 1d
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made of up only C++ primitives and std::string. 

Revisiting the previous example:  
Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects 
and properties. 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mWa)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
Part 1d assignment:
1) Fill in #5 - #9 below with plain-english UDTs for the 5 
properties you created for UDT #10. 
    example: 
        If #10's first property was 'Engine', then `Thing 5)` 
        will be `Engine`. 
        You will need to provide 5 properties and 3 member 
        functions of that Engine object in plain English.
        Remember to pick properties that can be represented 
        with 'int float double bool char std::string'.

2) write the name of the primitive type you'll be using after 
each property for UDTs 5 - 9.
    You already did this for UDTs 1-4 in Part 1c.
    Pick properties that can be represented with 
    'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)
*/

/*
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

Move them below this block comment and put them in numerical order 
(1 - 10).

Thing 1) Airport
5 properties:
    1) number of take offs (int)
    2) number of landings (int)
    3) amount of revenue taken per week in GBP (double)
    4) amount of overpriced sandwiches sold (int)
    5) amount of electricity used in kWh (float)

3 things it can do:
    1) check in passengers
    2) store planes
    3) sell overpriced food
 */

/*
Thing 2) Elevator
5 properties:
    1) number of buttons  (int)
    2) metres travelled per day (int)
    3) number of floors it can go to (int)
    4) speed at which it travels in MPH (int)
    5) time it takes the doors to close in seconds (double)
3 things it can do:
    1) go up
    2) go down
    3) open doors
 */

/*
Thing 3) car
5 properties:
    1) how long to go from 0 to 60 in seconds (doub;e)
    2) number of doors (int)
    3) number of wheels (int)
    4) amount of gears (int)
    5) amount of miles per gallon (double)

3 things it can do:
    1) accelerate
    2) brake 
    3) change gear
 */

/*
Thing 4) bird
5 properties:
    1) number of wings (int)
    2) number of feathers (int)
    3) number of eyes (int)
    4) number of feet (int)
    5) weight of the bird in kg (double)
3 things it can do:
    1) fly
    2) build nest
    3) lay eggs 

/*
Thing 5) Saddle
5 properties:
    1) amount of cushioning (int)
    2) width in cm (int)
    3) height in cm (int)
    4) colour (int)
    5) weight in kg (double)
    
3 things it can do:
    1) support rider
    2) cushion butt
    3) look cool
 */

/*
Thing 6) Gears
5 properties:
    1) number of gears (int)
    2) length of chain in cm (int)
    3) size of derailer in cm (int)
    4) number of drives (int)
    5) type of drive (char)

3 things it can do:
    1) change between speeds
    2) derail chain
    3) rotate forwards
 */

/*
Thing 7) Frame 
5 properties:
    1) length of top tube in cm (int)
    2) weight of frame in kg (double)
    3) length of down tube in cm (int)
    4) number of forks (int)
    5) length of bottom bracket in cm (int)

3 things it can do:
    1) hold wheels in place
    2) connect to saddle
    3) route brake cables
 */

/*
Thing 8) Wheels
5 properties:
    1) tire psi (double)
    2) rim circumerence in cm (int)
    3) number of spokes (int)
    4) tire tread in mm (int)
    5) brand of tire int (int)

3 things it can do:
    1) rotate forwards
    2) change direction
    3) rotate backwards
 */

/*
Thing 9) Bell
5 properties:
    1) Loudness in Db (float)
    2) Width in cm (int)
    3) Heigh in cm (int)
    4) Weight in lb and oz (float)
    5) Number of moving parts (int)

3 things it can do:
    1) make sound
    2) shine in the sun
    3) rotate clockwise
 */

/*
Thing 10) Bicycle
5 properties: 
    1) Saddle 
    2) Gears
    3) Size of frame
    4) Wheels
    5) Bell

3 things it can do:
    1) Rotate pedals
    2) Adjust saddle height
    3) Change gears
 */


The next thing that will happen is that I will review the 
pseudo-code that you have written.
Send me a DM to review your pull request when the project is ready for review.
*/

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
