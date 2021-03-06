/* Created from wolfssl-examples test certificate+keys, ECC/RSA. 28/08/2019 */

#ifdef MODULE_WOLFCRYPT_ECC
const unsigned char server_cert[] = {
  0x30, 0x82, 0x03, 0x50, 0x30, 0x82, 0x02, 0xf5, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x02, 0x10, 0x00, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48,
  0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x81, 0x97, 0x31, 0x0b, 0x30, 0x09,
  0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30,
  0x11, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x0a, 0x57, 0x61, 0x73, 0x68,
  0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
  0x55, 0x04, 0x07, 0x0c, 0x07, 0x53, 0x65, 0x61, 0x74, 0x74, 0x6c, 0x65,
  0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x07, 0x77,
  0x6f, 0x6c, 0x66, 0x53, 0x53, 0x4c, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03,
  0x55, 0x04, 0x0b, 0x0c, 0x0b, 0x44, 0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70,
  0x6d, 0x65, 0x6e, 0x74, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04,
  0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73,
  0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09,
  0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69,
  0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e,
  0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x37, 0x31, 0x30, 0x32,
  0x30, 0x31, 0x38, 0x31, 0x39, 0x30, 0x36, 0x5a, 0x17, 0x0d, 0x32, 0x37,
  0x31, 0x30, 0x31, 0x38, 0x31, 0x38, 0x31, 0x39, 0x30, 0x36, 0x5a, 0x30,
  0x81, 0x8f, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
  0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
  0x0c, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e,
  0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x53,
  0x65, 0x61, 0x74, 0x74, 0x6c, 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
  0x55, 0x04, 0x0a, 0x0c, 0x07, 0x45, 0x6c, 0x69, 0x70, 0x74, 0x69, 0x63,
  0x31, 0x0c, 0x30, 0x0a, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x03, 0x45,
  0x43, 0x43, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
  0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c,
  0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86,
  0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66,
  0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f,
  0x6d, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d,
  0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07,
  0x03, 0x42, 0x00, 0x04, 0xbb, 0x33, 0xac, 0x4c, 0x27, 0x50, 0x4a, 0xc6,
  0x4a, 0xa5, 0x04, 0xc3, 0x3c, 0xde, 0x9f, 0x36, 0xdb, 0x72, 0x2d, 0xce,
  0x94, 0xea, 0x2b, 0xfa, 0xcb, 0x20, 0x09, 0x39, 0x2c, 0x16, 0xe8, 0x61,
  0x02, 0xe9, 0xaf, 0x4d, 0xd3, 0x02, 0x93, 0x9a, 0x31, 0x5b, 0x97, 0x92,
  0x21, 0x7f, 0xf0, 0xcf, 0x18, 0xda, 0x91, 0x11, 0x02, 0x34, 0x86, 0xe8,
  0x20, 0x58, 0x33, 0x0b, 0x80, 0x34, 0x89, 0xd8, 0xa3, 0x82, 0x01, 0x35,
  0x30, 0x82, 0x01, 0x31, 0x30, 0x09, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04,
  0x02, 0x30, 0x00, 0x30, 0x11, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x86,
  0xf8, 0x42, 0x01, 0x01, 0x04, 0x04, 0x03, 0x02, 0x06, 0x40, 0x30, 0x1d,
  0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x5d, 0x5d, 0x26,
  0xef, 0xac, 0x7e, 0x36, 0xf9, 0x9b, 0x76, 0x15, 0x2b, 0x4a, 0x25, 0x02,
  0x23, 0xef, 0xb2, 0x89, 0x30, 0x30, 0x81, 0xcc, 0x06, 0x03, 0x55, 0x1d,
  0x23, 0x04, 0x81, 0xc4, 0x30, 0x81, 0xc1, 0x80, 0x14, 0x56, 0x8e, 0x9a,
  0xc3, 0xf0, 0x42, 0xde, 0x18, 0xb9, 0x45, 0x55, 0x6e, 0xf9, 0x93, 0xcf,
  0xea, 0xc3, 0xf3, 0xa5, 0x21, 0xa1, 0x81, 0x9d, 0xa4, 0x81, 0x9a, 0x30,
  0x81, 0x97, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
  0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x08,
  0x0c, 0x0a, 0x57, 0x61, 0x73, 0x68, 0x69, 0x6e, 0x67, 0x74, 0x6f, 0x6e,
  0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x53,
  0x65, 0x61, 0x74, 0x74, 0x6c, 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
  0x55, 0x04, 0x0a, 0x0c, 0x07, 0x77, 0x6f, 0x6c, 0x66, 0x53, 0x53, 0x4c,
  0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x0b, 0x44,
  0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70, 0x6d, 0x65, 0x6e, 0x74, 0x31, 0x18,
  0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77,
  0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d,
  0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
  0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f,
  0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x82, 0x09, 0x00,
  0x97, 0xb4, 0xbd, 0x16, 0x78, 0xf8, 0x47, 0xf2, 0x30, 0x0e, 0x06, 0x03,
  0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02, 0x03, 0xa8,
  0x30, 0x13, 0x06, 0x03, 0x55, 0x1d, 0x25, 0x04, 0x0c, 0x30, 0x0a, 0x06,
  0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x01, 0x30, 0x0a, 0x06,
  0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x49, 0x00,
  0x30, 0x46, 0x02, 0x21, 0x00, 0xbe, 0xb8, 0x58, 0xf0, 0xe4, 0x15, 0x01,
  0x1f, 0xdf, 0x70, 0x54, 0x73, 0x4a, 0x6c, 0x40, 0x1f, 0x77, 0xa8, 0xb4,
  0xeb, 0x52, 0x1e, 0xbf, 0xf5, 0x0d, 0xb1, 0x33, 0xca, 0x6a, 0xc4, 0x76,
  0xb9, 0x02, 0x21, 0x00, 0x97, 0x08, 0xde, 0x2c, 0x28, 0xc1, 0x45, 0x71,
  0xb6, 0x2c, 0x54, 0x87, 0x98, 0x63, 0x76, 0xa8, 0x21, 0x34, 0x90, 0xa8,
  0xf7, 0x9e, 0x3f, 0xfc, 0x02, 0xb0, 0xe7, 0xd3, 0x09, 0x31, 0x27, 0xe4
};
unsigned int server_cert_len = 852;
const unsigned char server_key[] = {
  0x30, 0x77, 0x02, 0x01, 0x01, 0x04, 0x20, 0x45, 0xb6, 0x69, 0x02, 0x73,
  0x9c, 0x6c, 0x85, 0xa1, 0x38, 0x5b, 0x72, 0xe8, 0xe8, 0xc7, 0xac, 0xc4,
  0x03, 0x8d, 0x53, 0x35, 0x04, 0xfa, 0x6c, 0x28, 0xdc, 0x34, 0x8d, 0xe1,
  0xa8, 0x09, 0x8c, 0xa0, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
  0x03, 0x01, 0x07, 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04, 0xbb, 0x33, 0xac,
  0x4c, 0x27, 0x50, 0x4a, 0xc6, 0x4a, 0xa5, 0x04, 0xc3, 0x3c, 0xde, 0x9f,
  0x36, 0xdb, 0x72, 0x2d, 0xce, 0x94, 0xea, 0x2b, 0xfa, 0xcb, 0x20, 0x09,
  0x39, 0x2c, 0x16, 0xe8, 0x61, 0x02, 0xe9, 0xaf, 0x4d, 0xd3, 0x02, 0x93,
  0x9a, 0x31, 0x5b, 0x97, 0x92, 0x21, 0x7f, 0xf0, 0xcf, 0x18, 0xda, 0x91,
  0x11, 0x02, 0x34, 0x86, 0xe8, 0x20, 0x58, 0x33, 0x0b, 0x80, 0x34, 0x89,
  0xd8
};
unsigned int server_key_len = 121;

