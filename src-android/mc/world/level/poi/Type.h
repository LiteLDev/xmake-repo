#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace Poi { class TagProvider; }
// clang-format on

namespace Poi {

struct Type {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mName;
    ::ll::TypedStorage<8, 40, std::unordered_set<const Block*>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Poi::TagProvider const*>         mTagProvider;
    ::ll::TypedStorage<2, 2, ::Poi::TypeId>                     mId;
    ::ll::TypedStorage<1, 1, uchar>                             mTickets;
    ::ll::TypedStorage<1, 1, uchar>                             mUsableRange;
    // NOLINTEND
};

} // namespace Poi
