int main()
{
    char s[] = "Rakib Hasan Bhuiyan : 22201096";
    int i, word;
    word = 1;
    i = 0;
    while (s[i] != 0)
    {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        {
            word++;
        }
        i++;
    }
        printf("The total Number of word : %d",word );
}
