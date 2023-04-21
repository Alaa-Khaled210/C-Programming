int my_reverse_st(char s [], char s_rev [])
{
    short start = 0, end = 0;
    // count the "number " of characters ..i deal with number
    while (s[end] != '\0')
        end++;

    //starting from the last character and fill rev
    while (end > 0)
    {
        s_rev[start] = s[end-1];
        end--;
        start++;
    }

    s_rev[start] = '\0';
    return s_rev ;
}
