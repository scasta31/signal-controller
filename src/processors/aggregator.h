#ifndef AGREGGATOR_H
#define AGREGGATOR_H

namespace Aggregator {
    int window = 10;
    int counter = 0;
    float average_temp = 0;
    float average = 0;

    float averaged_window(float input) {
        average_temp += input;
        counter += 1;
        if (counter == window){
            average = average_temp / float(counter);
            average_temp = 0;
            counter = 0;
        }
        return average;
    }
}

#endif