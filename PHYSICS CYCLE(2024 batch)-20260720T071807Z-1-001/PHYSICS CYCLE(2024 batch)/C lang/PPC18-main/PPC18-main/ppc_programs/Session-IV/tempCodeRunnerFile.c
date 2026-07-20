int nFib(int n)
{
    if(n==1 || n==0)
    return n;
    else 
    return (nFib(n-1)+nFib(n-2));
}