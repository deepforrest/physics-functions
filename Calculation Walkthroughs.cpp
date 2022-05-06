void CalculateTriangleArea(){

    float iBaseLength;
    float iHeightLength;
    float iTriArea;

    // Create a loop that will exit and validate that the base length is not a negative number.
    std::cout << "\n\nWhat is the base length of the triangle?:";
    std::cin >> iBaseLength;

    std::cout << "\n\nWhat is the height of the triangle?:";
    std::cin >> iHeightLength;

    iTriArea = iTriangleArea(iBaseLength, iHeightLength);

    std::cout << "\n\nFor a triangle of base length " << iBaseLength << " and a height of " << iHeightLength ",";
    std::cout << "\nThe area of the triangle is calculated at " << iTriArea << "square units.";

}

void CalculateRectangularArea() {
    
    float iSideLength_01;
    float iRectArea;
    bool bIsSquare;

    // Prompt to determine which formula is most appropriate
    std::cout << "\n\nIs the rectangular object a square?:"
    std::cin >> bIsSquare;

    // T = Square Formula, F = Rectangular Formula
    if (bIsSquare){

        std::cout << "\n\nEnter the length of the side of the square:";
        std::cin >> iSideLength01;

        iRectArea = iSquareArea(iSideLength01);

        std::cout << "\n\nA square with a side length of " << iSideLength01 << " has an area of " iRectArea << " square units.";


    } else {

        std::cout << "\n\nEnter the length of the rectangle:";
        std::cin >> iSideLength01;

        std::cout << "\n\nEnter the width of the rectangle:";
        std::cin >> iSideLength02;

        iRectArea = iRectangularArea(iSideLength01, iSideLength02);

        std::cout << "\n\nFor a rectangle with a length of " << iSideLength01 << " and a width of " << iSideLength02 << ",";
        std::cout << "\nThe calculated area of the rectangle is " << iRectArea << " square units."

    }

}

void CalculateCircularArea() {

    float iCrossSectionLength;
    float iCircleArea;
    char sDiaOrRad;
    bool bIsRadius;

    std::cout << "\n\nEnter the length of the cross section: ";
    std::cin >> iCrossSectionLength;

    std::cout << "\nIs the cross section a radius (R) or a diameter (D)?: ";
    std::cin >> sDiaOrRad;

    sDiaOrRad = 'R' ? bIsRadius : !bIsRadius;

    bIsRadius ? iCircleArea = iCircleAreaRad(iCrossSectionLength) : iCircleArea = iCircleAreaDia(iCrossSectionLength);

    std::cout << "\n\nThe Circle's area is " << iCircleArea;

}

void CalculateEllipseArea() {

    float iLongCrossSection;
    float iShortCrossSection;

    
    float iCircleArea;
    char sDiaOrRad;
    bool bIsRadius;

    std::cout << "\n\nEnter the length of the cross section: ";
    std::cin >> iCrossSectionLength;

    std::cout << "\nIs the cross section a radius (R) or a diameter (D)?: ";
    std::cin >> sDiaOrRad;

    sDiaOrRad = 'R' ? bIsRadius : !bIsRadius;

    bIsRadius ? iCircleArea = iCircleAreaRad(iCrossSectionLength) : iCircleArea = iCircleAreaDia(iCrossSectionLength);

    std::cout << "\n\nThe Circle's area is " << iCircleArea;



}


float iEllipseAreaRad(float iVerticalRadius, float iHorizontalRadius){

    return M_PI * iVerticalRadius * iHorizontalRadius;

}


float iEllipseAreaDia(float iVerticalDiameter, float iHorizontalDiameter) {

    return M_PI * (iVerticalDiameter / 2) * (iVerticalRadius / 2);

}


float iTrapezoidArea(float iShortLeg, float iLongLeg, float iHeightLength) {

    return (iShortLeg + iLongLeg) / 2 * iHeightLength;

}


float iRhombusArea(float iVerticalDiameter, float iHorizontalDiameter) {

    return (1 / 2) * (iVerticalDiameter * iHorizontalDiameter);

}


float iEquilateralTriangleArea(float iBaseLength) {

    return (sqrt(3) / 4) * iBaseLength ** 2;

}


float iEquilateralPentagonArea(float iSideLength) {

    return 1/4 * sqrt(5 * (5 + 2 * sqrt(5))) * (iSideLength ** 2);

}


float iEquilateralHexagonArea(float iSideLength) {

    return 3 * sqrt(3) / 2 * (iSideLength ** 2);

}