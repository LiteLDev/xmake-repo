#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::Poi {

struct TypeRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<2, 2, ushort>       mType;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Poi
