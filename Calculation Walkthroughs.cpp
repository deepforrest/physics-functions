#include <string>
#include <iostream>


// Refactor for greater efficiency
void CalculateTriangleArea(){

    float iBaseLength;
    float iHeightLength;
    float iTriArea;
    bool bIsEquilateral;
    char cYN;

    cout << "\n\nIs the triangle an equilateral triangle?: ";
    cin >> cYN;

    cYN = 'Y' ? bIsEquilateral : !bIsEquilateral;

    
    // Create a loop that will exit and validate that the base length is not a negative number.
    cout << "\n\nWhat is the base length of the triangle?:";
    cin >> iBaseLength;

    if (bIsEquilateral) {

        iTriArea = iEquilateralTriangleArea(iBaseLength);

        cout << "\n\nFor an equilateral triangle of base length " << iBaseLength << ",";

    } else {

        // Height needed for nonequilateral triangles:
        cout << "\n\nWhat is the height of the triangle?: ";
        cin >> iHeightLength;

        iTriArea = iTriangleArea(iBaseLength, iHeightLength);

        cout << "\n\nFor a triangle of base length " << iBaseLength << " and a height of " << iHeightLength ",";

    }
    
    cout << "\nThe area of the triangle is calculated at " << iTriArea << " square units.";

}

// Refactor for greater efficiency.
void CalculateRectangularArea() {
    
    float iSideLength_01;
    float iRectArea;
    bool bIsSquare;

    // Prompt to determine which formula is most appropriate
    cout << "\n\nIs the rectangular object a square?:"
    cin >> bIsSquare;

    // T = Square Formula, F = Rectangular Formula
    if (bIsSquare) {

        cout << "\n\nEnter the length of the side of the square:";
        cin >> iSideLength01;

        iRectArea = iSquareArea(iSideLength01);

        cout << "\n\nA square with a side length of " << iSideLength01 << " has an area of " iRectArea << " square units.";


    } else {

        float iSideLength_02;

        string const sEnter01 = "\n\nEnter the ";
        string const sEnter02 = "of the rectangle: "

        string sArrGeoParts [] = { "length", "width" };
        float iArrGeoInputs [] = { iSideLength_01, iSideLength_02 }


        while (!bIsValidated) {

            int iValidationScore = 0;

            for (iArrIndex = 0, iArrIndex < sizeof(sArrGeoParts[]), iArrIndex++) {

                cout << sEnter01 <<  sArrGeoParts[iArrIndex] << sEnter02;
                cin >> iArrGeoInputs[iArrIndex]
            }

            for (iArrIndex = 0, iArrIndex < sizeof(sArrGeoParts[]), iArrIndex++) {

                iValidationScore = (iArrGeoInputs[iArrIndex] <= 0) ? iValidationScore++ : cout << "\n\nThe input of " << iArrGeoInputs[iArrIndex] << " is not valid!"

            } 

            // Validaton score determines whether if validation loop can break.  Master breaker recommended.
            bIsValidated = (iValidationScore = sizeof(iArrGeoInputs[])) ? true : false;

        }

        cout << "\n\nEnter the length of the rectangle:";
        cin >> iSideLength01;

        cout << "\n\nEnter the width of the rectangle:";
        cin >> iSideLength02;

        // Validate lengths

        iRectArea = iRectangularArea(iSideLength01, iSideLength02);

        cout << "\n\nFor a rectangle with a length of " << iSideLength01 << " and a width of " << iSideLength02 << ",";
        cout << "\nThe calculated area of the rectangle is " << iRectArea << " square units."

    }

}

void CalculateCircularArea() {

    float iCrossSectionLength;
    float iCircleArea;
    char cDiaOrRad;
    bool bIsRadius;

    cout << "\n\nEnter the length of the cross section: ";
    cin >> iCrossSectionLength;

    cout << "\nIs the cross section a radius (R) or a diameter (D)?: ";
    cin >> cDiaOrRad;

    cDiaOrRad = 'R' ? bIsRadius : !bIsRadius;

    bIsRadius ? iCircleArea = iCircleAreaRad(iCrossSectionLength) : iCircleArea = iCircleAreaDia(iCrossSectionLength);

    cout << "\n\nThe Circle's area is " << iCircleArea;

}

