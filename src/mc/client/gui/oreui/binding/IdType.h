#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class IdType {
public:
    // IdType inner types define
    using UnderlyingType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::Detail::IdType next();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::Detail::IdType const& INVALID_ID();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IdType {
public:
    // IdType inner types define
    using UnderlyingType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND
};
#else // @header-generator platform
class IdType {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
