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

    // Step 1 - See if dividend is divisible by divisor
    if (iDividend % iDivisor != 0) {

        cout << "\n" << iDividend << " is not divisible by " << iDivisor;
        exit(0);

    }
    
    // Step 2 - Parse Dividend as an Array/Vector of Seperate Numbers

    for (int iArrIndex = iDividendNumOfDigits, iArrIndex >= 0, iArrIndex--) {

        iArrDividend[iArrIndex] = iIntermediateDividend % 10;
        iIntermediateDividend /= 10;

    } 

}

// Complete
string sIsItDivisible(int iDividend, int iDivisor) {

    return (iDividend % iDivisor = 0) ? "Divisible" : "Not Divisible";

}

string sUnitNTimes(string sInputUnit, int iOccurences) {

    string sReturnUnit = sInputUnit;

    if (i > 2) {

        for (int i = 0; i < iOccurences; i++) {

            sReturnUnit += sInputUnit;

        }

        return sReturnUnit;

    } else if (i = 1) {

        return sReturnUnit;

    } else {

        cout << iOccurences << " is not a valid number of occurences of " << sInputUnit << "!";
        exit(0);

    }

}


// Double check
short iFindNormalAngle(short iAngleInput) {

    // Move to Global
    const int iFullCircularAngle = 360;
    const int iMinAngle = 0;

    int iNumOfRev = 0;

    // Evaluates angles above
    if (iAngleInput > iFullCircularAngle) {

        while (iAngleInput > iFullCircularAngle) {

            iAngleInput -= iFullCircularAngle;
            iNumOfRev++;
        
        }


    } else if (iAngleInput < iMinAngle) {

        while (iAngleInput < iMinAngle) {

            iAngleInput += iFullCircularAngle;
            iNumOfRev++;        

        }

    } else {

        continue;

    }

    return iAngleInput;

}

string sFindQuadrant(int iInputAngle) {

    int iAngle = iFindNormalAngle(iInputAngle);

    int const iMaxAngle = 360;
    int const iQuadrants = 4
    int iAnglePerQuadrant = iMaxAngle / iQuadrants;

    if (iAngle % iAnglePerQuadrant = 0) {

        iAngle /= iQuadrants;
        
        int iAxis = iAngle % iQuadrants;


        string xAxisLabel = (iAxis = 0) ? "+x" 
            : (iAxis = 1) ? "+y" 
            : (iAxis = 2) ? "-x" 
            : "-y";

        return "Along the " + sAxisLabel + " Axis";
    
    } else {

        string sQuadNum = (iAngle < 90) ? "I" 
            : (iAngle < 180) ? "II" 
            : (iAngle < 270) ? "III" 
            : "IV";
            
        return "Quadrant " + sQuadNum;

    }

}

int iShapeAngleTotal(int iNumOfSides) {

    if (iNumOfSides < 3) {

        cout << "Not a closed shape!";
        exit(0);
    
    } else { 

        return (iNumOfSides - 2) * 180;

    }

}

int iDegreesPerIntersection(int iNumOfSides) {

    if (iNumOfSides < 3) {

        cout << "Not a closed shape!";
        exit(0);
    
    } else { 

        return iShapeAngleTotal(iNumOfSides) / iNumOfSides;

    }

}

// Is there a way to return a vector of n dimensions instead of making these redundant functions?
double iMidPoint2D[2] (double iXPt1, double iXPt2, double iYPt1, double iYPt2) {

    return [(iXPt1 + iXPt2) / 2, (iYPt1 + iYPt2) / 2];

}


double iMidPoint3D[3] (double iXPt1, double iXPt2, double iYPt1, double iYPt2, double iZPt1, double IZPt2) {

    return [(iXPt1 + iXPt2) / 2, (iYPt1 + iYPt2) / 2, (iZPt1 + iZPt2) / 2] ;

}


double iMidPointND[](int iNumOfDimensions) {

    double iReturnArray[iNumOfDimensions];

    for (int iIndexToFill = 0; iIndexToFill < iNumOfDimensions; iIndexToFill++) {

        double iPoint01, iPoint02;

        cout << "Please enter Point 1 of Dimension" <<  iIndexToFill + 1 << ":";
        cin >> iPoint01;

        cout << "Please enter Point 1 of Dimension" <<  iIndexToFill + 1 << ":";
        cin >> iPoint02;

        iReturnArray[iIndexToFill] = (iPoint01 + iPoint02) / 2;

    }

    return iReturnArray;

}

double iDialate2DPoint[2](double iXCoord, double iYCoord, double iAmp) {

    // Can iPoint be brought outside as a factored multiplier?
    return {iPoint * iXCoord, iPoint * iYCoord};

}

double iReflect2DPoint[2](double iXCoord, double iYCoord, string sAxis) {

    select (sAxis) {

        case "x-axis":

            // When reflected across the x-axis, the y-coordinate becomes negative
            return {iXCoord, -iYCoord};

        case "y-axis":

            // When reflected across the y-axis, the x-coordinate becomes negative
            return {-iXCoord, iYCoord};

        default

            cout << "Axis of reflection not provided!";
            exit(0);

    }

}

double iDistanceFormula2D(double iXPt2, double iXPt1, double iYPt2, double iYPt1) {

    double iFinalPt, iInitialPt;
    double iArrFinalPts[2] = {iXPt2, iYPt2};
    double iArrInitialPts[2] = {iXPt1, iYPt1};
    double iDistance = 0;

    int iArrayLength = sizeof(iArrFinalPts) / sizeof(double);

    for (iArrIndex = 0; iArrIndex < iArrayLength; iArrIndex++) {

        iDistance += pow(iArrFinalPts[iArrIndex] - iArrInitialPts[iArrIndex], 2);

    }

    // Final distance is taken to the square root of the interior:
    return pow(iDistance, 1/2);

}

