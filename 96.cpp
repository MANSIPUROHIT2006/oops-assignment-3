// Class Network with functions to simulate network packet transmission

#include <iostream>
using namespace std;

class Network {
public:
    void transmitPacket() {
        cout << "Transmitting network packet..." << endl;
    }

    void receivePacket() {
        cout << "Receiving network packet..." << endl;
    }
};

int main() {
    Network net;
    net.transmitPacket();
    net.receivePacket();

    return 0;
}
