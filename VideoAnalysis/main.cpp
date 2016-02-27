//
//  main.cpp
//  VideoAnalysis
//
//  Created by Todd on 2/26/16.
//  Copyright © 2016 Todd. All rights reserved.
//

// This is a simple test bed for our iphone captured videos with our general C++ hand detection library.
// This frame work can be used to do performance test and general debuging.
// The idea is to use OpenCV only for video loading and display while all the kernel functions should be
// implemented by armadillo.

#include <iostream>

#ifdef __cplusplus
#include "armadillo" // Includes the armadillo librray
#endif

#include <opencv2/imgcodecs.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <stdio.h>
#include <stdlib.h> // Include the standard library

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
