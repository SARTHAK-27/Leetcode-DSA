bool isalphanumeric(char c)
{
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

int Solution::isPalindrome(string A)
{
    int l = 0;
    while (A[l] != '\0')
    {
        l++;
    }
    int i = 0, j = l - 1;
    while (i <= j)
    {
        if (!isalphanumeric(A[i]))
        {
            i++;
            continue;
        }
        if (!isalphanumeric(A[j]))
        {
            j--;
            continue;
        }

        if (A[i] != A[j] && abs(A[i] - A[j]) != 32)
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
