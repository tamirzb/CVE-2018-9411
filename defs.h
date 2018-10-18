#ifndef __DEFS_H__
#define __DEFS_H__


#define CLEARKEY_SYSTEMID (0xF6D8)

// Sample provision string, taken from AOSP's MediaCasTest.java
static const char *provision_str =
    "{                                                   "
    "  \"id\": 21140844,                                 "
    "  \"name\": \"Test Title\",                         "
    "  \"lowercase_organization_name\": \"Android\",     "
    "  \"asset_key\": {                                  "
    "  \"encryption_key\": \"nezAr3CHFrmBR9R8Tedotw==\"  "
    "  },                                                "
    "  \"cas_type\": 1,                                  "
    "  \"track_types\": [ ]                              "
    "}                                                   ";

// Number of remote blocked threads. 5 should ensure that enough threads stacks
// are at the top of the allocated memory so new maps would be allocated above
// them.
#define THREADS_NUM (5)

// A known planned crash address.
#define CRASH_ADDR (0x41414141)

// The default size of a pthread stack, including the guard page. Might change
// if bionic's implementation changes.
#define STACK_SIZE (0xfd000)

// Value for unused registers in the ROP chain.
#define UNUSED_REGISTER (0x12345678)


#endif
