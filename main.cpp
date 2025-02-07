#include <iostream>
using namespace std;


struct SpaceStation {
    string name;
    int crewCapacity;

    SpaceStation(string n = "Unknown", int c = 0) : name(n), crewCapacity(c) {
        cout << "SpaceStation constructor called for " << name << endl;
    }
};

struct Spaceship {
    string name;
    string manufacturer;
    int speed;
    int length;
    int cargoCapacity;
    SpaceStation station;

    Spaceship(string n, string m, int s, int l, int c, SpaceStation st)
        : name(n), manufacturer(m), speed(s), length(l), cargoCapacity(c), station(st) {
        cout << "Spaceship constructor called for " << name << endl;
    }

    Spaceship() : name("Unknown"), manufacturer("Unknown"), speed(0), length(0), cargoCapacity(0), station() {
        cout << "Default Spaceship constructor called" << endl;
    }
};

int main() {
    cout << "Creating a spaceship with a space station:\n";

    SpaceStation st("International Space Station", 6);
    Spaceship ship("Enterprise", "NASA", 25000, 100, 50, st);

    cout << "\nSpaceship Details:\n";
    cout << "Name: " << ship.name << endl;
    cout << "Manufacturer: " << ship.manufacturer << endl;
    cout << "Speed: " << ship.speed << " km/h" << endl;
    cout << "Length: " << ship.length << " meters" << endl;
    cout << "Cargo Capacity: " << ship.cargoCapacity << " tons" << endl;
    cout << "Space Station Name: " << ship.station.name << ", Crew Capacity: " << ship.station.crewCapacity << " members" << endl;

    return 0;
}