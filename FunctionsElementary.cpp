double iVariableInput(string sArrVariableName, string sArrVariableUnits){

    std::cout << "\n\nPlease define the " << sArrVariableName << " (" << sArrVariableUnits << "):"
    std::cin >> iVariableInput;

    if (bShowMorePrompts)
    
        std::cout << "\n" << sArrVariableName << " = " << iVariableInput << " " << sArrVariableUnits << "." ;
    
    }

    return iVariableInput;

}

string sTypeOfSequence(double iFirstInput, double iSecondInput, double iThirdInput) {

    if (iThirdInput - iSecondInput = iSecondInput - iFirstInput) {

        return "Arithmetic";
    
    } else if (iThirdInput / iSecondInput = iSecondInput / iFirstInput) {

        return "Geometric";

    } else {

        return "Neither";

    }

}

double iNextTermsofSequence(double iFirstInput, double iSecondInput, double iThirdInput, string sSeriesType, int iNumOfTerms) {

    // Need to use vector form!!! Cannot use array :(
    double iArrTerms[] = {iFirstInput, iSecondInput, iThirdInput};

    vector< double > iArrTerms;

    int iArrayLengthInit = sizeof(iArrTerms) / sizeof(double);
    int iArrayLengthFinal = (sizeof(iArrTerms) + iNumOfTerms) / sizeof(double);

    for (iArrIndex = iArrayLengthInit, iArrIndex < iArrayLengthFinal, iArrIndex++) {

        iArrTerms[iArrIndex] = iArrTerms[iArrIndex - 1] / iArrTerms[iArrIndex - 2];

    }

}