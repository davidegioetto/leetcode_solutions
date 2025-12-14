bool isPalindrome(int x) 
{
    if(x < 0) return false;

    int original = x;
    long reversed = 0;

    while(x != 0)
    {
        int reminder = x % 10;

        reversed = reversed * 10 + reminder;

        x /= 10; 
    }

    if(reversed == original) return 1;
    else return 0;  
}   
