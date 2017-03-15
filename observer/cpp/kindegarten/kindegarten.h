#include <string>
#include <map>

enum class KidEvent {
    SLEEP,
    STUDY,
    PLAY
};

class Kid {
private:
   std::string name;
public:
    Kid(std::string name) {
        this->name = name;
    }
    be_good(KidEvent event);
};

class Kindegarten {
private:
    std::multimap<KidEvent, Kid> schedules;
public:
    Kindegarten();
    void register_kid(KidEvent event, Kid kid);
    void start(KidEvent event);
};
