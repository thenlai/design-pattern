#include "kindegarten.h"

int main() {
    Kindegarten schol = Kindegarten();

    Kid john = Kid("Johan S.T.");
    Kid marry = Kid("Marry Caesar");
    Kid marry2 = Kid("Marry Julius");

    schol.register_kid(KidEvent::SLEEP, john);
    schol.register_kid(KidEvent::PLAY, john);
    schol.register_kid(KidEvent::PLAY, marry);
    schol.register_kid(KidEvent::STUDY, marry);
    schol.register_kid(KidEvent::PLAY, marry2);
    schol.register_kid(KidEvent::STUDY, marry2);

    schol.start(KidEvent::PLAY);
    return 0;
}