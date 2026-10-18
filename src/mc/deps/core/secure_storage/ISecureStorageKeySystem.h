#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SecureStorageKey;
// clang-format on

class ISecureStorageKeySystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISecureStorageKeySystem() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SecureStorageKey getSecureStorageKey(std::string const&) = 0;
#else // @header-generator platform
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSecureStorageKey(std::string const&, ::SecureStorageKey const&) = 0;
#else // @header-generator platform
    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
