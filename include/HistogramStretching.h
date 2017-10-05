/*
 * Copyright (c) 2017
 *     Leonardo Baroncelli, Giancarlo Zollino,
 *
 * Any information contained in this software
 * is property of the AGILE TEAM and is strictly
 * private and confidential.
*/


#ifndef HISTOGRAMSTRETCHING_H
#define HISTOGRAMSTRETCHING_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

class HistogramStretching
{
    public:
        /**
            Stretches the image and returns the stretched image
        */
        static Mat nonLinearStretch(Mat inputImage, float r);
        static Mat linearStretch(Mat image);
    private:
        HistogramStretching();
};

#endif // HISTOGRAMSTRETCHING_H
