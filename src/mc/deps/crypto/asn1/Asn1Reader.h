#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/crypto/asn1/Asn1Type.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Crypto::Asn1 {

class Asn1Reader {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Asn1Reader inner types define
    using LengthType = long;

    using IntType = ulong;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, uchar const*>             mCurrent;
    ::ll::TypedStorage<8, 8, uchar const*>             mEnd;
    ::ll::TypedStorage<4, 4, ::Crypto::Asn1::Asn1Type> mReadType;
    ::ll::TypedStorage<8, 8, long>                     mReadLength;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk44e5a6;
    ::ll::UntypedStorage<8, 8> mUnk58ae8f;
    ::ll::UntypedStorage<4, 4> mUnkfdfa3b;
    ::ll::UntypedStorage<4, 4> mUnk239e05;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Asn1Reader& operator=(Asn1Reader const&);
    Asn1Reader(Asn1Reader const&);
    Asn1Reader();
#endif // @header-generator platform
};

} // namespace Crypto::Asn1
