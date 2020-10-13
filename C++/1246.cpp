#include <bits/stdc++.h>

using namespace std;

typedef struct vehicle{
    int plate, size;
} Vehicle;

class Parking{
private:
    int length = 0;
    vector<int> parking_lot;
    int total = 0;
    int ticket_price = 0;

public:
    void set_length(int __length) {
        length = __length;
    }

    void set_ticket_price(int __ticket_price) {
        ticket_price = __ticket_price;
    }

    void init() {
        parking_lot.resize(length);
        for(int i=0; i<length; i++) {
            parking_lot.at(i) = -1;
        }
    }

    bool park(Vehicle vehicle) {
        for(int i=0; i<length; i++) {
            if(parking_lot[i] == -1) {
                int start = i;
                if(start + vehicle.size <= length) {
                    bool check = true;
                    for(int j=start; j<start + vehicle.size; j++) {
                        if(parking_lot[j] != -1) {
                            check = false;
                        }
                    }
                    if(check) {
                        for(int j=start; j<start + vehicle.size; j++) {
                            parking_lot[j] = vehicle.plate;
                        }
                        total += ticket_price;
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void unpark(Vehicle vehicle) {
        bool started = false;
        for(int i=0; i<length; i++) {
            if(parking_lot[i] == vehicle.plate) {
                parking_lot[i] = -1;
                started = true;
            } else {
                if(started) break;
            }
        }
    }

    void print() {
        for(int i=0; i<length; i++) {
            cout << parking_lot[i] << " ";
        }
        cout << endl;
    }

    int get_total() {
        return total;
    }
};

vector<string> split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, n;

    #ifndef ONLINE_JUDGE
        freopen("in.in", "r", stdin);
    #endif

    while(cin >> c >> n) {
        Parking parking;
        parking.set_length(c);
        parking.set_ticket_price(10);
        parking.init();

        cin.get();
        string s;

        while(n--) {
            getline(cin, s);

            vector<string> line = split(s, ' ');
            if(line.size() == 3) {
                int plate, car_size;
                std::istringstream iss1 (line[1]);
                iss1 >> plate;
                std::istringstream iss2 (line[2]);
                iss2 >> car_size;

                Vehicle vehicle;
                vehicle.plate = plate;
                vehicle.size = car_size;
                parking.park(vehicle);
            } else {
                int plate;
                std::istringstream iss (line[1]);
                iss >> plate;

                Vehicle vehicle;
                vehicle.plate = plate;
                parking.unpark(vehicle);
            }
        }

        cout << parking.get_total() << endl;
    }

    return 0;
}
