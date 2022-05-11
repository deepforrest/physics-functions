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
        short int iNumOfNonvalenceElectrons; 

        // Physical Properties (See Wikipedia)

        // Atomic Properties (See Wikipedia)

        // Constructor
        AtomicElement(string sConAtomElName, string sConAtomElLet, string sConElType, 
            float iConAtMass, int iConAtNum, string sConElConfig, string sConPerTblBlock, float iConElNeg, int iConValEl){

                sAtomicElementName = sConAtomElName;
                sAtomicElementLetters = sConAtmElLet;
                sElementType = sConElType;
                iAtomicMass = iConAtMass;
                iAtomicNum = iConAtNum;

                iNumOfProtons = iAtomicNum;
                iNumOfElectrons = iAtomicNum;
                iNumOfNeutrons = iAtomicNum;

                iElectronegativity = iConElNeg;
                iNumOfValenceElectrons = iConValEl;
                iNumOfNonvalenceElectrons = iNumOfElectrons - iNumOfValenceElectrons;

        }

};

void LoadChemistryElements(){

  //AtomicElement Element("Element Name", "Element Symbol", "Element Type", Atomic Mass, Atomic No, "Electron Config", "Periodic Table Block", Electronegativity, Valence Electrons)
    AtomicElement Hydrogen("Hydrogen", "H", "nonemetal", 1.00797, 1,);
    AtomicElement Helium("Helium", "He");
    
    AtomicElement Lithium("Lithium", "Li");
    AtomicElement Beryllium("Beryllium", "Be");
    AtomicElement Boron("Boron", "B");
    AtomicElement Carbon("Carbon", "C");
    AtomicElement Nitrogen();
    AtomicElement Oxygen();
    AtomicElement Fluorine();
    AtomicElement Neon();

    AtomicElement ;
    AtomicElement ;
    AtomicElement ;
    AtomicElement ;
    AtomicElement ;
    AtomicElement ;
    AtomicElement ;
    AtomicElement ;


}

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