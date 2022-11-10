#include "StringInstrument.h"

// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets()


// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets()

void StringInstrument::SetNumOfStrings(string numStrings){
   this->numStrings = numStrings;
}
void StringInstrument::SetNumOfFrets(string numFrets){
   this->numFrets = numFrets;
}

string StringInstrument::GetNumOfStrings(){
   return numStrings;
}

string StringInstrument::GetNumOfFrets(){
   return numFrets;
}