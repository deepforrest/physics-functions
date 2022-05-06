#include <cmath>

// CONSTANTS
// Boolean (b)


// Numeric (i)
    // Constant -----------------------------------------------Units----------------------------Spelled--Out
    const float iGravConst = 6.673844 * pow(10, -11)            // (m ** 3) / ((s ** 2) * (kg)) --- cubic meters per second squared per kilogram
    const float iGravAccelEarth = 9.80665 * pow(10, 0)          // m/(s ** 2)                   --- meters per second squared
    const float iSpeedofLight = 2.99792458 * pow(10, 8)         // m/s
    const float iBoltzmannConst = 1.38064852 * pow(10, -34)     // J * s
    const float iFaradayConst = 9.648533289 * pow(10, 4)        // C / mol
    const float iMassofElectron = 9.10938356 * pow(10, -31)     // kg
    const float iMassofProton = 1.672621898 * pow(10, -27)      // kg
    const float iMassofNeutron = 1.974927471 * pow(10, -27)     // kg
    const float iElectronUnitCharge = 1.6021766208 * pow(10, -19) // C

    // Conversions

    const short iInchesPerFoot = 12;
    const short iFeetPerYard = 3;
    const short iFeetPerMile = 5280;

    const int iMetersPerKM = pow(10, 3);
    const int iMetersPerMM = pow(10, 6);
    const int iMetersPerGM = pow(10, 9);    
    
    const float icmPerInch = 2.54

    const short iInchesPerYard = iFeetPerYard * iInchesPerFoot;
    const int iInchesPerMile = iFeetPerMile * iInchesPerFoot;
    
// Strings (s)

    // Basic Units
    const string sMULength = "[m]";
    const string sMUTime = "[s]";
    const string sMUMass = "[kg]";
    const string sMUCurrent = "[A]";
    const string sMUTemp = "[K]";
    const string sMUSubstance = "[mol]";
    const string sMULum = "[cd]";

    const string sEULength = "[ft]";
    const string sEUTime = "[sec]";
    const string sEUMass = "[lb_m]";
    const string sEUCurrent = sMUCurrent;


    // Derived Units
    const string sMUVel = "[m]/[s]";
    const string sMUAccel = "[m]/([s][s])";
    
    const string sMUSForce = "[N]";
    const string sMUFForce = "([kg][m])/([s][s])";
    
    const string sMUSWork = "[J]";
    const string sMUFWork = "([kg][m][m])/([s][s])";
    
    const string sMUSPower = "[W]";
    const string sMUFPower = "([kg][m][m])/([s][s][s])";

    const string sMUSMomentum = "[kg][m]/[s]";
    

    // Derived Units
    const string sMUsGravConst = "([m][m][m])/([s][s][kg])"