#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class IHash {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IHash();
#else // @header-generator platform
    virtual ~IHash() = default;
#endif // @header-generator platform

    virtual void reset() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(void const*, uint) = 0;
#else // @header-generator platform
    virtual void update(void const* data, uint size) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void final(uchar*) = 0;
#else // @header-generator platform
    virtual void final(uchar* result) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong resultSize() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 resultSize() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Hash
