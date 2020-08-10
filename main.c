#include <stdint.h>
#include <stdio.h>

int main(void) {
    puts("P3 1920 1080 255");
    uint8_t buf[4 * 1024];
    for (;;) {
        size_t n = fread(buf, 1, sizeof(buf), stdin);
        if (n == 0) {
            break;
        }
        for (size_t i = 0; i < n; i += 4) {
            printf("%d %d %d\n", buf[i + 2], buf[i + 1], buf[i + 0]);
        }
    }
}
