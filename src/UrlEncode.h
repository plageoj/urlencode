#ifndef _PLAGEOJ_URLENCODE_H
#define _PLAGEOJ_URLENCODE_H

#include <Arduino.h>

/**
 * Percent-encodes a string.
 * @param msg UTF-8 string to encode.
 * @returns Percent-encoded string.
 */
String urlEncode(const unsigned char *msg);
String urlEncode(String msg) {
  return urlEncode(msg.c_str());
}

#endif