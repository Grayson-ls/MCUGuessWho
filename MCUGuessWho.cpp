#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Character {
public:
    string name;
    bool Male;
    bool Human;
    bool Humanoid;
    bool Founder;
    bool Avenger;
    bool Eternal;
    bool Asgardian;
    bool Guardian;
    bool Space;
    bool Street_level;
    bool Billionare;
    bool Military;
    bool Enhanced;
    bool Super;
    bool Former;
    bool Legacy;
    bool Assassin;
    bool Fighter;
    bool Tech;
    bool Weapon;
    bool Magic;
    bool Flight;
    bool Strength;
    bool Energy;
    bool Illusion;
    bool Mind;
    bool Matter;
    bool Speed;
    bool Healer;
    bool Teleportation;

    Character(string n, bool male, bool human, bool humanoid, bool founder, bool avenger, bool eternal,
              bool asgardian, bool guardian, bool space, bool street_level, bool billionaire, bool military,
              bool enhanced, bool super, bool former, bool legacy, bool assassin, bool fighter, bool tech,
              bool weapon, bool magic, bool flight, bool strength, bool energy, bool illusion, bool mind,
              bool matter, bool speed, bool healer, bool teleportation)
        : name(n), Male(male), Human(human), Humanoid(humanoid), Founder(founder), Avenger(avenger),
          Eternal(eternal), Asgardian(asgardian), Guardian(guardian), Space(space), Street_level(street_level),
          Billionare(billionaire), Military(military), Enhanced(enhanced), Super(super), Former(former),
          Legacy(legacy), Assassin(assassin), Fighter(fighter), Tech(tech), Weapon(weapon), Magic(magic),
          Flight(flight), Strength(strength), Energy(energy), Illusion(illusion), Mind(mind), Matter(matter),
          Speed(speed), Healer(healer), Teleportation(teleportation) {}
};

