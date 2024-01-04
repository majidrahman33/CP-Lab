#include <iostream>
#include<string>
using namespace std;

void Blueprints(string& weapon, int blueprints)
{
    char x;
    cout << "\nblueprints info";	//add info
    cout << "\nYou have " << blueprints << " blueprints in your inventory.";
    if (blueprints == 5)
    {
        cout << "\nDo you wish to merge the blueprints(y/n)? " << endl;
        cin >> x;
        if (x == 'y' || x == 'Y')
        {
            weapon = "Mythical Sword";
            cout << "\nYou have unlocked the Mythical Sword!";
            cout << "\nGo to inventory to equip.";
        }
    }
    else
        cout << "\nYou need " << 5 - blueprints << " more to merge.\n ";
}

void Potion(int& potions)
{
    char x;
    cout << "\npotions info";	//add info
    cout << "\nYou have " << potions << " potions in your inventory.";
    if (potions > 0)
    {
        cout << "\nDo you wish to use a health potion(y/n)? " << endl;
        cin >> x;
        if (x == 'y' || x == 'Y')
        {	//add potion effect
            cout << "\nYou have used a health potion!";
            potions--;
        }
    }
}

void Elixir(int elixir)
{
    cout << "\nuse of elixir";	//add info
    cout << "\nYou have " << elixir << " elixir in your inventory. ";
}

int inventory(string weapon1, string weapon2, string weapon3, string sweapon2, string sweapon3, string weapon4, int blueprints, int elixir, int attackpotion)
{
    int choice;
    cout << "\nInventory:";
    cout << "\n1. " << weapon1;
    cout << "\n2. " << "elixir(" << elixir << ")";
    cout << "\n3. " << "attack potions(" << attackpotion << ")";
    cout << "\n4. " << "blueprints(" << blueprints << ")";
    if (weapon2 == sweapon2)
    {
        cout << "\n5. " << weapon2;
    }
    if (weapon3 == sweapon3)
    {
        cout << "\n6. " << weapon3;
    }
    if (weapon4 == "Mythical Sword")
    {
        cout << "\n7. " << weapon4;
    }
    cout << "\n";
    cin >> choice;
    return choice;
}

static void CharacterInfo(string charactername, string characterclass, int characterlevel, int characterhealth, int characterexperience)
{
    cout << "\nCharacter Name: " << charactername;
    cout << "\nCharacter Class: " << characterclass;
    cout << "\nCharacter Level: " << characterlevel;
    cout << "\nCharacter Health: " << characterhealth;
    cout << "\nCharacter Experience: " << characterexperience;
}

int combat()
{
    int x;
    cout << "\n1. Attack";
    cout << "\n2. Use main skill";
    cout << "\n3. Use secondary skill";
    cout << "\n4. Open Inventory";
    cout << "\n5. Display Character Information";
    cout << "\n6. Show side quests status";
    cout << "\n7. Escape\n";
    cin >> x;
    return x;
}

struct WeaponInfo {
    string info;
    int level;
    int damage;
}Weapons1, Weapons2, Weapons3, Weapons4, mainWeapon;

