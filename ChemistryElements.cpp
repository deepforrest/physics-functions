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
        short iNumOfProtons = iAtomicNum;
        short iNumOfElectrons = iAtomicNum;
        short iNumOfNeutrons = iAtomicNum;
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

class Triangle {

    short unsigned iSide1, iSide2, iSide3;
    short unsigned iAngle1, iAngle2, iAngle3;


};

class 