void CalculateEllipseArea() {

    float iLongCrossSection;
    float iShortCrossSection;
    float iCircleArea;
    char cDiaOrRad;
    bool bIsRadius;
    string sParameter;

    cout << "\nIs the cross section a radius (R) or a diameter (D)?: ";
    cin >> cDiaOrRad;

    bIsRadius = (cDiaOrRad = 'R') ? true : false;
    
    sParameter = (cDiaOrRad = 'R') ? "radius (R)" : "diameter (D)";
    
    // Enter long and short cross sections:
    cout << "\n\nEnter the value of the short " << sParameter << ":"
    cin >> iShortCrossSection;

    cout << "\n\nEnter the value of the long " << sParameter << ":"
    cin >> iLongCrossSection;

    // Calculates the area depending on whether if radius or diameter was provided.
    iCircleArea = (bIsRadius) ? iCircleAreaRad(iCrossSectionLength) : iCircleAreaDia(iCrossSectionLength);
    

    cout << "\n\nThe Circle's area is " << iCircleArea;

}

void CalculateTrapezoidArea() {

    float iShortLegInput;
    float iLongLegInput;
    float iHeightInput;

    float iTrapArea;

    string const sWhat = "What is the "
    string const sOfTrap = " of the trapezoid?: "

    string sArrTrapParts[] = { "short leg", "long leg", "height"};
    float iArrGeoInputs[] = { iShortLegInput, iLongLegInput, iHeightInput };

    // Loop to input all parts of the trapezoid:
    for (int iArrIndex = 0, iArrIndex < sizeof(sArrTrapParts[]), iArrIndex++) {
        
        cout << "\n\n" << sWhat << sArrTrapParts[iArrIndex] << sOfTrap;
        cin >> iArrGeoInputs[iArrIndex];

    }

    float iTrapArea = iTrapezoidArea(iShortLegInput, iLongLegInput, iHeightInput);

    cout << "For a trapezoid with a short leg of " << iShortLegInput <<", long leg of " << iLongLegInput << ", and a height of " << iHeightInput ", "
    cout << "The trapezoid has an area of " << iTrapArea << " square units.";

}

void CalculateRhombusArea() {

    float iVertDiameterInput;
    float iHoriDiameterInput;
    float iRhombArea;

    string const sWhat = "What is the "
    string const sOfTrap = " cross-section of the rhombus?: "

    string sArrTrapParts[] = {"vertical", "horizontal"};
    float iArrGeoInputs[] = { iShortLegInput, iLongLegInput};

    for (int iArrIndex = 0, iArrIndex < sizeof(sArrTrapParts[]), iArrIndex++) {

        cout << "\n\n" << sWhat << sArrTrapParts[iArrIndex] << sOfTrap;
        cin >> iArrGeoInputs[iArrIndex];

    }

    // Inputs should be validated before calculation is performed below:
    iRhombArea = iRhombusArea(iVertDiameterInput, iHoriDiameterInput);

    cout << "For a rhombus with a vertical cross-section of " << iVertDiameterInput <<"and a horizontal cross-section of " << iHoriDiameterInput << ", "
    cout << "The rhombus has an area of " << iRhombArea << " square units.";

}

int iCalculateEquilateralPolygon(int iNumberOfSides, float iSideLength) {

    switch (iNumberofSides) {

        case 3:

            return iEquilateralTriangleArea(iSideLength);
            break;

        case 4:

            return iSquareArea(iSideLength);
            break;
        
        case 5:

            return iEquilateralPentagonArea(iSideLength);
            break;
        
        case 6:

            return iEquilateralHexagonArea(iSideLength);
            break;
        
        default:

            cout << "Polygon not supported yet.";
    }

}

void CalculateEquilateralPolygonArea() {

    int const iMinSides = 5;
    int const iMaxSides = 12;

    bool bSidesVal = false;
    
    float iEquilateralPolygonArea;

    // Validation

    while(!bSidesVal){

        int iSidesInput;

        cout << "Enter the number of sides of the equilateral polygon?:";
        cin >> iSidesInput;

        if (iMinSides > iSidesInput || iMaxSides < iSidesInput) {

            cout << "The input of " << iSidesInput < " cannot be used.  Please try again!";

            // clear iSidesInput;
        } else {

            cout << "The input of " << iSidesInput << " is acceptable."
            bSidesVal = true;

        }

    }

    float iSideLengthInput;

    cout << "Enter the number of sides of the equilateral polygon?:";
    cin >> iSideLengthInput;

    // Calculation
    iEquilateralPolygonArea = iCalculateEquilateralPolygon(iSidesInput, iSideLengthInput);


}



float iEquilateralPentagonArea(float iSideLength) {

    return 1/4 * sqrt(5 * (5 + 2 * sqrt(5))) * (iSideLength ** 2);

}


float iEquilateralHexagonArea(float iSideLength) {

    return 3 * sqrt(3) / 2 * (iSideLength ** 2);

}