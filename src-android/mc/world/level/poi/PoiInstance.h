#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct Type; }
// clang-format on

namespace Poi {

struct PoiInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<8, 8, ::Poi::Type const*> mType;
    ::ll::TypedStorage<1, 1, uchar>              mTickets;
    // NOLINTEND
};

} // namespace Poi