bool askQuestion(string question) {
    char response;
    cout << question << " (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}

int main() {
    vector<Character> characters = {
         Character("Captain America", true, true, true, true, true, false, false, false, false, false, false, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false),
        Character("Winter Soldier", true, true, true, false, true, false, false, false, false, false, false, true, true, false, true, false, true, false, true, false, false, false, true, false, false, false, false, false, false, false),
        Character("Iron Man", true, true, true, true, true, false, false, false, false, false, true, false, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false),
        Character("War Machine", true, true, true, false, true, false, false, false, false, false, false, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false),
        Character("Hulk", true, true, true, true, true, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Thor", true, false, true, true, true, false, true, false, true, false, false, false, false, true, false, false, false, false, false, true, true, true, true, true, false, false, false, true, false, false),
        Character("Loki", true, false, true, false, false, false, true, false, true, false, false, false, false, true, true, false, false, false, false, true, true, true, false, true, true, true, true, false, true, true),
        Character("Black Widow", false, true, true, true, true, false, false, false, false, false, false, true, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Hawkeye (Clint Barton)", true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Sam Wilson", true, true, true, false, true, false, false, false, false, false, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Starlord", true, true, true, false, false, false, false, true, false, false, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Gamora", false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Drax", true, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Rocket Raccoon", true, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Groot", true, false, false, false, false, false, false, true, true, false, false, false, false, true, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Daredevil", true, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, true, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Elektra", false, true, true, false, false, false, false, false, false, true, false, false, true, false, true, false, true, true, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Jessica Jones", false, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Scarlet Witch", false, true, true, false, true, false, false, false, false, false, false, false, false, true, true, false, false, false, false, false, true, false, false, false, false, true, true, false, false, false),
        Character("Quicksilver", true, true, true, false, false, false, false, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false),
        Character("Ant-Man (Scott Lang)", true, true, true, false, true, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, false, false),
        Character("Luke Cage", true, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Iron Fist", true, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, true, false, false, true, false, false, true, false, false, false, false, false, false),
        Character("Punisher", true, true, true, false, false, false, false, false, false, true, false, true, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Spider-Man (Peter Parker)", true, true, true, false, true, false, false, false, false, true, false, false, false, true, false, false, false, false, true, false, false, false, true, false, false, false, false, false, false, false),
        Character("Black Panther (TChalla)", true, true, true, false, true, false, false, false, false, false, false, false, true, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false),
        Character("Doctor Strange", true, true, true, false, true, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, true, false, false, true, false, true, false, false, false, false),
        Character("Cloak", true, true, true, false, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, true),
        Character("Dagger", false, true, true, false, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false),
        Character("Korg", true, false, false, false, false, false, false, false, true, false, false, false, false, true, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false),
        Character("Wasp (Hope Van Dyne)", false, true, true, false, true, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false, true, false, false, false, false, false, false, false, false),
        Character("Wasp (Cassie Lang)", false, true, true, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false, true, false, false, false, false, false, false, false, false),
        Character("Sylvie", false, false, true, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, true, true, false, false, false, false),
        Character("Shang-Chi", true, true, true, false, false, false, false, false, false, true, false, false, false, false, false, false, false, true, false, true, true, false, false, false, false, false, false, false, false, false),
        Character("Deadpool", true, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, true, false),
        Character("Wolverine", true, true, true, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, true, false),
        Character("Sersi", false, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false),
        Character("Ikaris", true, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false),
        Character("Kingo", true, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Sprite", false, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false),
        Character("Phastos", true, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false),
        Character("Makkari", false, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false),
        Character("Druig", true, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false),
        Character("Gilgamesh", true, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false),
        Character("Ajak", false, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false),
        Character("Thena", false, false, true, false, false, true, false, false, true, false, false, false, false, true, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Hawkeye (Kate Bishop)", false, true, true, false, true, false, false, false, false, true, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Yelena Belova", false, true, true, false, false, false, false, false, false, false, false, false, false, false, false, true, false, true, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Red Guardian", true, true, true, false, false, false, false, false, false, false, false, true, true, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("John Walker", true, true, true, false, false, false, false, false, false, false, false, true, true, false, true, true, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Ghost (Ava Starr)", false, true, true, false, false, false, false, false, false, false, false, false, false, true, true, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false),
        Character("Taskmaster (Antonia Dreykov)", false, true, true, false, false, false, false, false, false, false, false, false, true, false, false, false, false, true, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Sentry", true, true, true, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false),
        Character("Moon Knight (Marc Spector)", true, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false),
        Character("Black Panther (Shuri)", false, true, true, false, false, false, false, false, false, false, false, false, true, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, false, false),
        Character("MBaku", true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Echo (Maya Lopez)", false, true, true, false, false, false, false, false, false, true, false, false, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false),
        Character("Ms. Marvel (Kamala Khan)", false, true, true, false, true, false, false, false, false, true, false, false, false, true, false, false, false, false, false, true, true, false, false, false, false, false, true, false, false, false),
        Character("Photon (Monica Rambeau)", false, true, true, false, false, false, false, false, true, false, false, false, false, true, false, false, false, false, false, false, false, true, false, true, false, false, false, false, false, false),
        Character("She-Hulk (Jennifer Walters)", false, true, true, false, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false),
        Character("Mantis", false, false, true, false, false, false, false, true, true, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false),
        Character("Nebula", false, false, true, false, false, false, false, true, true, false, false, false, false, false, true, true, false, false, true, false, false, false, false, false, false, false, false, false, false, false),
        Character("Adam Warlock", true, false, true, false, false, false, false, true, true, false, false, false, false, true, false, false, false, false, false, true, false, true, false, true, false, false, false, false, false, false),
        Character("Yondu", true, false, true, false, false, false, false, true, true, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, false, false, false, false, false, false),
        Character("Captain Marvel (Carol Danvers)", false, true, true, false, true, false, false, false, true, false, false, false, false, true, false, false, false, false, false, true, false, true, true, true, false, false, false, false, false, false)
    };

    vector<Character> remaining = characters;

    bool answer;

answer = askQuestion("Is your character male?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Male != answer;
}), remaining.end());

answer = askQuestion("Is your character human?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Human != answer;
}), remaining.end());

answer = askQuestion("Is your character humanoid?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Humanoid != answer;
}), remaining.end());

answer = askQuestion("Is your character one of the 6 founding members of the Avengers?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Founder != answer;
}), remaining.end());

answer = askQuestion("Is or has your character been an Avenger?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Avenger != answer;
}), remaining.end());

