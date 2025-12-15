char* longestCommonPrefix(char** strs, int strsSize) 
{
    if(strsSize == 0) return "";
    char* pre = strs[0];
    for(int i = 0; i < strsSize; i++)
    {
        while(strstr(strs[i], pre) != strs[i])
        {
            pre[strlen(pre)-1] = '\0';
        }
    }
    return pre;
    
}