#include "settings.h"

Settings::Settings ():
    fullSectorLength (false),
    safetyContourLabels (false),
    twoShades (false),
    symbolizedBoundaries (false),
    showIsolatedDanger (false),
    showLowAccuracy (true),
    shallowPattern (true),
    safetyContour (30.0),
    shallowContour (2.0),
    deepContour (30.0),
    safetyDepth (30.0) {
}