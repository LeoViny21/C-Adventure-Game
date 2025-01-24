#include "NPC.h"

bool NPC::checkPassword(string guessedPassword)
{
    if (password == guessedPassword) {
        return true;
    }
    else
    {
        return false;
    }
}

string NPC::getdescription()
{
    return string();
}

string NPC::getStoryLore()
{
    return string();
}

int NPC::getHintCount()
{
    return hintCount;
}

void NPC::updateHintCount()
{
    hintCount += 1;
}


