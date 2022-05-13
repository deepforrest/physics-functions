#include <string>

int iFactorial (int iNumInput) {

    iFactResult = 1;

    for (int iNum = iInput; iNum > 0; iNum--) {

        iFactResult *= iNum;

    }

    return iFactResult;

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

double iQuadSolPos (double iA, double iB, double iC) {

    return (- iB + pow(pow(iB, 2) - 4 * iA * iC, 1/2)) / (2 * iA);

}

double iQuadSolNeg (double iA, double iB, double iC) {

    return (- iB - pow(pow(iB, 2) - 4 * iA * iC, 1/2)) / (2 * iA);

}

double iArrQuadraticSolution[2] (double iA, double iB, double iC){

    iDiscr = pow(iB, 2) - 4 * iA * iC;

    if iDiscr < 0 {



    }

    return {iArrQuadSolPos(iA, iB, iC), iArrQuadSolNeg(iA, iB, iC)};

}

double iReciprocal(double iNum) {

    return 1 / iNum;
}

double iPolynomial(double iVar, int iHighestPower) {

    double iResult = 0;

    if (iHighestPower < 1) {

        cout << "Not a polynomial!";
        exit(0)
    }

    bool bEnterArray;

    for (int iDegree = iHighestPower; iDegree > 0, iDegree--) {

        double iCoefficient;

        cout << "Enter coefficient for the polynomial with the power of " << iDegree << ":";
        cin >> iCoefficient;

        iResult += iCoefficient * pow(iVar, iDegree);

    }

    return iResult;

}