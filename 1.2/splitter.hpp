#ifndef Splitter_H
#define Splitter_H

int splitter(int toSplit, int index){
    return (toSplit / powInt(10,index)%10);
    }
#endif