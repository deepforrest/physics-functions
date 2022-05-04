#include <string>
 
void iCalculateFinalVelocity(){

    // Initialization of Local Variables
    bool bShowMorePrompts;
    char sUserResponse;
    char sYes = 'Y';
    double iInputAcceleration;
    double iInputInitialVelocity;
    double iInputTime;

    // Initialization of Input Variables 
    double iArrVariableValues [] = { iInputInitialVelocity, iInputAcceleration, iInputTime };
    string sArrVariableName [] = { "Initial Velocity", "Acceleration", "Time" };
    string sArrVariableUnits [] = { "m/s", "m/(s*s)", "s"};  // Should be a selector based as a function of units!


    // Extra feedback for user if needed
    std::cout << "Do you wish to show additional prompts? (Y/N):"
    std::cin >> sUserResponse;

    // Changes boolean of show more prompts:
    sUserResponse == sYes ? bShowMorePrompts : !bShowMorePrompts;

    // User Input For Loop
    for (iArrInd = 0, iArrInd < sizeof(iArrVariableValues), iArrInd++){

        iArrVariableValues[iArrInd] = iVariableInput(sArrVariableName[iArrInd], sArrVariableUnits[iArrInd]);

    }

    // Calculate Final Velocity
    std::cout << "\n\nThe Final Velocity is calculated as " << iFinalVelocity(iInputInitialVelocity, iInputAcceleration, iInputTime) << " m/s."

}


double iFinalVelocity (double iInitialVelocity, double iAcceleration, double iTime) {


    // Set Up Arrays According To Values and Types
    double iArrVariables [] = { iInitialVelocity, iAcceleration, iTime };
    string sArrVariables [] = { "Initial Velocity", "Acceleration", "Time" }

    // Check Input Array Values to Ensure their Consistency
    for (iArrInd = 0, iArrInd < sizeof(iArrVariables), iArrInd++){

        if (typeid(iInputArray[n]) != double)){
        
            sVariableMismatchStatement(sArrVariables[n], iInputArray[n]);
            return 0;
        
        }

    }

    return iFinalVelocity = iInitialVelocity + iAcceleration * iTime;

}

void sVariableMismatchStatement(string sVariableString, double iVariableType) {
    
    std::cout << "The variable " << sVariableString << " is mismatched with expected type " << iVariableType + ".\n\n";

}

double iFinalPosition (double iInitialPosition, double iVelocity, double iTime){

    return iInitialPosition + iVelocity * iTime;

}


double iAverageVelocity(double iFinalPosition, double iInitialPosition, double iFinalTime, double iInitialTime){

    return (iFinalPosition - iInitialPosition) / (iFinalTime - iInitialTime);

}


double iAverageAcceleration(double iFinalVelocity, double iInitialVelocity, double iFinalTime, iInitialTime){

    return (iFinalVelocity - iInitialVelocity) / (iFinalTime - iInitialTime);

}


double iInstantaneousAcceleration(double iInfVelocity, double iInfTime){

    return iInfVelocity / iInfTime

}


double iForceFromMassAccel(double iMass, double iAcceleration){

    return iMass * iAcceleration;

}


double iMassFromForceAccel(double iForce, double iAcceleration){

    return iForce / iAcceleration;

}