#pragma once

/*
	msfvenom -a x86 --platform Windows -p windows/messagebox TEXT="Hello from the shellcode!" TITLE="Shellcode 32bit" -f c
*/
unsigned char messageBox32bit_sc[] =
	"\xd9\xeb\x9b\xd9\x74\x24\xf4\x31\xd2\xb2\x77\x31\xc9\x64\x8b"
	"\x71\x30\x8b\x76\x0c\x8b\x76\x1c\x8b\x46\x08\x8b\x7e\x20\x8b"
	"\x36\x38\x4f\x18\x75\xf3\x59\x01\xd1\xff\xe1\x60\x8b\x6c\x24"
	"\x24\x8b\x45\x3c\x8b\x54\x28\x78\x01\xea\x8b\x4a\x18\x8b\x5a"
	"\x20\x01\xeb\xe3\x34\x49\x8b\x34\x8b\x01\xee\x31\xff\x31\xc0"
	"\xfc\xac\x84\xc0\x74\x07\xc1\xcf\x0d\x01\xc7\xeb\xf4\x3b\x7c"
	"\x24\x28\x75\xe1\x8b\x5a\x24\x01\xeb\x66\x8b\x0c\x4b\x8b\x5a"
	"\x1c\x01\xeb\x8b\x04\x8b\x01\xe8\x89\x44\x24\x1c\x61\xc3\xb2"
	"\x08\x29\xd4\x89\xe5\x89\xc2\x68\x8e\x4e\x0e\xec\x52\xe8\x9f"
	"\xff\xff\xff\x89\x45\x04\xbb\x7e\xd8\xe2\x73\x87\x1c\x24\x52"
	"\xe8\x8e\xff\xff\xff\x89\x45\x08\x68\x6c\x6c\x20\x41\x68\x33"
	"\x32\x2e\x64\x68\x75\x73\x65\x72\x30\xdb\x88\x5c\x24\x0a\x89"
	"\xe6\x56\xff\x55\x04\x89\xc2\x50\xbb\xa8\xa2\x4d\xbc\x87\x1c"
	"\x24\x52\xe8\x5f\xff\xff\xff\x68\x62\x69\x74\x58\x68\x65\x20"
	"\x33\x32\x68\x6c\x63\x6f\x64\x68\x53\x68\x65\x6c\x31\xdb\x88"
	"\x5c\x24\x0f\x89\xe3\x68\x21\x58\x20\x20\x68\x63\x6f\x64\x65"
	"\x68\x68\x65\x6c\x6c\x68\x68\x65\x20\x73\x68\x6f\x6d\x20\x74"
	"\x68\x6f\x20\x66\x72\x68\x48\x65\x6c\x6c\x31\xc9\x88\x4c\x24"
	"\x19\x89\xe1\x31\xd2\x52\x53\x51\x52\xff\xd0\x31\xc0\x50\xff"
	"\x55\x08";

/*
    from: https://www.tophertimzen.com/blog/windowsx64Shellcode/
*/
unsigned char messageBox64bit_sc[] = {
  0x48, 0x83, 0xec, 0x28, 0x48, 0x83, 0xe4, 0xf0, 0x65, 0x4c, 0x8b, 0x24,
  0x25, 0x60, 0x00, 0x00, 0x00, 0x4d, 0x8b, 0x64, 0x24, 0x18, 0x4d, 0x8b,
  0x64, 0x24, 0x20, 0x4d, 0x8b, 0x24, 0x24, 0x4d, 0x8b, 0x7c, 0x24, 0x20,
  0x4d, 0x8b, 0x24, 0x24, 0x4d, 0x8b, 0x64, 0x24, 0x20, 0xba, 0x8e, 0x4e,
  0x0e, 0xec, 0x4c, 0x89, 0xe1, 0xe8, 0x68, 0x00, 0x00, 0x00, 0xeb, 0x34,
  0x59, 0xff, 0xd0, 0xba, 0xa8, 0xa2, 0x4d, 0xbc, 0x48, 0x89, 0xc1, 0xe8,
  0x56, 0x00, 0x00, 0x00, 0x48, 0x89, 0xc3, 0x4d, 0x31, 0xc9, 0xeb, 0x2c,
  0x41, 0x58, 0xeb, 0x3a, 0x5a, 0x48, 0x31, 0xc9, 0xff, 0xd3, 0xba, 0x70,
  0xcd, 0x3f, 0x2d, 0x4c, 0x89, 0xf9, 0xe8, 0x37, 0x00, 0x00, 0x00, 0x48,
  0x31, 0xc9, 0xff, 0xd0, 0xe8, 0xc7, 0xff, 0xff, 0xff, 0x75, 0x73, 0x65,
  0x72, 0x33, 0x32, 0x2e, 0x64, 0x6c, 0x6c, 0x00, 0xe8, 0xcf, 0xff, 0xff,
  0xff, 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x66, 0x75, 0x6e,
  0x21, 0x00, 0xe8, 0xc1, 0xff, 0xff, 0xff, 0x30, 0x78, 0x64, 0x65, 0x61,
  0x64, 0x62, 0x65, 0x65, 0x66, 0x00, 0x49, 0x89, 0xcd, 0x67, 0x41, 0x8b,
  0x45, 0x3c, 0x67, 0x45, 0x8b, 0xb4, 0x05, 0x88, 0x00, 0x00, 0x00, 0x45,
  0x01, 0xee, 0x67, 0x45, 0x8b, 0x56, 0x18, 0x67, 0x41, 0x8b, 0x5e, 0x20,
  0x44, 0x01, 0xeb, 0x67, 0xe3, 0x3f, 0x41, 0xff, 0xca, 0x67, 0x42, 0x8b,
  0x34, 0x93, 0x44, 0x01, 0xee, 0x31, 0xff, 0x31, 0xc0, 0xfc, 0xac, 0x84,
  0xc0, 0x74, 0x07, 0xc1, 0xcf, 0x0d, 0x01, 0xc7, 0xeb, 0xf4, 0x39, 0xd7,
  0x75, 0xdd, 0x67, 0x41, 0x8b, 0x5e, 0x24, 0x44, 0x01, 0xeb, 0x31, 0xc9,
  0x66, 0x67, 0x42, 0x8b, 0x0c, 0x53, 0x67, 0x41, 0x8b, 0x5e, 0x1c, 0x44,
  0x01, 0xeb, 0x67, 0x8b, 0x04, 0x8b, 0x44, 0x01, 0xe8, 0xc3
};