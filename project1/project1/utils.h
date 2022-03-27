#pragma once

#include <iostream>

bool close_enough(float v1, float v2) {
    if (abs(v2 - v1) > 0.0001) {
        return false;
    }
    return true;
}
