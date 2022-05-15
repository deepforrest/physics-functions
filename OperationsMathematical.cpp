#include <string>

// I - Elementary Functions

double iAbsValue (iNum1) {

    return (iNum1 > 0) ? iNum1 : -iNum1;

}

int iFactorial (int iNumInput) {

    iFactResult = 1;

    for (int iNum = iInput; iNum > 0; iNum--) {

        iFactResult *= iNum;

    }

    return iFactResult;

}

double iReciprocal(double iNum) {

    return 1 / iNum;
}

double iPolynomialCalc(double iVar, int iHighestPower) {

    double iResult = 0;

    if (iHighestPower < 1) {

        cout << "Not a polynomial!";
        exit(0);
    }

    bool bEnterArray;

    for (int iDegree = iHighestPower; iDegree > 0, iDegree--) {

        double iCoefficient;

        cout << "Enter coefficient for the polynomial with the power of " << iDegree << ":";
        cin >> iCoefficient;

        iResult += iPolyTerm(iCoefficient, iVar, iDegree);

    }

    return iResult;

}

// Find and replace instances across doc
double iPolyTerm(double iCoefficient, double iVariable, int iPower) {

    return pow(iCoefficient * iVariable, iPower);

}

double iDiff (double iNum1, double iNum2) {

    return iNum1 - iNum2;

}

double iSqRt(double iNum) {

    return pow(iNum, iReciprocal(2));

}

double iNthRoot(double iNum, double iRoot) {

    return pow(iNum, iReciprocal(iRoot));

}

// II - Definitions

int iArrLength(iArrInput[]) {

    // In C++, the array type has to be used to return a workable length
    return sizeof(iArrInput) / sizeof(typeid(iArrInput).name());

}

double iQuadSolPos (double iA, double iB, double iC) {

    return (- iB + iSqRt(iQuadDisc(iA, iB, iC))) / (2 * iA);

}

double iQuadSolNeg (double iA, double iB, double iC) {

    return (- iB - iSqRt(iQuadDisc(iA, iB, iC))) / (2 * iA);

}

double iQuadDisc(double iA, double iB, double iC) {

    return pow(iB, 2) - 4 * iA * iC;

}

int iCalculateCombinations (int iTotalItems, int iNumOfItemsSelected) {

    int iCalculatedCombNum = iFactorial(iTotalItems);
    int iCalculatedCombDen = iFactorial(iTotalItems - iNumOfItemsSelected) * iFactorial(iNumOfItemsSelected);

    return iCalculatedCombNum / iCalculateddCombDen;

}

int iCalculatePermutations (int iTotalItems, int iNumOfItemsSelected) {

    int iCalculatedCombNum = iFactorial(iTotalItems);
    int iCalculatedCombDen = iFactorial(iTotalItems - iNumOfItemsSelected);

    return iCalculatedCombNum / iCalculateddCombDen;

}

// III - Comparatives




double iCompareCombToPerm (int iTotalItems, int iNumOfItemsSelected) {

    return iCalculateCombinations(iTotalItems, iNumOfItemsSelected) / iCalculatePermutations(iTotalItems, iNumOfItemsSelected);

}

double iArrQuadraticSolution[2] (double iA, double iB, double iC){


    if iQuadDisc(iA, iB, iC) < 0 {

        cout << "Nonreal Result" << endl;

    }

    return {iQuadSolPos(iA, iB, iC), iQuadSolNeg(iA, iB, iC)};

}

double iDeterminant22 (double iX1, double iX2, double iY1, double iY2) {
    
    return iX1 * iY2 - iX2 * iY1;

}

double iArrCrossProduct(double iI1, double iJ1, double iK1, double iI2, double iJ2, double iJ3)[3] {

    double iDeterminantI = iDeterminant22(iJ1, iJ2, iK1, iK2);
    double iDeterminantJ = iDeterminant22(iI1, iI2, iK1, iK2);
    double iDeterminantK = iDeterminant22(iI1, iI2, iJ1, iJ2);

    return {iDeterminantI, iDeterminantJ, iDeterminantK};

}

double iVectorDotProduct(double iI1, double iJ1, double iK1, double iI2, double iJ2, double iJ3) {

    return iI1 * iI2 + iJ1 * iJ2 + iK1 * iK2;

}

