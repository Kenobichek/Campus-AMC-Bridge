#include <iostream>
#include <vector>
#include <unordered_map>

class Person {
public:
    bool checkPassed() {
        if (this->citizen == 1 && visa) {
            this->passed = true;
            return passed;
        }
        if (this->citizen == 2) {
            if (!this->visa) {
                this->passed = false;
                return passed;
            }
            if (!this->entry) {
                this->passed = false;
                return passed;
            }
            if (this->mark && !this->workPermit) {
                this->passed = false;
                return passed;
            }
            this->passed = true;
            return passed;
        }

        return passed;
    }
    bool getPassed() {
        return this->passed;
    }
    void setID(int id) {
        this->id = id;
    }
    void setCitizen(int citizen) {
        this->citizen = citizen;
    }
    void setVisa(bool visa) {
        this->visa = visa;
    }
    void setEntry(bool entry) {
        this->entry = entry;
    }
    void setMark(bool mark) {
        this->mark = mark;
    }
    void setWorkPermit(bool workPermit) {
        this->workPermit = workPermit;
    }

private:
    int id = -1;                // Person ID.
    int citizen = -1;           // Citizenship: citizen (1) or foreigner (2).
    bool visa = false;          // Visa for a foreigner or passport for a citizen
    bool entry = false;         // Right of entry for a foreigner or zero for a citizen.
    bool mark = false;          // Worker mark for a foreigner or zero for a citizen.
    bool workPermit = false;    // Work permit for a foreigner or zero for a citizen.

    bool passed = false;
};

int main() {

    std::unordered_map<int, Person> unordered_mapPerson;

    // Person ID
    int ID;

    while (std::cin >> ID) {
        if (ID == -1) {
            break;
        }

        Person person;

        person.setID(ID);

        int citizen;
        std::cin >> citizen;
        person.setCitizen(citizen);

        bool visa;
        std::cin >> visa;
        person.setVisa(visa);

        bool entry;
        std::cin >> entry;
        person.setEntry(entry);

        bool mark;
        std::cin >> mark;
        person.setMark(mark);

        bool workPermit;
        std::cin >> workPermit;
        person.setWorkPermit(workPermit);

        person.checkPassed();

        unordered_mapPerson[ID] = person;
    }

    int id;

    while (std::cin >> id) {
        if (id == -1) {
            break;
        }

        auto search = unordered_mapPerson.find(id);
        std::cout << search->second.getPassed() << " ";
    }

    std::cout << -1;

    return 0;
}