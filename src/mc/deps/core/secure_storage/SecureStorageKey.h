#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> key;
    ::ll::TypedStorage<1, 1, bool>         isEncoded;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkcf8570;
    ::ll::UntypedStorage<1, 1>  mUnke00a50;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SecureStorageKey& operator=(SecureStorageKey const&);
#endif // @header-generator platform
    SecureStorageKey(SecureStorageKey const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SecureStorageKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SecureStorageKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
