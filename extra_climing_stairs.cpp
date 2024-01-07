int climing_stairs(int number)
{
    if(number ==1)return 1;
    if(number ==2)return 2;
    return climing_stairs(number-1)+climing_stairs(number-2);
}