#endif

#ifdef MODULE_WOLFCRYPT_RSA
const unsigned char server_cert[] = {
  0x30, 0x82, 0x04, 0x9e, 0x30, 0x82, 0x03, 0x86, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x01, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x81, 0x94, 0x31, 0x0b,
  0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31,
  0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f,
  0x6e, 0x74, 0x61, 0x6e, 0x61, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55,
  0x04, 0x07, 0x0c, 0x07, 0x42, 0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31,
  0x11, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x08, 0x53, 0x61,
  0x77, 0x74, 0x6f, 0x6f, 0x74, 0x68, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03,
  0x55, 0x04, 0x0b, 0x0c, 0x0a, 0x43, 0x6f, 0x6e, 0x73, 0x75, 0x6c, 0x74,
  0x69, 0x6e, 0x67, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03,
  0x0c, 0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73,
  0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e,
  0x66, 0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63,
  0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x38, 0x30, 0x34, 0x31, 0x33,
  0x31, 0x35, 0x32, 0x33, 0x31, 0x30, 0x5a, 0x17, 0x0d, 0x32, 0x31, 0x30,
  0x31, 0x30, 0x37, 0x31, 0x35, 0x32, 0x33, 0x31, 0x30, 0x5a, 0x30, 0x81,
  0x90, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
  0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c,
  0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e, 0x61, 0x31, 0x10, 0x30, 0x0e,
  0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x42, 0x6f, 0x7a, 0x65, 0x6d,
  0x61, 0x6e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c,
  0x07, 0x77, 0x6f, 0x6c, 0x66, 0x53, 0x53, 0x4c, 0x31, 0x10, 0x30, 0x0e,
  0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x07, 0x53, 0x75, 0x70, 0x70, 0x6f,
  0x72, 0x74, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
  0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c,
  0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86,
  0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66,
  0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f,
  0x6d, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
  0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f,
  0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xc0, 0x95,
  0x08, 0xe1, 0x57, 0x41, 0xf2, 0x71, 0x6d, 0xb7, 0xd2, 0x45, 0x41, 0x27,
  0x01, 0x65, 0xc6, 0x45, 0xae, 0xf2, 0xbc, 0x24, 0x30, 0xb8, 0x95, 0xce,
  0x2f, 0x4e, 0xd6, 0xf6, 0x1c, 0x88, 0xbc, 0x7c, 0x9f, 0xfb, 0xa8, 0x67,
  0x7f, 0xfe, 0x5c, 0x9c, 0x51, 0x75, 0xf7, 0x8a, 0xca, 0x07, 0xe7, 0x35,
  0x2f, 0x8f, 0xe1, 0xbd, 0x7b, 0xc0, 0x2f, 0x7c, 0xab, 0x64, 0xa8, 0x17,
  0xfc, 0xca, 0x5d, 0x7b, 0xba, 0xe0, 0x21, 0xe5, 0x72, 0x2e, 0x6f, 0x2e,
  0x86, 0xd8, 0x95, 0x73, 0xda, 0xac, 0x1b, 0x53, 0xb9, 0x5f, 0x3f, 0xd7,
  0x19, 0x0d, 0x25, 0x4f, 0xe1, 0x63, 0x63, 0x51, 0x8b, 0x0b, 0x64, 0x3f,
  0xad, 0x43, 0xb8, 0xa5, 0x1c, 0x5c, 0x34, 0xb3, 0xae, 0x00, 0xa0, 0x63,
  0xc5, 0xf6, 0x7f, 0x0b, 0x59, 0x68, 0x78, 0x73, 0xa6, 0x8c, 0x18, 0xa9,
  0x02, 0x6d, 0xaf, 0xc3, 0x19, 0x01, 0x2e, 0xb8, 0x10, 0xe3, 0xc6, 0xcc,
  0x40, 0xb4, 0x69, 0xa3, 0x46, 0x33, 0x69, 0x87, 0x6e, 0xc4, 0xbb, 0x17,
  0xa6, 0xf3, 0xe8, 0xdd, 0xad, 0x73, 0xbc, 0x7b, 0x2f, 0x21, 0xb5, 0xfd,
  0x66, 0x51, 0x0c, 0xbd, 0x54, 0xb3, 0xe1, 0x6d, 0x5f, 0x1c, 0xbc, 0x23,
  0x73, 0xd1, 0x09, 0x03, 0x89, 0x14, 0xd2, 0x10, 0xb9, 0x64, 0xc3, 0x2a,
  0xd0, 0xa1, 0x96, 0x4a, 0xbc, 0xe1, 0xd4, 0x1a, 0x5b, 0xc7, 0xa0, 0xc0,
  0xc1, 0x63, 0x78, 0x0f, 0x44, 0x37, 0x30, 0x32, 0x96, 0x80, 0x32, 0x23,
  0x95, 0xa1, 0x77, 0xba, 0x13, 0xd2, 0x97, 0x73, 0xe2, 0x5d, 0x25, 0xc9,
  0x6a, 0x0d, 0xc3, 0x39, 0x60, 0xa4, 0xb4, 0xb0, 0x69, 0x42, 0x42, 0x09,
  0xe9, 0xd8, 0x08, 0xbc, 0x33, 0x20, 0xb3, 0x58, 0x22, 0xa7, 0xaa, 0xeb,
  0xc4, 0xe1, 0xe6, 0x61, 0x83, 0xc5, 0xd2, 0x96, 0xdf, 0xd9, 0xd0, 0x4f,
  0xad, 0xd7, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x81, 0xfc, 0x30, 0x81,
  0xf9, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14,
  0xb3, 0x11, 0x32, 0xc9, 0x92, 0x98, 0x84, 0xe2, 0xc9, 0xf8, 0xd0, 0x3b,
  0x6e, 0x03, 0x42, 0xca, 0x1f, 0x0e, 0x8e, 0x3c, 0x30, 0x81, 0xc9, 0x06,
  0x03, 0x55, 0x1d, 0x23, 0x04, 0x81, 0xc1, 0x30, 0x81, 0xbe, 0x80, 0x14,
  0x27, 0x8e, 0x67, 0x11, 0x74, 0xc3, 0x26, 0x1d, 0x3f, 0xed, 0x33, 0x63,
  0xb3, 0xa4, 0xd8, 0x1d, 0x30, 0xe5, 0xe8, 0xd5, 0xa1, 0x81, 0x9a, 0xa4,
  0x81, 0x97, 0x30, 0x81, 0x94, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55,
  0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
  0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e, 0x61,
  0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x42,
  0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x11, 0x30, 0x0f, 0x06, 0x03,
  0x55, 0x04, 0x0a, 0x0c, 0x08, 0x53, 0x61, 0x77, 0x74, 0x6f, 0x6f, 0x74,
  0x68, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c, 0x0a,
  0x43, 0x6f, 0x6e, 0x73, 0x75, 0x6c, 0x74, 0x69, 0x6e, 0x67, 0x31, 0x18,
  0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77,
  0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d,
  0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
  0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f,
  0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x82, 0x09, 0x00,
  0x86, 0xff, 0xf5, 0x8e, 0x10, 0xde, 0xb8, 0xfb, 0x30, 0x0c, 0x06, 0x03,
  0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0xb4, 0x54, 0x60, 0xad, 0xa0, 0x03,
  0x32, 0xde, 0x02, 0x7f, 0x21, 0x4a, 0x81, 0xc6, 0xed, 0xcd, 0xcd, 0xd8,
  0x12, 0x8a, 0xc0, 0xba, 0x82, 0x5b, 0x75, 0xad, 0x54, 0xe3, 0x7c, 0x80,
  0x6a, 0xac, 0x2e, 0x6c, 0x20, 0x4e, 0xbe, 0x4d, 0x82, 0xa7, 0x47, 0x13,
  0x5c, 0xf4, 0xc6, 0x6a, 0x2b, 0x10, 0x99, 0x58, 0xde, 0xab, 0x6b, 0x7c,
  0x22, 0x05, 0xc1, 0x83, 0x9d, 0xcb, 0xff, 0x3c, 0xe4, 0x2d, 0x57, 0x6a,
  0xa6, 0x96, 0xdf, 0xd3, 0xc1, 0x68, 0xe3, 0xd2, 0xc6, 0x83, 0x4b, 0x97,
  0xe2, 0xc6, 0x32, 0x0e, 0xbe, 0xc4, 0x03, 0xb9, 0x07, 0x8a, 0x5b, 0xb8,
  0x84, 0xba, 0xc5, 0x39, 0x3f, 0x1c, 0x58, 0xa7, 0x55, 0xd7, 0xf0, 0x9b,
  0xe8, 0xd2, 0x45, 0xb9, 0xe3, 0x83, 0x2e, 0xee, 0xb6, 0x71, 0x56, 0xb9,
  0x3a, 0xee, 0x3f, 0x27, 0xd8, 0x77, 0xe8, 0xfb, 0x44, 0x48, 0x65, 0x27,
  0x47, 0x4c, 0xfb, 0xfe, 0x72, 0xc3, 0xac, 0x05, 0x7b, 0x1d, 0xcb, 0xeb,
  0x5e, 0x65, 0x9a, 0xab, 0x02, 0xe4, 0x88, 0x5b, 0x3b, 0x8b, 0x0b, 0xc7,
  0xcc, 0xa9, 0xa6, 0x8b, 0xe1, 0x87, 0xb0, 0x19, 0x1a, 0x0c, 0x28, 0x58,
  0x6f, 0x99, 0x52, 0x7e, 0xed, 0xb0, 0x3a, 0x68, 0x3b, 0x8c, 0x0a, 0x08,
  0x74, 0x72, 0xab, 0xb9, 0x09, 0xc5, 0xed, 0x04, 0x7e, 0x6f, 0x0b, 0x1c,
  0x09, 0x21, 0xd0, 0xcd, 0x7f, 0xf9, 0xc4, 0x5e, 0x27, 0x20, 0xe4, 0x85,
  0x73, 0x52, 0x05, 0xd2, 0xba, 0xf8, 0xd5, 0x8f, 0x41, 0xcc, 0x23, 0x2e,
  0x12, 0x6d, 0xbc, 0x31, 0x98, 0xe7, 0x63, 0xa3, 0x8e, 0x26, 0xcd, 0xe8,
  0x2b, 0x88, 0xee, 0xe2, 0xfe, 0x3a, 0x74, 0x52, 0x34, 0x0e, 0xfd, 0x12,
  0xe5, 0x5e, 0x69, 0x50, 0x20, 0x31, 0x34, 0xe4, 0x31, 0xf1, 0xe7, 0xe4,
  0x5b, 0x03, 0x13, 0xda, 0xac, 0x41, 0x6c, 0xe7, 0xcf, 0x2b
};
const unsigned int server_cert_len = 1186;

