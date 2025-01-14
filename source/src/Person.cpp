//
// Created by david on 16-05-2019.
//

#include "Person.h"

int Person::getID() {
    return this->ID;
}

Person::Person(int ID, string name) {

    this->ID = ID;
    this->name = name;

}

void Person::setTimes(Time minDep, Time maxArr) {

    this->minDepartureTime = minDep;
    this->maxArrivalTime = maxArr;

}

void Person::setNodes(unsigned int sourceID, unsigned int destID) {

    this->sourceNodeID = sourceID;
    this->destNodeID = destID;

}

unsigned int Person::getDestNodeID() {
    return this->destNodeID;
}

string Person::getName(){
    return this->name;
}

unsigned int Person::getSourceNodeID() {
    return this->sourceNodeID;
}

Time Person::getMinDepartureTime(){
    return this->minDepartureTime;
}

Time Person::getMaxArrivalTime(){
    return this->maxArrivalTime;
}

bool Person::operator==(const Person &person) {
    return (this->ID==person.ID);

}

void Person::setPickupTime(Time time) {

    this->pickUpTime = time;

}

Time Person::getPickupTime() {
    return this->pickUpTime;
}

