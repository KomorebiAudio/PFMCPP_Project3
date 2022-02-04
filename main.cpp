/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};

/*
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
