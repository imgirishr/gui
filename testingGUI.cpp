#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

int main() {
    gchar *str = "1min";
    gint num = g_ascii_strtoll(str, NULL, 10);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
