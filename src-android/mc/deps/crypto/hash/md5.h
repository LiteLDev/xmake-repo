#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/IHash.h"

namespace Crypto::Hash {

class md5 : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>       _lo;
    ::ll::TypedStorage<4, 4, uint>       _hi;
    ::ll::TypedStorage<4, 4, uint>       _a;
    ::ll::TypedStorage<4, 4, uint>       _b;
    ::ll::TypedStorage<4, 4, uint>       _c;
    ::ll::TypedStorage<4, 4, uint>       _d;
    ::ll::TypedStorage<1, 64, uchar[64]> _buffer;
    ::ll::TypedStorage<4, 64, uint[16]>  _block;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~md5();

    virtual void reset();

    virtual void update(void const*, uint);

    virtual void final(uchar*);

    virtual ulong resultSize() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void const* _body(void const*, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();

    MCNAPI void $update(void const*, uint);

    MCNAPI void $final(uchar*);

    MCNAPI ulong $resultSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