const unsigned char server_key[] = {
  0x30, 0x82, 0x04, 0xa5, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x01, 0x00,
  0xc0, 0x95, 0x08, 0xe1, 0x57, 0x41, 0xf2, 0x71, 0x6d, 0xb7, 0xd2, 0x45,
  0x41, 0x27, 0x01, 0x65, 0xc6, 0x45, 0xae, 0xf2, 0xbc, 0x24, 0x30, 0xb8,
  0x95, 0xce, 0x2f, 0x4e, 0xd6, 0xf6, 0x1c, 0x88, 0xbc, 0x7c, 0x9f, 0xfb,
  0xa8, 0x67, 0x7f, 0xfe, 0x5c, 0x9c, 0x51, 0x75, 0xf7, 0x8a, 0xca, 0x07,
  0xe7, 0x35, 0x2f, 0x8f, 0xe1, 0xbd, 0x7b, 0xc0, 0x2f, 0x7c, 0xab, 0x64,
  0xa8, 0x17, 0xfc, 0xca, 0x5d, 0x7b, 0xba, 0xe0, 0x21, 0xe5, 0x72, 0x2e,
  0x6f, 0x2e, 0x86, 0xd8, 0x95, 0x73, 0xda, 0xac, 0x1b, 0x53, 0xb9, 0x5f,
  0x3f, 0xd7, 0x19, 0x0d, 0x25, 0x4f, 0xe1, 0x63, 0x63, 0x51, 0x8b, 0x0b,
  0x64, 0x3f, 0xad, 0x43, 0xb8, 0xa5, 0x1c, 0x5c, 0x34, 0xb3, 0xae, 0x00,
  0xa0, 0x63, 0xc5, 0xf6, 0x7f, 0x0b, 0x59, 0x68, 0x78, 0x73, 0xa6, 0x8c,
  0x18, 0xa9, 0x02, 0x6d, 0xaf, 0xc3, 0x19, 0x01, 0x2e, 0xb8, 0x10, 0xe3,
  0xc6, 0xcc, 0x40, 0xb4, 0x69, 0xa3, 0x46, 0x33, 0x69, 0x87, 0x6e, 0xc4,
  0xbb, 0x17, 0xa6, 0xf3, 0xe8, 0xdd, 0xad, 0x73, 0xbc, 0x7b, 0x2f, 0x21,
  0xb5, 0xfd, 0x66, 0x51, 0x0c, 0xbd, 0x54, 0xb3, 0xe1, 0x6d, 0x5f, 0x1c,
  0xbc, 0x23, 0x73, 0xd1, 0x09, 0x03, 0x89, 0x14, 0xd2, 0x10, 0xb9, 0x64,
  0xc3, 0x2a, 0xd0, 0xa1, 0x96, 0x4a, 0xbc, 0xe1, 0xd4, 0x1a, 0x5b, 0xc7,
  0xa0, 0xc0, 0xc1, 0x63, 0x78, 0x0f, 0x44, 0x37, 0x30, 0x32, 0x96, 0x80,
  0x32, 0x23, 0x95, 0xa1, 0x77, 0xba, 0x13, 0xd2, 0x97, 0x73, 0xe2, 0x5d,
  0x25, 0xc9, 0x6a, 0x0d, 0xc3, 0x39, 0x60, 0xa4, 0xb4, 0xb0, 0x69, 0x42,
  0x42, 0x09, 0xe9, 0xd8, 0x08, 0xbc, 0x33, 0x20, 0xb3, 0x58, 0x22, 0xa7,
  0xaa, 0xeb, 0xc4, 0xe1, 0xe6, 0x61, 0x83, 0xc5, 0xd2, 0x96, 0xdf, 0xd9,
  0xd0, 0x4f, 0xad, 0xd7, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01,
  0x01, 0x00, 0x9a, 0xd0, 0x34, 0x0f, 0x52, 0x62, 0x05, 0x50, 0x01, 0xef,
  0x9f, 0xed, 0x64, 0x6e, 0xc2, 0xc4, 0xda, 0x1a, 0xf2, 0x84, 0xd7, 0x92,
  0x10, 0x48, 0x92, 0xc4, 0xe9, 0x6a, 0xeb, 0x8b, 0x75, 0x6c, 0xc6, 0x79,
  0x38, 0xf2, 0xc9, 0x72, 0x4a, 0x86, 0x64, 0x54, 0x95, 0x77, 0xcb, 0xc3,
  0x9a, 0x9d, 0xb7, 0xd4, 0x1d, 0xa4, 0x00, 0xc8, 0x9e, 0x4e, 0xe4, 0xdd,
  0xc7, 0xba, 0x67, 0x16, 0xc1, 0x74, 0xbc, 0xa9, 0xd6, 0x94, 0x8f, 0x2b,
  0x30, 0x1a, 0xfb, 0xed, 0xdf, 0x21, 0x05, 0x23, 0xd9, 0x4a, 0x39, 0xbd,
  0x98, 0x6b, 0x65, 0x9a, 0xb8, 0xdc, 0xc4, 0x7d, 0xee, 0xa6, 0x43, 0x15,
  0x2e, 0x3d, 0xbe, 0x1d, 0x22, 0x60, 0x2a, 0x73, 0x30, 0xd5, 0x3e, 0xd8,
  0xa2, 0xac, 0x86, 0x43, 0x2e, 0xc4, 0xf5, 0x64, 0x5e, 0x3f, 0x89, 0x75,
  0x0f, 0x11, 0xd8, 0x51, 0x25, 0x4e, 0x9f, 0xd8, 0xaa, 0xa3, 0xce, 0x60,
  0xb3, 0xe2, 0x8a, 0xd9, 0x7e, 0x1b, 0xf0, 0x64, 0xca, 0x9a, 0x5b, 0x05,
  0x0b, 0x5b, 0xaa, 0xcb, 0xe5, 0xe3, 0x3f, 0x6e, 0x32, 0x22, 0x05, 0xf3,
  0xd0, 0xfa, 0xef, 0x74, 0x52, 0x81, 0xe2, 0x5f, 0x74, 0xd3, 0xbd, 0xff,
  0x31, 0x83, 0x45, 0x75, 0xfa, 0x63, 0x7a, 0x97, 0x2e, 0xd6, 0xb6, 0x19,
  0xc6, 0x92, 0x26, 0xe4, 0x28, 0x06, 0x50, 0x50, 0x0e, 0x78, 0x2e, 0xa9,
  0x78, 0x0d, 0x14, 0x97, 0xb4, 0x12, 0xd8, 0x31, 0x40, 0xab, 0xa1, 0x01,
  0x41, 0xc2, 0x30, 0xf8, 0x07, 0x5f, 0x16, 0xe4, 0x61, 0x77, 0xd2, 0x60,
  0xf2, 0x9f, 0x8d, 0xe8, 0xf4, 0xba, 0xeb, 0x63, 0xde, 0x2a, 0x97, 0x81,
  0xef, 0x4c, 0x6c, 0xe6, 0x55, 0x34, 0x51, 0x2b, 0x28, 0x34, 0xf4, 0x53,
  0x1c, 0xc4, 0x58, 0x0a, 0x3f, 0xbb, 0xaf, 0xb5, 0xf7, 0x4a, 0x85, 0x43,
  0x2d, 0x3c, 0xf1, 0x58, 0x58, 0x81, 0x02, 0x81, 0x81, 0x00, 0xf2, 0x2c,
  0x54, 0x76, 0x39, 0x23, 0x63, 0xc9, 0x10, 0x32, 0xb7, 0x93, 0xad, 0xaf,
  0xbe, 0x19, 0x75, 0x96, 0x81, 0x64, 0xe6, 0xb5, 0xb8, 0x89, 0x42, 0x41,
  0xd1, 0x6d, 0xd0, 0x1c, 0x1b, 0xf8, 0x1b, 0xac, 0x69, 0xcb, 0x36, 0x3c,
  0x64, 0x7d, 0xdc, 0xf4, 0x19, 0xb8, 0xc3, 0x60, 0xb1, 0x57, 0x48, 0x5f,
  0x52, 0x4f, 0x59, 0x3a, 0x55, 0x7f, 0x32, 0xc0, 0x19, 0x43, 0x50, 0x3f,
  0xae, 0xce, 0x6f, 0x17, 0xf3, 0x0e, 0x9f, 0x40, 0xca, 0x4e, 0xad, 0x15,
  0x3b, 0xc9, 0x79, 0xe9, 0xc0, 0x59, 0x38, 0x73, 0x70, 0x9c, 0x0a, 0x7c,
  0xc9, 0x3a, 0x48, 0x32, 0xa7, 0xd8, 0x49, 0x75, 0x0a, 0x85, 0xc2, 0xc2,
  0xfd, 0x15, 0x73, 0xda, 0x99, 0x09, 0x2a, 0x69, 0x9a, 0x9f, 0x0a, 0x71,
  0xbf, 0xb0, 0x04, 0xa6, 0x8c, 0x7a, 0x5a, 0x6f, 0x48, 0x5a, 0x54, 0x3b,
  0xc6, 0xb1, 0x53, 0x17, 0xdf, 0xe7, 0x02, 0x81, 0x81, 0x00, 0xcb, 0x93,
  0xde, 0x77, 0x15, 0x5d, 0xb7, 0x5c, 0x5c, 0x7c, 0xd8, 0x90, 0xa9, 0x98,
  0x2d, 0xd6, 0x69, 0x0e, 0x63, 0xb3, 0xa3, 0xdc, 0xa6, 0xcc, 0x8b, 0x6a,
  0xa4, 0xa2, 0x12, 0x8c, 0x8e, 0x7b, 0x48, 0x2c, 0xb2, 0x4b, 0x37, 0xdc,
  0x06, 0x18, 0x7d, 0xea, 0xfe, 0x76, 0xa1, 0xd4, 0xa1, 0xe9, 0x3f, 0x0d,
  0xcd, 0x1b, 0x5f, 0xaf, 0x5f, 0x9e, 0x96, 0x5b, 0x5b, 0x0f, 0xa1, 0x7c,
  0xaf, 0xb3, 0x9b, 0x90, 0xdb, 0x57, 0x73, 0x3a, 0xed, 0xb0, 0x23, 0x44,
  0xae, 0x41, 0x4f, 0x1f, 0x07, 0x42, 0x13, 0x23, 0x4c, 0xcb, 0xfa, 0xf4,
  0x14, 0xa4, 0xd5, 0xf7, 0x9e, 0x36, 0x7c, 0x5b, 0x9f, 0xa8, 0x3c, 0xc1,
  0x85, 0x5f, 0x74, 0xd2, 0x39, 0x2d, 0xff, 0xd0, 0x84, 0xdf, 0xfb, 0xb3,
  0x20, 0x7a, 0x2e, 0x9b, 0x17, 0xae, 0xe6, 0xba, 0x0b, 0xae, 0x5f, 0x53,
  0xa4, 0x52, 0xed, 0x1b, 0xc4, 0x91, 0x02, 0x81, 0x81, 0x00, 0xec, 0x98,
  0xda, 0xbb, 0xd5, 0xfe, 0xf9, 0x52, 0x4a, 0x7d, 0x02, 0x55, 0x49, 0x6f,
  0x55, 0x6e, 0x52, 0x2f, 0x84, 0xa3, 0x2b, 0xb3, 0x86, 0x62, 0xb3, 0x54,
  0xd2, 0x63, 0x52, 0xda, 0xe3, 0x88, 0x76, 0xa0, 0xef, 0x8b, 0x15, 0xa5,
  0xd3, 0x18, 0x14, 0x72, 0x77, 0x5e, 0xc7, 0xa3, 0x04, 0x1f, 0x9e, 0x19,
  0x62, 0xb5, 0x1b, 0x1b, 0x9e, 0xc3, 0xf2, 0xb5, 0x32, 0xf9, 0x4c, 0xc1,
  0xaa, 0xeb, 0x0c, 0x26, 0x7d, 0xd4, 0x5f, 0x4a, 0x51, 0x5c, 0xa4, 0x45,
  0x06, 0x70, 0x44, 0xa7, 0x56, 0xc0, 0xd4, 0x22, 0x14, 0x76, 0x9e, 0xd8,
  0x63, 0x50, 0x89, 0x90, 0xd3, 0xe2, 0xbf, 0x81, 0x95, 0x92, 0x31, 0x41,
  0x87, 0x39, 0x1a, 0x43, 0x0b, 0x18, 0xa5, 0x53, 0x1f, 0x39, 0x1a, 0x5f,
  0x1f, 0x43, 0xbc, 0x87, 0x6a, 0xdf, 0x6e, 0xd3, 0x22, 0x00, 0xfe, 0x22,
  0x98, 0x70, 0x4e, 0x1a, 0x19, 0x29, 0x02, 0x81, 0x81, 0x00, 0x8a, 0x41,
  0x56, 0x28, 0x51, 0x9e, 0x5f, 0xd4, 0x9e, 0x0b, 0x3b, 0x98, 0xa3, 0x54,
  0xf2, 0x6c, 0x56, 0xd4, 0xaa, 0xe9, 0x69, 0x33, 0x85, 0x24, 0x0c, 0xda,
  0xd4, 0x0c, 0x2d, 0xc4, 0xbf, 0x4f, 0x02, 0x69, 0x38, 0x7c, 0xd4, 0xe6,
  0xdc, 0x4c, 0xed, 0xd7, 0x16, 0x11, 0xc3, 0x3e, 0x00, 0xe7, 0xc3, 0x26,
  0xc0, 0x51, 0x02, 0xde, 0xbb, 0x75, 0x9c, 0x6f, 0x56, 0x9c, 0x7a, 0xf3,
  0x8e, 0xef, 0xcf, 0x8a, 0xc5, 0x2b, 0xd2, 0xda, 0x06, 0x6a, 0x44, 0xc9,
  0x73, 0xfe, 0x6e, 0x99, 0x87, 0xf8, 0x5b, 0xbe, 0xf1, 0x7c, 0xe6, 0x65,
  0xb5, 0x4f, 0x6c, 0xf0, 0xc9, 0xc5, 0xff, 0x16, 0xca, 0x8b, 0x1b, 0x17,
  0xe2, 0x58, 0x3d, 0xa2, 0x37, 0xab, 0x01, 0xbc, 0xbf, 0x40, 0xce, 0x53,
  0x8c, 0x8e, 0xed, 0xef, 0xee, 0x59, 0x9d, 0xe0, 0x63, 0xe6, 0x7c, 0x5e,
  0xf5, 0x8e, 0x4b, 0xf1, 0x3b, 0xc1, 0x02, 0x81, 0x80, 0x4d, 0x45, 0xf9,
  0x40, 0x8c, 0xc5, 0x5b, 0xf4, 0x2a, 0x1a, 0x8a, 0xb4, 0xf2, 0x1c, 0xac,
  0x6b, 0xe9, 0x0c, 0x56, 0x36, 0xb7, 0x4e, 0x72, 0x96, 0xd5, 0xe5, 0x8a,
  0xd2, 0xe2, 0xff, 0xf1, 0xf1, 0x18, 0x13, 0x3d, 0x86, 0x09, 0xb8, 0xd8,
  0x76, 0xa7, 0xc9, 0x1c, 0x71, 0x52, 0x94, 0x30, 0x43, 0xe0, 0xf1, 0x78,
  0x74, 0xfd, 0x61, 0x1b, 0x4c, 0x09, 0xcc, 0xe6, 0x68, 0x2a, 0x71, 0xad,
  0x1c, 0xdf, 0x43, 0xbc, 0x56, 0xdb, 0xa5, 0xa4, 0xbe, 0x35, 0x70, 0xa4,
  0x5e, 0xcf, 0x4f, 0xfc, 0x00, 0x55, 0x99, 0x3a, 0x3d, 0x23, 0xcf, 0x67,
  0x5a, 0xf5, 0x22, 0xf8, 0xb5, 0x29, 0xd0, 0x44, 0x11, 0xeb, 0x35, 0x2e,
  0x46, 0xbe, 0xfd, 0x8e, 0x18, 0xb2, 0x5f, 0xa8, 0xbf, 0x19, 0x32, 0xa1,
  0xf5, 0xdc, 0x03, 0xe6, 0x7c, 0x9a, 0x1f, 0x0c, 0x7c, 0xa9, 0xb0, 0x0e,
  0x21, 0x37, 0x3b, 0xf1, 0xb0
};
const unsigned int server_key_len = 1193;
#endif

#ifdef MODULE_WOLFSSL_PSK
const unsigned char server_key[1] = { 0 };
const unsigned int server_key_len = 0;
#endif
