/**
 * Author: Aravinth Panchadcharam
 * Email: me@aravinth.info
 * Date: 07/06/15.
 * Project: Gesture Recogntion for Human-Robot Interaction
 */

#ifndef __human_robot_interaction__test__
#define __human_robot_interaction__test__

#include <stdio.h>
#include "GRT.h"
#include "setup.h"

#define TRAINING_DATASET "../data/hri-Train-2H-4G-HOME.txt"
#define TEST_DATASET "../data/hri-Test-2H-2G-HOME-1.txt"


using namespace GRT;

class test
{
    
private:
    void run();
    void grtDataToJson();
    void testNullRejection();
    void testHandsUp();
    void externalRangeTest();
    void savePipeline();
    
public:
    test();
    
};



#endif



