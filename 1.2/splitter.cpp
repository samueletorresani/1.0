#include "powInt.hpp"
#include "splitter.hpp"

int splitter ( int toSplit, int index){
    return (toSplit / powInt(10 , index) %10);
}