#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asn1/Asn1Type.h"

namespace Crypto::Asn1 {

class Asn1Reader {
public:
    // Asn1Reader inner types define
    using LengthType = long;

    using IntType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar const*>             mCurrent;
    ::ll::TypedStorage<8, 8, uchar const*>             mEnd;
    ::ll::TypedStorage<4, 4, ::Crypto::Asn1::Asn1Type> mReadType;
    ::ll::TypedStorage<8, 8, long>                     mReadLength;
    // NOLINTEND
};

} // namespace Crypto::Asn1
