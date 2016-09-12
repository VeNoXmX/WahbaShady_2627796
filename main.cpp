/* 
 * File:   main.cpp
 * Author: Shady Wahba
 * Created on September 12, 2016, 10:27 AM
 * Purpose: Calculate the distance dropped in free fall 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=32.147//Acceleration in ft/sec*2
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time: //Time as input in seconds
    float disFell; //Distance in free fall
    float places: //Places to round the answer
    
    //Input or initialize values Here
    cout<< "This problem determines distance dropped om free-fall"<<end1;
    cout<< "Input the time in free fall, units of seconds"<<end1;  
    cout<<"How many decimal places to round the result"<<end1;
    //Process/Calculations Here
    disfall=Gravity*time*time/2;        
    
    //Output Located Here
    cout<<"Gravity = " <<GRAVITY<<"ft/sec'2" <<endl;
    cout<<"Time fallen = " <<time<< "seconds"<<end1;
    cout<<"Distance traveled = " <<endFell<<"ft"<<end1;
    //Exit
    return 0;
}

