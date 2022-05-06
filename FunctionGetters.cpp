#include <string>

string sGetStandardVariableUnits(string sVariableInput){

    switch (sVariableInput) {
        
        case "Position", "Initial Position", "Final Position", "Height", "Depth":

            return "m";
            break;

        case "Velocity", "Initial Velocity", "Final Velocity", "Speed":

            return "m/s";
            break;

        case "Acceleration", "Initial Acceleration", "Final Acceleration", "Deceleration":

            return "m/(s*s)";
            break;

        case "Mass":

            return "kg";
            break;

        case "Force":

            return "N";
            break;

        case "Energy", "Work", "Kinetic Energy", "Thermal Energy", "Potential Energy":

            return "J";
            break;
        
        default:

            return "Not Defined Yet";
            break;

    }

}

// Ready for testing
int iGetNumericalValueFromPrefix(char sUnitPrefix){

    switch (sUnitPrefix) {

        // Selects numeric value based on prefix (deka (da) not included due to string length):
        case 'E':

            return 10 ** 18;
            break;

        case 'P':

            return 10 ** 15;
            break;

        case 'T':

            return 10 ** 12;
            break;

        case 'G':

            return 10 ** 9;
            break;

        case 'M':

            return 10 ** 6;
            break;

        case 'k':

            return 10 ** 3;
            break;

        case 'h':

            return 10 ** 2; 
            break;

        case 'd':

            return 10 ** -1; 
            break;

        case 'c':

            return 10 ** -2; 
            break;

        case 'm':

            return 10 ** -3; 
            break;

        case 'µ':

            return 10 ** -6; 
            break;

        case 'n':

            return 10 ** -9;
            break;

        case 'p':

            return 10 ** -12;
            break;

        case 'f':

            return 10 ** -15;
            break;

        default:

            return 10 ** 0;
            break;

    }
}