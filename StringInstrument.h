#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
	// TODO: Declare private data members: numStrings, numFrets
	private: 
      string numStrings;
      string numFrets;
      


	// TODO: Declare mutator functions - 
	//      SetNumOfStrings(), SetNumOfFrets()
	
	// TODO: Declare accessor functions -
	//      GetNumOfStrings(), GetNumOfFrets()
	   public:
      void SetNumOfStrings(string numStrings);
      void SetNumOfFrets(string numFrets);
      string GetNumOfStrings();
      string GetNumOfFrets();
      
};
#endif