double iDistanceFormula3D(double iXPt2, double iXPt1, double iYPt2, double iYPt1, double iZPt2, double iZPt1) {

    double iFinalPt, iInitialPt;
    double iArrFinalPts[3] = {iXPt2, iYPt2, iZPt2};
    double iArrInitialPts[3] = {iXPt1, iYPt1, iZPt1};
    double iDistance = 0;

    int iArrayLength = sizeof(iArrFinalPts) / sizeof(double);

    for (iArrIndex = 0; iArrIndex < iArrayLength; iArrIndex++) {

        iDistance += pow(iArrFinalPts[iArrIndex] - iArrInitialPts[iArrIndex], 2);

    }

    // Final distance is taken to the square root of the interior:
    return pow(iDistance, 1/2);

}

// Not sure if this will work or needs to be reconfigured as a void function
double iDistanceFormulaND(int iNumOfDimensions) {

    double iDistance = 0;

    for (int i = 0; i < iNumOfDimensions, i++) {

        double iFinalPt, iInitialPt;

        cout << "\nEnter the final coordinate for dimension #" << i + 1 << ":";
        cin >> iFinalPt;

        cout << "\nEnter the initial coordinate for dimension #" << i + 1 << ":";
        cin >> iInitialPt;

        iDistance += pow(iFinalPt - iInitialPt, 2);

    }

    return pow(iDistance, 1/2);
    
}

bool bIsAReducedFraction(int iNumerator, int iDenominator) {

    int iMinNum = (iNumerator > iDenominator) ? iDenominator : iNumerator;

    // Create an array of prime numbers to cycle through to avoid duplicates!

    // Even Number test
    if (iNumerator % 2 = 0 && iDenominator % 2 = 0) { 

        return false;

    } else if (iMinNum < 3) {

        return true;

    } else {

        // Odd numbers
        for (iFactor = 3; iFactor < iMinNum; iFactor += 2) {

            if (iNumerator % iFactor = 0 && iDenominator % iFactor = 0) {

                return false;

            }

        }

    }

    return true;

}

string sMultiplyFractions(int iNum1, int iDen2, int iNum2, int IDen2) {

    // Definitions
    int iNum = iNum1 * iNum2;
    int iDen = iDen1 * iDen2;

    // Throws a DIV0 Error
    if (iDen = 0) {

        return "Cannot have 0 in the denominator!  Undetermined.";

    }

    // Create the Fractions
    string sFrac1 = "(" + to_string(iNum1) + "/" + to_string(iDen1) + ")";
    string sFrac2 = "(" + to_string(iNum2) + "/" + to_string(iDen2) + ")";
    string sFracRHS = to_string(iNum) + "/" + to_string(iDen);

    return sFract1 + " * " + sFract2 + " = " +sFracRHS;

}

string sDivideFractions(int iNum1, int iDen2, int iNum2, int IDen2) {

    // By definition it's a matter of flipping the numerator and denominator
    int iNum = iNum1 * iDen2;
    int iDen = iDen1 * iNum2;

    // Ensure that DIV0 isn't happening
    if (iDen = 0) {

        return "Cannot have 0 in the denominator!  Undetermined.";

    }

    // Fraction Setups
    string sFrac1 = "(" + to_string(iNum1) + "/" + to_string(iDen1) + ")";
    string sFrac2A = "(" + to_string(iNum2) + "/" + to_string(iDen2) + ")";
    string sFrac2B = "(" + to_string(iDen2) + "/" + to_string(iNum2) + ")";

    // Statement Setups
    string sInterStatementLHS = sFract1 + " ÷ " sFract2A;
    string sInterStatementRHS = sFract1 + " ÷ " sFract2B;
    string sFinalRHS = to_string(iNum) + "/" + to_string(iDen);

    // Return Statement
    string sReturnStatement = sInterStatementRHS " = " + sFinalRHS;

    // Shows that by flipping the second fraction and multiplying that the calculation can be performed
    cout << "\nBy flipping the second fraction and multiplying, we get the following answer:" << endl;
    cout << "\n" << sInterStatementLHS << " = " << sInterStatementRHS << endl;
    cout << "\n" << sReturnStatement << endl;

    return sReturnStatement;

}

string iConvertToFraction(double iNum, double iDenom) {

    // Loop to multiply numerators and denominators into decimalless ratios:

    // Calculate the length of the number using log_10 format

    int iNumLen = log10(iNum);
    int iDenLen = log10(iDen);

    /*
    while (istype(float)) {

        iNum *= 10;
        iDen *= 10;

    }

    */

    return "Function not ready."
}


double iLinearEqX (double iY, double iVert, double iSlope) { 

    // Validations
    if (iSlope = 0) {

        cout << "Invalid slope!" << endl;
        exit(0);
    }

    return (iY - iVert)/iSlope;

}

double iLinearEqY (double iSlope, double iX, double iVert) {

    return iSlope * iX + iVert;

}

double iLinearXInt (double iVert, double iSlope) {

    // Let iY = 0
    return iLinearEqX(0, iVert, iSlope);

}

double iLinearYInt (double iVert) {

    // Let iX = 0
    return iLinearEqY(0, 0, iVert);

}