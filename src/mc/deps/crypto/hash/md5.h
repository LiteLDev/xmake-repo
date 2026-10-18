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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~md5();
#else // @header-generator platform
    virtual ~md5() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reset();
#else // @header-generator platform
    virtual void reset() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(void const*, uint);
#else // @header-generator platform
    virtual void update(void const* data, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void final(uchar*);
#else // @header-generator platform
    virtual void final(uchar* result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong resultSize() const;
#else // @header-generator platform
    virtual uint64 resultSize() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void const* _body(void const*, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void const* _body(void const* data, uint size);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reset();
#else // @header-generator platform
    MCAPI void $reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(void const*, uint);
#else // @header-generator platform
    MCAPI void $update(void const* data, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $final(uchar*);
#else // @header-generator platform
    MCAPI void $final(uchar* result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $resultSize() const;
#else // @header-generator platform
    MCFOLD uint64 $resultSize() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
