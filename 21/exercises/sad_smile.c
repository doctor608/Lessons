#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
        setlocale(LC_ALL, "");

        wchar_t sad_smile = L'\u2639';
        wprintf(L"%lcError: invalid value\n", sad_smile);

        return 0;
}
