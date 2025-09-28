#include "FarmingSim.h"

UFarmingSim::UFarmingSim()
{
    PlayerMoney = 1000; // Starting money
    PlayerInventory.Add("Wheat Seeds", 10);
    PlayerInventory.Add("Carrot Seeds", 5);
}

void UFarmingSim::AddToInventory(FString ItemName, int32 Quantity)
{
    if (PlayerInventory.Contains(ItemName))
    {
        PlayerInventory[ItemName] += Quantity;
    }
    else
    {
        PlayerInventory.Add(ItemName, Quantity);
    }
}

bool UFarmingSim::RemoveFromInventory(FString ItemName, int32 Quantity)
{
    if (PlayerInventory.Contains(ItemName) && PlayerInventory[ItemName] >= Quantity)
    {
        PlayerInventory[ItemName] -= Quantity;
        if (PlayerInventory[ItemName] <= 0)
        {
            PlayerInventory.Remove(ItemName);
        }
        return true;
    }
    return false;
}

void UFarmingSim::AddMoney(int32 Amount)
{
    PlayerMoney += Amount;
}

bool UFarmingSim::SpendMoney(int32 Amount)
{
    if (PlayerMoney >= Amount)
    {
        PlayerMoney -= Amount;
        return true;
    }
    return false;
}
