#include <stdio.h>


int main()
{
	enum companies {GOOGLE = 1, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum companies first = XEROX;
    enum companies second = GOOGLE;
    enum companies third = EBAY;
    printf("%d\n",first);
    printf("%d\n",second);
    printf("%d\n",third);
}
