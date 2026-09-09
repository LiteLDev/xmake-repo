#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

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

} // namespace OreUI::Detail
