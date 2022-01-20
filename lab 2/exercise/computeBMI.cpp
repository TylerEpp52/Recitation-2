#include <iostream>
#include <string>

#include "bodyinfo.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc < 3){
        cout << "missing command line arguments" << endl;
        return -1;
    }

    /* TODO 2: Collect height "inHeight" and weight "inWeight" from command line arguments
    *float inHeight = ...
    *float inWeight = ...
    */
   string height = argv[1];
   string weight = argv[2];
   
   float inHeight = stof(height);
   float inWeight = stof(weight);


    /* TODO 3: Assign data to BodyInfo variable
    *BodyInfo newBody;
    * ...
    */

   BodyInfo newBody;
   newBody.height = inHeight;
   newBody.weight = inWeight;

    /* TODO 4: Compute BMI using only pointer access
    * ...
    */
   float *pointerWeight;
   float *pointerHeight;

   pointerWeight = &newBody.weight;
   pointerHeight = &newBody.height;

   float BMI = *pointerHeight / (*pointerWeight * *pointerWeight);

    /* TODO 5: Print height, weight, and bmi.
    * ...
    */
    cout << "Height: " << inHeight << endl;
    cout << "Weight: " << inWeight << endl;
    cout << "BMI: " << BMI << endl;
    return 0;
}
