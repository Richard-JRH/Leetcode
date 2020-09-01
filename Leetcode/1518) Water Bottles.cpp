int numWaterBottles(int numBottles, int numExchange)
{
    // Init
    int toDrink = numBottles;
    int drunk = 0;
    int exchange = numExchange;
    int empty = 0;

    // Main loop
    while ( true )
    {
        drunk += toDrink;
        empty += toDrink;
        toDrink = 0;

        // Check end condition
        if (empty < exchange)
            break;

        toDrink = empty / exchange;
        empty -= toDrink * exchange;
    }
 
    return drunk;
}
