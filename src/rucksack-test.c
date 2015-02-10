/*
 * This file is part of MXE.
 * See index.html for further information.
 */

#include <rucksack.h>

int main(int argc, char * argv[]) {
    struct RuckSackBundle *bundle;
    rucksack_init();
    rucksack_bundle_open(argv[1], &bundle);
    rucksack_bundle_close(bundle);
    rucksack_finish();
    return 0;
}
