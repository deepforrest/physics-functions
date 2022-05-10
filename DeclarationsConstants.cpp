#include <cmath>

// CONSTANTS

// PHYSICAL CONSTANTS
    //KNOWN
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
    const float iAvogadrosNumber = 6.02214 * pow(10, -23);        // atoms / mol
    const float iMolarGasConst = 8.314 * pow(10, 0);       // J / K mol
    const float iRhydbergConst = 1.0973731568539 * pow(10, 7); // 1 / m
    const float iPlancksConst = 6.62607004 * pow(10, -34); // J * s
    const float iPermeabilityVacuum = 1.257 * pow(10, -6); // H / m
    const float iPermittivityVacuum = 8.854 * pow(10, -12); // F / m

    // Units
    const string sGravConst = sCreateUnits("[m][m][m]", "[s][s][kg]");

    // Indices

    // Arrays


    // DERIVED


// PRIMITIVE CONSTANTS


// Boolean (b)


// Numeric (i)


    // Conversions

        // Time

            const short int iSecondsPerMinute = 60;
            const short int iMinutesPerHour = 60;
            const short int iHoursPerDay = 24;
            const short int iDaysPerWeek = 7;

            const short int iSecondsPerHour = iSecondsPerMinute * iMinutesPerHour;
            const short int iSecondsPerDay = iSecondsPerHour * iHoursPerDay;



        // Lengths

            const short int iInchesPerFoot = 12;
            const short int iFeetPerYard = 3;
            const short int iFeetPerMile = 5280;

            const int iMetersPerKM = pow(10, 3);
            const int iMetersPerMM = pow(10, 6);
            const int iMetersPerGM = pow(10, 9);

            const float iAngstromsPerMeter = pow(10, -10);    
            
            const float icmPerInch = 2.54;
            const short float iMetersPerNauticalMile = 1852;

            const short iInchesPerYard = iFeetPerYard * iInchesPerFoot;
            const int iInchesPerMile = iFeetPerMile * iInchesPerFoot;
    
// Strings (s)

    // Basic Units

        // SI
        const string sMULength = "[m]";
        const string sMUTime = "[s]";
        const string sMUMass = "[kg]";
        const string sMUCurrent = "[A]";
        const string sMUTemp = "[K]";
        const string sMUSubstance = "[mol]";
        const string sMULum = "[cd]";

        // English
        const string sEULength = "[ft]";
        const string sEUTime = "[sec]";
        const string sEUMass = "[lb_m]";
        const string sEUCurrent = sMUCurrent;


    // Derived Units
        const string sMUVel = "[m]/[s]";
        const string sMUAccel = "[m]/([s][s])";
        const string sMUJerk = "[m]/([s][s][s])"
        
        const string sMUForce_03 = "[N]";
        const string sMUForce_02 = "([kg][m])/([s][s])";
        const string sArrMUForce[2] = {sMUForce_01, sMUFForce_02};
        
        const string sMUWork_01 = "[J]";
        const string sMUWork_02 = "[N][m]";
        const string sMUWork_03 = "([kg][m][m])/([s][s])";
        const string sArrMUWork[3] = {sMUWork_01, sMUWork_02, sMUWork_03};
        
        const string sMUPower_01 = "[W]";
        const string sMUPower_02 = "([kg][m][m])/([s][s][s])";
        const string sMUPower_03 = "[J]/[s]";
        const string sMUPower_04 = "([N][m])/[s]";
        const string sArrMUPower[4] = {sMUPower_01, sMUPower_02, sMUPower_03, sMUPower_04};


        const string sMUMomentum_01 = "[kg][m]/[s]";
        const string sMUMomentum_02 = "[J][s]/[m]";
        const string sMUMomentum_03 = "[]";
    

    // Derived Units
    const string sMUGravConst_01 = "([m][m][m])/([s][s][kg])"; // unverified, check against Newtonian Constant!
    const string sMUGravConst_02 = "[]";