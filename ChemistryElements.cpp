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
        AtomicElement(string sConAtomElName, string sConAtomElLet, int iConAtNum, float iConAtMass,  
              string sConElType, string sConElConfig, string sConPerTblBlock, float iConElNeg, int iConValEl){

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
    AtomicElement Hydrogen("Hydrogen", "H", 1);
    AtomicElement Helium("Helium", "He", 2);
    
    AtomicElement Lithium("Lithium", "Li", 3);
    AtomicElement Beryllium("Beryllium", "Be", 4);
    AtomicElement Boron("Boron", "B", 5);
    AtomicElement Carbon("Carbon", "C", 6);
    AtomicElement Nitrogen("Nitrogen", "N", 7);
    AtomicElement Oxygen("Oxygen", "O", 8);
    AtomicElement Fluorine("Fluorine", "F", 9);
    AtomicElement Neon("Neon", "N", 10);

    AtomicElement Sodium("Sodium", );
    AtomicElement Magnesium();
    AtomicElement Aluminum();
    AtomicElement Silicon();
    AtomicElement Phosphorus();
    AtomicElement Sulfur();
    AtomicElement Chlorine();
    AtomicElement Argon("Argon", "Ar", 18);

    AtomicElement Potassium();
    AtomicElement Calcium();
    AtomicElement Scandium();
    AtomicElement Titanium();
    AtomicElement Vanadium();
    AtomicElement Chromium();
    AtomicElement Manganese();
    AtomicElement Iron();
    AtomicElement Cobalt();
    AtomicElement Nickel();
    AtomicElement Copper();
    AtomicElement Zinc();
    AtomicElement Gallium();
    AtomicElement Germanium();
    AtomicElement Arsenic();
    AtomicElement Selenium();
    AtomicElement Bromine();
    AtomicElement Krypton();

    AtomicElement Rubidium();
    AtomicElement Strontium();
    AtomicElement Yttrium();
    AtomicElement Zirconium();
    AtomicElement Niobium();
    AtomicElement Molybdenum();
    AtomicElement Technetium();
    AtomicElement Ruthenium();
    AtomicElement Rhodium();
    AtomicElement Palladium();
    AtomicElement Silver();
    AtomicElement Cadmium();
    AtomicElement Indium();
    AtomicElement Tin();
    AtomicElement Antimony();
    AtomicElement Tellurium();
    AtomicElement Iodine("Iodine", "I", 53);
    AtomicElement Xeon("Xeon", "Xe", 54);

    // AtomicElement ();


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