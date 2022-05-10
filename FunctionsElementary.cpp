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

int iFindNumofDigits(int iNum) {

    int iIntermediateNum = iNum;
    int iDigits = 1;

    for (int iDigits = 1; iIntermediateNum > 10; iDigits++) {

        iIntermediateNum /= 10;

    }

    return iDigits;

}

void LongDivisionSteps(int iDividend, int iDivisor) {

    int iRemainder;

    int iArrRemainder[];
    int iArrDividend[];
    int iArrDivisor[];

    int iDividendNumOfDigits = iFindNumofDigits(iDividend);
    int iIntermediateDividend = iDividend;

    /*
    General steps:

        1. Parse the dividend as an array of separate digits
        2. Try to see if the element of the array is divisible by the divisor.
            Criteria:  if (digits / divisor >= 1 then proceed)
        3. Produce first digit of quotient (most likely as array)
        4. Multiply digit against digits of dividend array
        5. Subtract out product against digits of dividend array
        6. Bring down digit from dividend and append it to number.
        7. Repeat the process until the number of digits in dividend is exhausted.
        8. Give an output with the quotient plus the remainder over the original divisor.


    */

    // Parse Dividend as an Array/Vector of Seperate Numbers

    for (int iArrIndex = iDividendNumOfDigits, iArrIndex >= 0, iArrIndex--) {

        iArrDividend[iArrIndex] = iIntermediateDividend % 10;
        iIntermediateDividend /= 10;

    }

}

// Complete
string sIsItDivisible(int iDividend, int iDivisor) {

    return (iDividend % iDivisor = 0) ? "Divisible" : "Not Divisible";

}