#define _USE_MATH_DEFINES
 
#include <cmath>
#include <iostream>


// Part 01 - 2D Areas

/*

    FUNCTION LIST

    _________2D_Areas______________________
    01 Triangle Area             (COMPLETE)
    02 Rectangular Area          (COMPLETE)
    03 Square Area               (COMPLETE)
    04 Circular Area - Radius    (COMPLETE)
    05 Circular Area - Diameter  (COMPLETE)
    06 Ellipse Area - Radius     (COMPLETE)
    07 Ellipse Area - Diameter   (COMPLETE)
    08 Trapezoid Area            (COMPLETE)
    09 Rhombus Area              (COMPLETE)
    10 Equilateral Triangle Area (COMPLETE)
    11 


*/

double iTriangleArea(double iBaseLength, double iHeightLength){

    return 1 / 2 * iBaseLength * iHeightLength;

}

double iSquareArea(double iSideLength){

    return pow(iSideLength, 2);

}

double iRectangularArea(double iLength, double iWidth){

    return iLength * iWidth;

}


double iCircleAreaRad(double iCircleRadius){

    return M_PI * pow(iCircleRadius, 2);

}


double iCircleAreaDia(double iCircleDiameter){

    return M_PI * pow((iCircleDiameter / 2), 2);

}


double iEllipseAreaRad(double iVerticalRadius, double iHorizontalRadius){

    return M_PI * iVerticalRadius * iHorizontalRadius;

}


double iEllipseAreaDia(double iVerticalDiameter, double iHorizontalDiameter) {

    return M_PI * (iVerticalDiameter / 2) * (iVerticalRadius / 2);

}


double iTrapezoidArea(double iShortLeg, double iLongLeg, double iHeightLength) {

    return (iShortLeg + iLongLeg) / 2 * iHeightLength;

}


double iRhombusArea(double iVerticalDiameter, double iHorizontalDiameter) {

    return (1 / 2) * (iVerticalDiameter * iHorizontalDiameter);

}


double iEquilateralTriangleArea(double iBaseLength) {

    return (sqrt(3) / 4) * pow(iBaseLength, 2);

}


double iEquilateralPentagonArea(double iSideLength) {

    return 1/4 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(iSideLength, 2);

}


double iEquilateralHexagonArea(double iSideLength) {

    return 3 * sqrt(3) / 2 * pow(iSideLength, 2);

}

double iEquilateralHeptagonArea(double iSideLength) {

    return 7/4 * pow(iSideLength, 2) * cot(180 / 7 * 2 * M_PI / 360);

}





// Perimeters
double iSquareParameter(double iSideLength) {

    return iRectangularParameter(iSideLength, iSideLength);

}


double iRectangularParameter(double iLength, double iWidth) {

    return 2 * (iLength + iWidth);

}

double iCircleCircumferenceRad(double iCircleRadius) {

    return 2 * M_PI * iCircleRadius;

}

double iCircleCircumferenceDia(double iCircleDiameter) {

    return M_PI * iCircleDiameter;

}

// Individual Lengths

double iRightTriangleLeg(double iLeg, double iHypotenuse){

    return sqrt((iHypotenuse ** 2) - (iLeg ** 2));

}

double iRightTriangleHyp(double iLeg01, double iLeg02) {

    return sqrt((iLeg01 ** 2) + (iLeg02 ** 2));

}

double iTriangleBase(double iTriangleArea, double iHeight) {

    return 2 * iTriangleArea / iTriangleHeight;

}

double iTriangleHeight(double iTriangleArea, double iTriangleBase){

    return 2 * iTriangleArea / iTriangleBase;

}

double iArcLength(double iRadius, double iAngle){

    return iRadius * iAngle;

}


// Others

int iNumberofSides(string sShapeName) {

    switch (sShapeName) {

        case "Triangle":

            return 3;
            break;

        case "Square", "Rectangle", "Rhombus", "Trapezoid":

            return 4;
            break;

        case "Pentagon":

            return 5;
            break;

        case "Hexagon":

            return 6;
            break;

        case "Heptagon":

            return 7;
            break;

        case "Octagon":

            return 8;
            break;

        case "Nonagon":

            return 9;
            break;

        case "Decagon":

            return 10;
            break;

        case "Undecagon":

            return 11;
            break;

        case "Dodecagon":

            return 12;
            break;

        case "Circle":

            std::cout >> sShapeName >> " cannot be used in perimeter calculations!  Please use circumference of circle."
            return 1;
            break;

        default:

            std::cout >> sShapeName >> " not recognized!\n\n"
            return -1;
            break;

    }

}