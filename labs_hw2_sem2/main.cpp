#include <iostream>
#include <iomanip>

using namespace std;

class Time {
public:
    Time(int seconds = 0) : seconds_(seconds) {}

    int getSeconds() const {
        return seconds_;
    }

    void setSeconds(int seconds) {
        seconds_ = seconds;
    }

    friend std::ostream& operator<<(std::ostream& os, const Time& t) {
        int hours = t.seconds_ / 3600;
        int minutes = (t.seconds_ % 3600) / 60;
        int seconds = t.seconds_ % 60;
        os << hours << "h:" << minutes << "m:" << seconds << "s";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Time& t) {
        int hours, minutes, seconds;
        std::cout << "Enter the time in the format hh mm ss: ";
        is >> hours >> minutes >> seconds;
        t.seconds_ = hours * 3600 + minutes * 60 + seconds;
        return is;
    }

    Time operator+(const Time& other) const {
        return Time(seconds_ + other.seconds_);
    }

    Time operator-(const Time& other) const {
        return Time(seconds_ - other.seconds_);
    }

    Time operator*(int scalar) const {
        return Time(seconds_ * scalar);
    }

    operator int() const {
        return seconds_;
    }

private:
    int seconds_;
};

int main()
{
    Time t3(0);
    cin >> t3;
    cout << t3;
    return 0;
}