answer = askQuestion("Is your character an Eternal?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Eternal != answer;
}), remaining.end());

answer = askQuestion("Is your character Asgardian?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Asgardian != answer;
}), remaining.end());

answer = askQuestion("Is your character a Guardian of the Galaxy?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Guardian != answer;
}), remaining.end());

answer = askQuestion("Is your character often associated with space?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Space != answer;
}), remaining.end());

answer = askQuestion("Is your character known for being a street-level hero?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Street_level != answer;
}), remaining.end());

answer = askQuestion("Is your character a billionaire?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Billionare != answer;
}), remaining.end());

answer = askQuestion("Is or has your character been part of the US military or government agency?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Military != answer;
}), remaining.end());

answer = askQuestion("Is your character enhanced (beyond what a human can achieve, but not fully super-powered)?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Enhanced != answer;
}), remaining.end());

answer = askQuestion("Does your character possess a full superpower?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Super != answer;
}), remaining.end());

answer = askQuestion("Is your character a former villain or partial antagonist?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Former != answer;
}), remaining.end());

answer = askQuestion("Does your character use the same hero name that another character has before?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Legacy != answer;
}), remaining.end());

answer = askQuestion("Is or has your character been an assassin?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Assassin != answer;
}), remaining.end());

answer = askQuestion("Is your character known for incredible martial arts skills?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Fighter != answer;
}), remaining.end());

answer = askQuestion("Does your character heavily utilize advanced technology in combat?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Tech != answer;
}), remaining.end());

answer = askQuestion("Is your character known for using an iconic weapon that is relativly specific to them?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Weapon != answer;
}), remaining.end());

answer = askQuestion("Does your character often use magic?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Magic != answer;
}), remaining.end());

answer = askQuestion("Can your character fly (naturally or aided by tech or magic)?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Flight != answer;
}), remaining.end());

answer = askQuestion("Does your character have unnatrual strength?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Strength != answer;
}), remaining.end());

answer = askQuestion("Can your character manipulate or generate energy?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Energy != answer;
}), remaining.end());

answer = askQuestion("Does your character use illusions?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Illusion != answer;
}), remaining.end());

answer = askQuestion("Does your character have mind powers (like telepathy or mind control)?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Mind != answer;
}), remaining.end());

answer = askQuestion("Can your character manipulate matter?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Matter != answer;
}), remaining.end());

answer = askQuestion("Does your character have super speed?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Speed != answer;
}), remaining.end());

answer = askQuestion("Can your character heal themselves or others?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Healer != answer;
}), remaining.end());

answer = askQuestion("Can your character teleport themselves or others?");
remaining.erase(remove_if(remaining.begin(), remaining.end(), [answer](Character& c) {
    return c.Teleportation != answer;
}), remaining.end());


    if (remaining.size() == 1) {
        cout << "I think the character you're thinking of is: " << remaining[0].name << "!" << endl;
    } else if (remaining.empty()) {
        cout << "Hmm... I couldn't find anyone who matches that description!" << endl;
    } else {
        cout << "I couldn't narrow it down to one person. Maybe try again!" << endl;
        for (Character& c : remaining) {
            cout << "- " << c.name << endl;
        }
    }

    return 0;
}