void Weapon1(int& weapon1_level, int& elixir)
{
    if (weapon1_level == 1)
    {
        if (elixir >= 3)
        {
            weapon1_level += 1;
            elixir -= 3;
            cout << "\nWeapon upgraded";        //increase maxdamage
            cout << "\nYour weapon is now level " << weapon1_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon1_level == 2)
    {
        if (elixir >= 5)
        {
            weapon1_level += 1;
            elixir -= 5;
            cout << "\nWeapon upgraded";
            cout << "\nYour weapon is now level " << weapon1_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon1_level > 2)
    {
        cout << "\nUpgrade failed\nThis weapon has reached Maximum level";
    }
}

void Weapon2(int& weapon2_level, int& elixir)
{
    if (weapon2_level == 1)
    {
        if (elixir >= 3)
        {
            weapon2_level += 1;
            elixir -= 3;
            cout << "\nWeapon upgraded";        //increase maxdamage
            cout << "\nYour weapon is now level " << weapon2_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon2_level == 2)
    {
        if (elixir >= 5)
        {
            weapon2_level += 1;
            elixir -= 5;
            cout << "\nWeapon upgraded";
            cout << "\nYour weapon is now level " << weapon2_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon2_level > 2)
    {
        cout << "\nUpgrade failed\nThis weapon has reached Maximum level";
    }
}

void Weapon3(int& weapon3_level, int& elixir)
{
    if (weapon3_level == 1)
    {
        if (elixir >= 3)
        {
            weapon3_level += 1;
            elixir -= 3;
            cout << "\nWeapon upgraded";        //increase maxdamage
            cout << "\nYour weapon is now level " << weapon3_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon3_level == 2)
    {
        if (elixir >= 5)
        {
            weapon3_level += 1;
            elixir -= 5;
            cout << "\nWeapon upgraded";
            cout << "\nYour weapon is now level " << weapon3_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon3_level > 2)
    {
        cout << "\nUpgrade failed\nThis weapon has reached Maximum level";
    }
}

void Weapon4(int& weapon4_level, int& elixir)
{
    if (weapon4_level == 1)
    {
        if (elixir >= 3)
        {
            weapon4_level += 1;
            elixir -= 3;
            cout << "\nWeapon upgraded";    //increase maxdamage
            cout << "\nYour weapon is now level " << weapon4_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon4_level == 2)
    {
        if (elixir >= 5)
        {
            weapon4_level += 1;
            elixir -= 5;
            cout << "\nWeapon upgraded";
            cout << "\nYour weapon is now level " << weapon4_level;
        }
        else
            cout << "\nUpgrade failed\nYou have insufficient elixir";
    }
    else if (weapon4_level > 2)
    {
        cout << "\nUpgrade failed\nThis weapon has reached Maximum level";
    }
}

struct character {
    string sideweapon1;
    string sideweapon2;
    string sideweapon3;
    string sideskill1;
    string sideskill2;
};

struct Warrior : character {
    Warrior() {
        sideweapon1 = "Sword";
        sideweapon2 = "Spear";
        sideweapon3 = "Moonlight Blade";
        sideskill1 = "Thunder Strike";
        sideskill2 = "Pheonix Dive";
    }
};

struct Mage : character {
    Mage() {
        sideweapon1 = "Staff";
        sideweapon2 = "Scythe";
        sideweapon3 = "Wand";
        sideskill1 = "Frozen Fury";
        sideskill2 = "Firebolt";
    }
};

struct Rogue : character {
    Rogue() {
        sideweapon1 = "Bow";
        sideweapon2 = "Dagger";
        sideweapon3 = "Axe";
        sideskill1 = "Venomous Slash";
        sideskill2 = "Backstab";
    }
};

string Difficulty(string& a, int& w1damage, int& w2damage, int& w3damage, int& w4damage, int& s1damage, int& s2damage)
{
    int x;
    cout << "Choose a difficulty level: ";      //fix here
    cout << "\n1. Easy";
    cout << "\n2. Normal";
    cout << "\n3. Hard\n";
    cin >> x;
    if (x == 1)
    {
        a = "Easy";
        w1damage = 10;
        w2damage = 13;
        w3damage = 16;
        w4damage = 20;
        s1damage = 32;
        s2damage = 26;
    }
    if (x == 2)
    {
        a = "Normal";
        w1damage = 9;
        w2damage = 11;
        w3damage = 13;
        w4damage = 16;
        s1damage = 30;
        s2damage = 24;
    }
    if (x == 3)
    {
        a = "Hard";
        w1damage = 7;
        w2damage = 10;
        w3damage = 12;
        w4damage = 14;
        s1damage = 28;
        s2damage = 22;
    }
    return a;
}

string InputClass(string& weapon1, string& weapon2, string& weapon3, string& skill1, string& skill2, string& story, string weap1_info, string weap2_info, string weap3_info)
{
    int x;
    string player_class;
    do {
        cout << "\nPick a class for your Character\n";      //fix here
        cout << "1. Warrior\n";
        cout << "2. Mage\n";
        cout << "3. Rogue\n";
        cin >> x;
        if (x == 1)
        {
            Warrior obj;
            player_class = "Warrior";
            weapon1 = obj.sideweapon1;
            weapon2 = obj.sideweapon2;
            weapon3 = obj.sideweapon3;
            skill1 = obj.sideskill1;
            skill2 = obj.sideskill2;
            weap1_info = "A timeless symbol of power and precision";
            weap2_info = "Mind Shatter - Unleash a psychic blast directly on the enemy";
            weap3_info = "Moonlight Blade - A powerfull strike that releases a crescent wave of energy on the enemy";
            story = "\n\n Warrior - The Battle-Hardened Soldier:\n\tWarrior's childhood resonated with the echoes of clashing swords and the camaraderie of soldiers.Born into a family with a deep - rooted history of serving Eldoria's army, Warrior's earliest memories revolved around the training grounds, where his father, a respected general, instilled in him values of honour and duty.Tragedy struck when a brutal war claimed the lives of his family, leaving him as the lone survivor.Overwhelmed by grief, Warrior imposed self exile, distancing himself from the kingdom he was destined to protect.Arion's prophecy shattered Warrior's seclusion, beckoning him back to a realm in desperate need. Fueled by the scars of his past, Warrior confronted the shadows haunting him, using his seasoned combat expertise to guide the group of heroes through the trials that awaited them.";

        }
        else if (x == 2)
        {
            Mage obj;
            player_class = "Mage";
            weapon1 = obj.sideweapon1;
            weapon2 = obj.sideweapon2;
            weapon3 = obj.sideweapon3;
            skill1 = obj.sideskill1;
            skill2 = obj.sideskill2;
            weap1_info = "A timeless symbol of power and precision";
            weap2_info = "Shadowflame - Envelops the scepter in dark flames, causing additional burn damage over time to struck enemies.";
            weap3_info = "Ethereal Strike - Unleash a devastating bolt of lightning from the wand, striking enemies with electrifying force and potential area damage.";
            story = "\n\n Mage - The Powerful Sorceress:\n\tMage's childhood unfolded in the heart of Eldoria, where her extraordinary magical abilities set her apart from peers.Born into a family of farmers, Mage's early years showcased inadvertent displays of magical prowess, evoking both wonder and fear among local villagers.Despite her warm hearted nature, prejudice and isolation shadowed her due to the unpredictable nature of her powers.Childhood dreams painted visions of a world where magic could be a force for good.As Mage matured, destiny beckoned in the form of Arion's prophecy.The wise sage recognized her potential as a powerful sorceress, inviting her to join Eldoria's chosen heroes. Thrust into a journey beyond imagination, Mage not only mastered her magical abilities but also became a symbol of change, challenging misconceptions surrounding magic in Eldoria.Through struggles and triumphs, she evolved from a misunderstood child into a beacon of hope for a kingdom in need.";
        }
        else if (x == 3)
        {
            Rogue obj;
            player_class = "Rogue";
            weapon1 = obj.sideweapon1;
            weapon2 = obj.sideweapon2;
            weapon3 = obj.sideweapon3;
            skill1 = obj.sideskill1;
            skill2 = obj.sideskill2;
            weap1_info = "A timeless symbol of power and precision";
            weap2_info = "Nether Fang - Use for hidden attacks";
            weap3_info = "Rending Blow - Inflicts a deep wound on the target, causing them to bleed and take damage over time.";
            story = "\n\nRogue - The Charismatic Crossbow Warrior:\n\tRogue's childhood wove a tapestry of shadowy alleyways and hidden corners within Eldoria's bustling city. Abandoned as a child, he found a makeshift family among skilled thieves and rogues.The city's underbelly became his playground, and Rogue swiftly honed a talent for charming his way out of trouble.Despite the tough exterior cultivated by the streets, he held a deep loyalty to those who took him in.Navigating the complexities of an unconventional childhood, Rogue's roguish charm and resourcefulness emerged as his greatest assets.Whispers in the city spoke of his uncanny ability to elude those seeking to apprehend him.Arion's call for heroes disrupted Rogue's routine of thievery, plunging him into a quest that not only tested his rogue skills but also challenged his allegiance to newfound companions.";
        }
        else
            cout << "Invalid choice\nTry again\n\n";
    } while (x != 1 && x != 2 && x != 3);
    return player_class;
}

string InputName()
{
    string name;
    cout << "\nEnter a name for your character: ";
    getline(cin, name);
    return name;
}

void introduction(string& name, string& Class, string& difficulty, string& weapon1, string& weapon2, string& weapon3, string& skill1, string& skill2, string& story, int& w1dam, int& w2dam, int& w3dam, int& w4dam, int& s1dam, int& s2dam)
{
    cout << "\n\"Eldoria's Heroes: Prophecy Fulfilled\"" << endl;
    cout << "\n\n\tIn Eldoria, chaos erupts when Queen Elara vanishes, leaving the kingdom exposed. The wise sage Arion pinpoints three destined heroes : Warrior, a battle - hardened soldier, Mage, a powerful sorceress, and Charismatic Rogue.";
    cout << "\n\t Guided by Arion, the heroes set out to unravel the mystery behind Elara's disappearance. Along the way, they encounter mythical creatures, make choices that shape the story, and confront the malevolent sorcerer Malgrim, who aims to exploit the kingdom's vulnerability.";
    name = InputName();
    Class = InputClass(weapon1, weapon2, weapon3, skill1, skill2, story, wep1, wep2, wep3);
    difficulty = Difficulty(difficulty, w1dam, w2dam, w3dam, w4dam, s1dam, s2dam);
}

int main()
{
    string charactername;
    string characterclass;
    int characterlevel = 1;
    int characterhealth = 200;
    int characterexperience = 0;
    string difficultylevel;

    string story1;

    string mainweapon;
    string sampleweapon1;
    string sampleweapon2;
    string sampleweapon3;
    string weapon1;
    string weapon2;
    string weapon3;
    string weapon4;

    Weapons1.info;
    Weapons1.level = 1;
    Weapons1.damage;
    Weapons2.info;
    Weapons2.level = 1;
    Weapons2.damage;
    Weapons3.info;
    Weapons3.level = 1;
    Weapons3.damage;
    Weapons4.info;
    Weapons4.level = 1;
    Weapons4.damage;
    mainWeapon.info;
    mainWeapon.level = 1;
    mainWeapon.damage;

    string skill1;
    string skill2;
    int skill1use;
    int skill2use;
    int skill1damage;
    int skill2damage;

    int blueprints = 0;
    int elixir = 0;
    int attackpotion = 0;

    string sidequest1;
    string sidequest2;

    introduction(charactername, characterclass, difficultylevel, sampleweapon1, sampleweapon2, sampleweapon3, skill1, skill2, story1, weapon1_damage, weapon2_damage, weapon3_damage, weapon4_damage, skill1damage, skill2damage);

    weapon1 = sampleweapon1;
    cout << charactername << " chooses the " << weapon1 << " becoming a " << characterclass << " of the Eldorian empire." << endl;
    cout << story1;

    mainweapon = weapon1;
    cout << mainweapon;

    int x;
jump:
    x = combat();

    if (x == 1) //Attack
    {
    }
    else if (x == 2)
    {
        char y;
        if (skill1 == "Thunder Strike")
        {
            cout << "\nMain Skill: Thunder Strike";
            cout << "\nCalls down a bolt of lightning to strike a single target.";
        }
        else if (skill1 == "Frozen Fury")
        {
            cout << "\nMain Skill: Frozen Fury";
            cout << "\nSends a chilling wave that freezes and damages enemies in its path.";
        }
        else if (skill1 == "Venomous Slash")
        {
            cout << "\nMain Skill: Venomous Slash";
            cout << "\nA slashing attack that leaves a venomous wound on the target.";
        }
        cout << "\nIt can only be used once throughout the level.";
        cout << "\nAre you sure you wish to use it(y/n)? ";
        cin >> y;
        if (y == 'y' || y == 'Y')
        {
            if (skill1use == 0)
            {
                //add attack
            }
            skill1use++;
        }
        goto jump;
    }
    else if (x == 3)
    {
        char y;
        if (skill2 == "Pheonix Dive")
        {
            cout << "\nSecondary Skill: Pheonix Dive";
            cout << "\nJumps towards an enemy and delivers a powerful downward strike.";
        }
        else if (skill2 == "Firebolt")
        {
            cout << "\nSecondary Skill: Firebolt";
            cout << "\nHurls a bolt of fire towards the target.";
        }
        else if (skill2 == "Backstab")
        {
            cout << "\nSecondary Skill: Backstab";
            cout << "\nA quick and powerful attack from behind the enemy.";
        }
        cout << "\nIt can be used several times throughout the level after a cooldown.";
        cout << "\nCooldown: " << skill2use << "/3";

        cout << "\nAre you sure you wish to use it(y/n)? ";
        cin >> y;
        if (y == 'y' || y == 'Y')
        {
            if (skill2use >= 3)
            {
                //add attack
            }
            skill2use = 0;
        }
        goto jump;
    }
    else if (x == 4)
    {
        int y;
        y = inventory(weapon1, weapon2, weapon3, weapon4, sampleweapon2, sampleweapon2, blueprints, elixir, attackpotion);

        if (y == 1)
        {
            int z;
            cout << "\n" << weapon1 << ": ";
            cout << "\n\t" << weapon1_info;
            cout << "\nLevel: " << weapon1_level;
            if (weapon1_level == 1)
                cout << "(3 elixir needed to upgrade)";
            if (weapon1_level == 2)
                cout << "(5 elixir needed to upgrade)";
            cout << "\nDamage: " << weapon1_damage;
            cout << "\n1. Upgrade weapon";
            cout << "\n2. Select weapon";
            cout << "\n3. Return";
            cin >> z;
            if (z == 1)
            {
                Weapon1(weapon1_level, elixir);
                goto jump;
            }
            else if (z == 2)
            {
                if (mainweapon != weapon1)
                    mainweapon = weapon1;
                else
                    cout << "\nweapon already selected";              //fill here
            }
            else
                goto jump;
        }
        if (y == 2)
        {
            Elixir(elixir);
        }
        if (y == 3)
        {
            Potion(attackpotion);
            goto jump;
        }
        if (y == 4)
        {
            Blueprints(weapon4, blueprints);
            goto jump;
        }
        if (y == 5)
        {
            int z;
            cout << "\n" << weapon2 << ": ";
            cout << "\n\t" << weapon2_info;
            cout << "\nLevel: " << weapon2_level;
            if (weapon2_level == 1)
                cout << "(3 elixir needed to upgrade)";
            if (weapon2_level == 2)
                cout << "(5 elixir needed to upgrade)";
            cout << "\nDamage: " << weapon2_damage;
            cout << "\n1. Upgrade weapon";
            cout << "\n2. Select weapon";
            cout << "\n3. Return";
            cin >> z;
            if (z == 1)
            {
                Weapon2(weapon1_level, elixir);
                goto jump;
            }
            else if (z == 2)
            {
                if (mainweapon != weapon2)
                    mainweapon = weapon2;
                else
                    cout << "\nweapon already selected";                      //fill here
            }
            else
                goto jump;
        }
        if (y == 6)
        {
            int z;
            cout << "\n" << weapon3 << ": ";
            cout << "\n\t" << weapon3_info;
            cout << "\nLevel: " << weapon3_level;
            if (weapon3_level == 1)
                cout << "(3 elixir needed to upgrade)";
            if (weapon3_level == 2)
                cout << "(5 elixir needed to upgrade)";
            cout << "\nDamage: " << weapon3_damage;
            cout << "\n1. Upgrade weapon";
            cout << "\n2. Select weapon";
            cout << "\n3. Return";
            cin >> z;
            if (z == 1)
            {
                Weapon3(weapon1_level, elixir);
                goto jump;
            }
            else if (z == 2)
            {
                if (mainweapon != weapon3)
                    mainweapon = weapon3;
                else
                    cout << "\nweapon already selected";                 //fill here
            }
            else
                goto jump;
        }
        if (y == 7)
        {
            int z;
            cout << "\n" << weapon4 << ": ";
            cout << "\n\t" << weapon4_info;
            cout << "\nLevel: " << weapon4_level;
            if (weapon4_level == 1)
                cout << "(3 elixir needed to upgrade)";
            if (weapon4_level == 2)
                cout << "(5 elixir needed to upgrade)";
            cout << "\nDamage: " << weapon4_damage;
            cout << "\n1. Upgrade weapon";
            cout << "\n2. Equip weapon";
            cout << "\n3. Return";
            cin >> z;
            if (z == 1)
            {
                Weapon4(weapon1_level, elixir);
                goto jump;
            }
            else if (z == 2)
            {
                if (mainweapon != weapon4)
                {
                    mainweapon = weapon4;
                    cout << weapon4 << " equiped";
                }
                else
                    cout << "\nweapon already selected";               //fill here
            }
            else
                goto jump;
        }
    }
    else if (x == 5)
    {
        CharacterInfo(charactername, characterclass, characterlevel, characterhealth, characterexperience);
        cout << endl;
        goto jump;
    }
    else if (x == 6)
    {
        cout << sidequest1;
        cout << sidequest2;
    }
    else if (x == 7)    //Escape   
        exit(0); //change this
    else
    {
        cout << "\nInvalid Choice.";
        cout << "\nTry again.\n";
        goto jump;
    }

    return 0;
}