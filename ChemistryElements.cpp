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
    AtomicElement Hydrogen("Hydrogen", "H", 1, 1.008, 1, "[1s1]")
    AtomicElement Helium("Helium", "He", 2, 4.003, 18, "[1s2]")
    AtomicElement Lithium("Lithium", "Li", 3, 6.941, 1, "[[He] 2s1]")
    AtomicElement Beryllium("Beryllium", "Be", 4, 9.012, 2, "[[He] 2s2]")
    AtomicElement Boron("Boron", "B", 5, 10.811, 13, "[[He] 2s2 2p1]")
    AtomicElement Carbon("Carbon", "C", 6, 12.011, 14, "[[He] 2s2 2p2]")
    AtomicElement Nitrogen("Nitrogen", "N", 7, 14.007, 15, "[[He] 2s2 2p3]")
    AtomicElement Oxygen("Oxygen", "O", 8, 15.999, 16, "[[He] 2s2 2p4]")
    AtomicElement Fluorine("Fluorine", "F", 9, 18.998, 17, "[[He] 2s2 2p5]")
    AtomicElement Neon("Neon", "Ne", 10, 20.18, 18, "[[He] 2s2 2p6]")

    AtomicElement Sodium("Sodium", "Na", 11, 22.99, 1, "[[Ne] 3s1]")
    AtomicElement Magnesium("Magnesium", "Mg", 12, 24.305, 2, "[[Ne] 3s2]")
    AtomicElement Aluminum("Aluminum", "Al", 13, 26.982, 13, "[[Ne] 3s2 3p1]")
    AtomicElement Silicon("Silicon", "Si", 14, 28.086, 14, "[[Ne] 3s2 3p2]")
    AtomicElement Phosphorus("Phosphorus", "P", 15, 30.974, 15, "[[Ne] 3s2 3p3]")
    AtomicElement Sulfur("Sulfur", "S", 16, 32.065, 16, "[[Ne] 3s2 3p4]")
    AtomicElement Chlorine("Chlorine", "Cl", 17, 35.453, 17, "[[Ne] 3s2 3p5]")
    AtomicElement Argon("Argon", "Ar", 18, 39.948, 18, "[[Ne] 3s2 3p6]")

    AtomicElement Potassium("Potassium", "K", 19, 39.098, 1, "[[Ar] 4s1]")
    AtomicElement Calcium("Calcium", "Ca", 20, 40.078, 2, "[[Ar] 4s2]")
    AtomicElement Scandium("Scandium", "Sc", 21, 44.956, 3, "[[Ar] 3d1 4s2]")
    AtomicElement Titanium("Titanium", "Ti", 22, 47.867, 4, "[[Ar] 3d2 4s2]")
    AtomicElement Vanadium("Vanadium", "V", 23, 50.942, 5, "[[Ar] 3d3 4s2]")
    AtomicElement Chromium("Chromium", "Cr", 24, 51.996, 6, "[[Ar] 3d5 4s1]")
    AtomicElement Manganese("Manganese", "Mn", 25, 54.938, 7, "[[Ar] 3d5 4s2]")
    AtomicElement Iron("Iron", "Fe", 26, 55.845, 8, "[[Ar] 3d6 4s2]")
    AtomicElement Cobalt("Cobalt", "Co", 27, 58.933, 9, "[[Ar] 3d7 4s2]")
    AtomicElement Nickel("Nickel", "Ni", 28, 58.693, 10, "[[Ar] 3d8 4s2]")
    AtomicElement Copper("Copper", "Cu", 29, 63.546, 11, "[[Ar] 3d10 4s1]")
    AtomicElement Zinc("Zinc", "Zn", 30, 65.39, 12, "[[Ar] 3d10 4s2]")
    AtomicElement Gallium("Gallium", "Ga", 31, 69.723, 13, "[[Ar] 3d10 4s2 4p1]")
    AtomicElement Germanium("Germanium", "Ge", 32, 72.64, 14, "[[Ar] 3d10 4s2 4p2]")
    AtomicElement Arsenic("Arsenic", "As", 33, 74.922, 15, "[[Ar] 3d10 4s2 4p3]")
    AtomicElement Selenium("Selenium", "Se", 34, 78.96, 16, "[[Ar] 3d10 4s2 4p4]")
    AtomicElement Bromine("Bromine", "Br", 35, 79.904, 17, "[[Ar] 3d10 4s2 4p5]")
    AtomicElement Krypton("Krypton", "Kr", 36, 83.8, 18, "[[Ar] 3d10 4s2 4p6]")

    AtomicElement Rubidium("Rubidium", "Rb", 37, 85.468, 1, "[[Kr] 5s1]")
    AtomicElement Strontium("Strontium", "Sr", 38, 87.62, 2, "[[Kr] 5s2]")
    AtomicElement Yttrium("Yttrium", "Y", 39, 88.906, 3, "[[Kr] 4d1 5s2]")
    AtomicElement Zirconium("Zirconium", "Zr", 40, 91.224, 4, "[[Kr] 4d2 5s2]")
    AtomicElement Niobium("Niobium", "Nb", 41, 92.906, 5, "[[Kr] 4d4 5s1]")
    AtomicElement Molybdenum("Molybdenum", "Mo", 42, 95.94, 6, "[[Kr] 4d5 5s1]")
    AtomicElement Technetium("Technetium", "Tc", 43, 98, 7, "[[Kr] 4d5 5s2]")
    AtomicElement Ruthenium("Ruthenium", "Ru", 44, 101.07, 8, "[[Kr] 4d7 5s1]")
    AtomicElement Rhodium("Rhodium", "Rh", 45, 102.906, 9, "[[Kr] 4d8 5s1]")
    AtomicElement Palladium("Palladium", "Pd", 46, 106.42, 10, "[[Kr] 4d10]")
    AtomicElement Silver("Silver", "Ag", 47, 107.868, 11, "[[Kr] 4d10 5s1]")
    AtomicElement Cadmium("Cadmium", "Cd", 48, 112.411, 12, "[[Kr] 4d10 5s2]")
    AtomicElement Indium("Indium", "In", 49, 114.818, 13, "[[Kr] 4d10 5s2 5p1]")
    AtomicElement Tin("Tin", "Sn", 50, 118.71, 14, "[[Kr] 4d10 5s2 5p2]")
    AtomicElement Antimony("Antimony", "Sb", 51, 121.76, 15, "[[Kr] 4d10 5s2 5p3]")
    AtomicElement Tellurium("Tellurium", "Te", 52, 127.6, 16, "[[Kr] 4d10 5s2 5p4]")
    AtomicElement Iodine("Iodine", "I", 53, 126.905, 17, "[[Kr] 4d10 5s2 5p5]")
    AtomicElement Xenon("Xenon", "Xe", 54, 131.293, 18, "[[Kr] 4d10 5s2 5p6]")
    
    AtomicElement Cesium("Cesium", "Cs", 55, 132.906, 1, "[[Xe] 6s1]")
    AtomicElement Barium("Barium", "Ba", 56, 137.327, 2, "[[Xe] 6s2]")
    AtomicElement Lanthanum("Lanthanum", "La", 57, 138.906, 3, "[[Xe] 5d1 6s2]")
    
    AtomicElement Cerium("Cerium", "Ce", 58, 140.116, 101, "[[Xe] 4f1 5d1 6s2]")
    AtomicElement Praseodymium("Praseodymium", "Pr", 59, 140.908, 101, "[[Xe] 4f3 6s2]")
    AtomicElement Neodymium("Neodymium", "Nd", 60, 144.24, 101, "[[Xe] 4f4 6s2]")
    AtomicElement Promethium("Promethium", "Pm", 61, 145, 101, "[[Xe] 4f5 6s2]")
    AtomicElement Samarium("Samarium", "Sm", 62, 150.36, 101, "[[Xe] 4f6 6s2]")
    AtomicElement Europium("Europium", "Eu", 63, 151.964, 101, "[[Xe] 4f7 6s2]")
    AtomicElement Gadolinium("Gadolinium", "Gd", 64, 157.25, 101, "[[Xe] 4f7 5d1 6s2]")
    AtomicElement Terbium("Terbium", "Tb", 65, 158.925, 101, "[[Xe] 4f9 6s2]")
    AtomicElement Dysprosium("Dysprosium", "Dy", 66, 162.5, 101, "[[Xe] 4f10 6s2]")
    AtomicElement Holmium("Holmium", "Ho", 67, 164.93, 101, "[[Xe] 4f11 6s2]")
    AtomicElement Erbium("Erbium", "Er", 68, 167.259, 101, "[[Xe] 4f12 6s2]")
    AtomicElement Thulium("Thulium", "Tm", 69, 168.934, 101, "[[Xe] 4f13 6s2]")
    AtomicElement Ytterbium("Ytterbium", "Yb", 70, 173.04, 101, "[[Xe] 4f14 6s2]")
    AtomicElement Lutetium("Lutetium", "Lu", 71, 174.967, 101, "[[Xe] 4f14 5d1 6s2]")

    AtomicElement Hafnium("Hafnium", "Hf", 72, 178.49, 4, "[[Xe] 4f14 5d2 6s2]")
    AtomicElement Tantalum("Tantalum", "Ta", 73, 180.948, 5, "[[Xe] 4f14 5d3 6s2]")
    AtomicElement Tungsten("Tungsten", "W", 74, 183.84, 6, "[[Xe] 4f14 5d4 6s2]")
    AtomicElement Rhenium("Rhenium", "Re", 75, 186.207, 7, "[[Xe] 4f14 5d5 6s2]")
    AtomicElement Osmium("Osmium", "Os", 76, 190.23, 8, "[[Xe] 4f14 5d6 6s2]")
    AtomicElement Iridium("Iridium", "Ir", 77, 192.217, 9, "[[Xe] 4f14 5d7 6s2]")
    AtomicElement Platinum("Platinum", "Pt", 78, 195.078, 10, "[[Xe] 4f14 5d9 6s1]")
    AtomicElement Gold("Gold", "Au", 79, 196.967, 11, "[[Xe] 4f14 5d10 6s1]")
    AtomicElement Mercury("Mercury", "Hg", 80, 200.59, 12, "[[Xe] 4f14 5d10 6s2]")
    AtomicElement Thallium("Thallium", "Tl", 81, 204.383, 13, "[[Xe] 4f14 5d10 6s2 6p1]")
    AtomicElement Lead("Lead", "Pb", 82, 207.2, 14, "[[Xe] 4f14 5d10 6s2 6p2]")
    AtomicElement Bismuth("Bismuth", "Bi", 83, 208.98, 15, "[[Xe] 4f14 5d10 6s2 6p3]")
    AtomicElement Polonium("Polonium", "Po", 84, 209, 16, "[[Xe] 4f14 5d10 6s2 6p4]")
    AtomicElement Astatine("Astatine", "At", 85, 210, 17, "[[Xe] 4f14 5d10 6s2 6p5]")
    AtomicElement Radon("Radon", "Rn", 86, 222, 18, "[[Xe] 4f14 5d10 6s2 6p6]")

    AtomicElement Francium("Francium", "Fr", 87, 223, 1, "[[Rn] 7s1]")
    AtomicElement Radium("Radium", "Ra", 88, 226, 2, "[[Rn] 7s2]")
    AtomicElement Actinium("Actinium", "Ac", 89, 227, 3, "[[Rn] 6d1 7s2]")

    AtomicElement Thorium("Thorium", "Th", 90, 232.038, 102, "[[Rn] 6d2 7s2]")
    AtomicElement Protactinium("Protactinium", "Pa", 91, 231.036, 102, "[[Rn] 5f2 6d1 7s2]")
    AtomicElement Uranium("Uranium", "U", 92, 238.029, 102, "[[Rn] 5f3 6d1 7s2]")
    AtomicElement Neptunium("Neptunium", "Np", 93, 237, 102, "[[Rn] 5f4 6d1 7s2]")
    AtomicElement Plutonium("Plutonium", "Pu", 94, 244, 102, "[[Rn] 5f6 7s2]")
    AtomicElement Americium("Americium", "Am", 95, 243, 102, "[[Rn] 5f7 7s2]")
    AtomicElement Curium("Curium", "Cm", 96, 247, 102, "[]")
    AtomicElement Berkelium("Berkelium", "Bk", 97, 247, 102, "[]")
    AtomicElement Californium("Californium", "Cf", 98, 251, 102, "[]")
    AtomicElement Einsteinium("Einsteinium", "Es", 99, 252, 102, "[]")
    AtomicElement Fermium("Fermium", "Fm", 100, 257, 102, "[]")
    AtomicElement Mendelevium("Mendelevium", "Md", 101, 258, 102, "[]")
    AtomicElement Nobelium("Nobelium", "No", 102, 259, 102, "[]")
    AtomicElement Lawrencium("Lawrencium", "Lr", 103, 262, 102, "[]")

    AtomicElement Rutherfordium("Rutherfordium", "Rf", 104, 261, 4, "[]")
    AtomicElement Dubnium("Dubnium", "Db", 105, 262, 5, "[]")
    AtomicElement Seaborgium("Seaborgium", "Sg", 106, 266, 6, "[]")
    AtomicElement Bohrium("Bohrium", "Bh", 107, 264, 7, "[]")
    AtomicElement Hassium("Hassium", "Hs", 108, 277, 8, "[]")
    AtomicElement Meitnerium("Meitnerium", "Mt", 109, 268, 9, "[]")
    AtomicElement Darmstadtium("Darmstadtium", "Ds", 110, 10, , "[]")
    AtomicElement Roentgenium("Roentgenium", "Rg", 111, 11, , "[]")
    AtomicElement Copernicium("Copernicium", "Cn", 112, 12, , "[]")
    AtomicElement Nihonium("Nihonium", "Nh", 113, 13, , "[]")
    AtomicElement Flerovium("Flerovium", "Fl", 114, 14, , "[]")
    AtomicElement Moscovium("Moscovium", "Mc", 115, 15, , "[]")
    AtomicElement Livermorium("Livermorium", "Lv", 116, 16, , "[]")
    AtomicElement Tennessine("Tennessine", "Ts", 117, 17, , "[]")
    AtomicElement Oganesson("Oganesson", "Og", 118, 18, , "[]")

}

class AtomicIsotope: public AtomicElement {

    short int iExtraProtons;
    short int iTotalProtons = iNumOfProtons + iExtraProtons;

};

//Proposed classes:

class AtomicParticle {};

class Triangle {

    short unsigned iSideAB, iSideBC, iSideCA;
    short unsigned iAngleABC, iAngleBCA, iAngleCAB;


};

class 