double iSinSeriesExpansion(double iVar, int iNumOfTerms){

    double iResult = 0;

    for (int i = 0; i < iNumOfTerms; i++) {

        iResult += pow(-1. i) * pow(iVar, 2 * i + 1) / iFactorial(2 * i + 1);

    }

    return iResult;

}

double iCosSeriesExpansion(double iVar, int iNumOfTerms){

    double iResult = 0;

    for (int i = 0; i < iNumOfTerms; i++) {

        iResult += pow(-1. i) * pow(iVar, 2 * i) / iFactorial(2 * i);

    }

    return iResult;

}

double iTanSeriesExpansion(double iVar, int iNumOfTerms) {

    if (iAbsValue(iVar) > M_PI / 2) {

        cout << "DOMAIN ERROR! Variable must be (-pi/2, pi/2)" << endl;
        exit(0);

    }
    return (iSinSeriesExpansion(iVar, iNumOfTerms) / iCosSeriesExpansion(iVar, iNumOfTerms));

}

double iNatExpSeriesExpansion(double iVar, int iNumOfTerms) {

    double iResult = 0;

    for (int i = 0; i < iNumOfTerms; i++) {

        iResult += pow(iVar, i) / iFactorial(i);

    }

    return iResult;


}

double iNatLogSeriesExpansion(double iVar, int iNumOfTerms) {

    double iResult = 0;

    for (int iTermNo = 1; iTermNo <= iNumOfTerms; iTermNo++) {

        iResult += pow(-1, iTermNo - 1) * pow(iVar - 1, iTermNo) / iTermNo;

    }

    return iResult;


}

bool bIsPrime (int iNum) {

   !bEvenNumberTest(iNum);
   int iMidPoint = round(iNum / 2);

    for (int iDivisor = 3; iDivisor < iMidPoint; iDivisor +=2) {

        if (iNum % iDivisor = 0) {

            return false;

        }

    }

    return true;

}

bool bEvenNumberTest(int iNum) {

    if (iNum % 2 = 0) {

        return true;

    }


}

bool bIsLessThan(int iNum1, int iNum2) {

    return (iNum1 < iNum2);

}


double iTriangleAreaHeronsForm(double iSide1, double iSide2, double iSide3) {

    double iSemiPerimeter = (iSide1 + iSide2 + iSide3) / 2;
    
    return iSqRt(iSemiPerimeter * iDiff(iSemiPerimeter, iSide1) * iDiff(iSemiPerimeter, iSide2) * iDiff(iSemiPerimeter, iSide3));

}


// Ready for Testing
double iArrSyntheticDivisionQuotient[] (double iArrDividendCoefficients[], double iArrDivisorCoefficients[2]) {

    // Validate
    if (iArrLength(iArrDividendCoefficients) != 2) {

        cout << "Cannot use nonlinear divisor!" << endl;
        exit(0);
    
    } else {

        // Uses the formula ax + b = 0 ---> x = - b / a
        double iSyntheticDivisor = - iArrDivisorCoefficients[1] / iArrDivisorCoefficients[0];
        
        // Create a return array
        double iReturnArray[iArrLength[iArrDividendCoefficients]];
    
        // Bring down initial coefficient to return array
        iReturnArray[0] = iArrDividendCoefficients[0];

    }
    

    // Loop for adding coefficients
    for (int i = 1; i < iArrLength(iDividendCoefficients), i++) {

        double iMiddleTerm = iSyntheticDivisor * iReturnArray[i - 1];
        iReturnArray[i] = iArrDividendCoefficients[i] + iMiddleTerm;

    }

    return iReturnArray;

}

// Check inputs
double iArrLinOrdPairFindX[2](double iX, double iSlope, double iVert) {

    return {iX, iLinearEqY(iX, iSlope, iVert)};

}

// Check inputs
double iArrLinOrdPairFindY[2](double iY, double iSlope, double iVert) {

    return {iLinearEqX[iY, iSlope, iVert], iY};
    
}


double iArrOrderedPair[2] (double iX, double iY) {

    return { iX, iY };

}

double iFindSimpleDomain[] {double iPolyCoeffs[]} {

    // 1 - Find Vertical Asymptotes
    // 2 - 

}