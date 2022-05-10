// CONSTANTS
// Boolean (b)


// Numeric (i)
    // Constant -------------------------------------------------------------Units----------------------------Spelled--Out----------------------------
    const double iGravConst = 6.673844 * (10 ** -11);               // ([m][m][m])/([s][s][kg])       --- cubic meters per second squared per kilogram
    const double iGravAccelEarth = 9.80556 * (10 ** 0);             // [m]/([s][s])                   --- meters per second squared
    const double iSpeedofLight = 2.99792458 * (10 ** 8);            // [m]/[s]
    const double iBoltzmannConst = 1.38064852 * (10 ** -34);        // [J][s]
    const double iFaradayConst = 9.648533289 * (10 ** 4);           // [C]/[mol]
    const double iElectronUnitMass = 9.10938356 * (10 ** -31);      // [kg]
    const double iProtonUnitMass = 1.672621898 * (10 ** -27);       // [kg]
    const double iNeutronUnitMass = 1.974927471 * (10 ** -27);      // [kg]
    const double iElectronUnitCharge = 1.6021766208 (10 ** -19);    // [C]
    const double iRydbergConst = 1.0973731568508 * (10 ** 7);       // [m]
    const double iStefBoltzConst = 5.670367 * (10 ** -8);           // [W]/([m][m][K][K][K][K])        --- Watts per square meter per Kelvin quartiled
    const double iFineStructureConst = 7.2973525664 * (10 ** -3);   // []

    // Calculated Constants
    const double iProtonElectronMassRatio = iProtonUnitMass / iElectronUnitMass;

// Strings (s)
    // Standard Units
    // const string s = ""
    const string sDistanceUnits = "[m]"
    const string sAccelMetricUnits = "[m]/([s][s])";

    // Constants
    const string sGravConstUnits = "([m][m][m])/([s][s][kg])";
    const string sGravAccelEarth = sAccelMetricUnits;