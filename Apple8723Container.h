#include <inttypes.h>

#define LEN_HEADER 0x400

typedef struct {
	char magic[4]; // "8723"
	char version[3]; // "2.0"
	uint8_t format; // plaintext is 0x4, encrypted is 0x3
	uint32_t unknown1;
	uint32_t sizeOfData;
	uint32_t footerSignatureOffset;
	uint32_t footerCertificateOffset;
	uint32_t footerCertificateLength;
	char salt[0x24];
	uint16_t unknown2;
	uint16_t epoch; //sec epoch
	char headerSignature[0x12];
	char padding[0x3AC];
} Apple8723Header;
