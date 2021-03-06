#ifndef LLARP_DNS_DNS_HPP
#define LLARP_DNS_DNS_HPP

#include <stdint.h>

namespace llarp
{
  namespace dns
  {
    constexpr uint16_t qTypeAAAA  = 28;
    constexpr uint16_t qTypeTXT   = 16;
    constexpr uint16_t qTypeMX    = 15;
    constexpr uint16_t qTypePTR   = 12;
    constexpr uint16_t qTypeCNAME = 5;
    constexpr uint16_t qTypeNS    = 2;
    constexpr uint16_t qTypeA     = 1;

    constexpr uint16_t qClassIN = 1;

    constexpr uint16_t flags_QR             = (1 << 15);
    constexpr uint16_t flags_AA             = (1 << 10);
    constexpr uint16_t flags_TC             = (1 << 9);
    constexpr uint16_t flags_RD             = (1 << 8);
    constexpr uint16_t flags_RA             = (1 << 7);
    constexpr uint16_t flags_RCODENameError = (1 << 3);
    constexpr uint16_t flags_RCODENoError   = (1 << 0);

  }  // namespace dns
}  // namespace llarp

#endif
