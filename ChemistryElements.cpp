#include <string>

class AtomicElement {
    
    public:
        
        // Essential Data
        string sAtomicElementName;
        string sAtomicElementLetters;
        string sElementType;
        float iAtomicMass;
        short iAtomicNum;

        // Others
        short int iNumOfProtons = iAtomicNum;
        short int iNumOfElectrons = iAtomicNum;
        short int iNumOfNeutrons = iAtomicNum;
        string sElectronConfig;
        string sPeriodicTableBlock;


        // Other Useful Properties
        short float iElectronegativity;  //Pauling Scale
        short int iNumOfValenceElectrons;
        short int iNumOfNonvalenceElectrons = iNumOfElectrons - iNumOfValenceElectrons; 

        // Physical Properties (See Wikipedia)

        // Atomic Properties (See Wikipedia)

};

class AtomicIsotope: public AtomicElement {

    short int iExtraProtons;
    short int iTotalProtons = iNumOfProtons + iExtraProtons;

};

//Proposed classes:

class AtomicParticle {};