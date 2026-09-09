#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class IHash {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHash();

    virtual void reset() = 0;

    virtual void update(void const*, uint) = 0;

    virtual void final(uchar*) = 0;

    virtual ulong resultSize() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Crypto::Hash
