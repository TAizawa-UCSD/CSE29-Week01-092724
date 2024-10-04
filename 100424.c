// ASCII does not define ピ or emojis ther are hundreds of thousands  of characters, and there are millions of lines of code that use ASCII.

// 1993 USENIC Rob Pike San Diego
// UTF-8
// Bytes like 0xxxxxxx are ASCII (code points).
// Bytes like 1xxxxxxx are multi-byte characters (code points).

// e(accent) is 2 bytes: 0b110xxxxx 0b10xxxxxx code points up to 2^11.
// ピ is 3 bytes: 0b1110xxxx 0b10xxxxxx 0b10xxxxxx code points up to 2^16
// 🦀 is 4 bytes: 0b11110xxx 0b10xxxxxx 0b10xxxxxx 0b10xxxxxx code points up to 2^21

// "Unicode" is a map from code points to gliph, characters
// The list of images for characters is called font.
// 
