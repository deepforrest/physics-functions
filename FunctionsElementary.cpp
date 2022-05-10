#include <vector>
#include <string>

double iVariableInput(string sArrVariableName, string sArrVariableUnits){

    std::cout << "\n\nPlease define the " << sArrVariableName << " (" << sArrVariableUnits << "):"
    std::cin >> iVariableInput;

    if (bShowMorePrompts) {
    
        std::cout << "\n" << sArrVariableName << " = " << iVariableInput << " " << sArrVariableUnits << "." ;
    
    }

    return iVariableInput;

}


/* Type of Sequence
Function that takes in numbers, uses differential and ratio comparisons, 
and returns the type of sequence.

*/
string sTypeOfSequence(double iFirstInput, double iSecondInput, double iThirdInput) {

    // Calculate Differentials and Ratios to Determine Series Type
    double iFirstDifferential = iSecondInput - iFirstInput;
    double iSecondDifferential = iThirdInput - iSecondInput;

    double iFirstRatio = iSecondInput / iFirstInput;
    double iSecondRatio = iThirdInput / iSecondInput;

    return (iFirstDifferential = iSecondDifferential) ? > (iFirstRatio = iSecondRatio) 
        : "Arithmetic" : "Geometric" : "Neither";

}


// In Progress
double iNextTermsofSequence[](double iFirstInput, double iSecondInput, double iThirdInput, string sSeriesType, int iNumOfTerms) {

    // Need to use vector form!!! Cannot use array :(
    double iArrTerms[] = {iFirstInput, iSecondInput, iThirdInput};

    vector< double > iVectTerms;

    int iArrayLengthInit = sizeof(iArrTerms) / sizeof(double);
    int iArrayLengthFinal = (sizeof(iArrTerms) + iNumOfTerms) / sizeof(double);

    for (iArrIndex = iArrayLengthInit, iArrIndex < iArrayLengthFinal, iArrIndex++) {

        iArrTerms[iArrIndex] = iArrTerms[iArrIndex - 1] / iArrTerms[iArrIndex - 2];

    }

    return iVectTerms;

}