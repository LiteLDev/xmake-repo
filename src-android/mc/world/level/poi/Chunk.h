#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/poi/Container.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct RegionId; }
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

struct Chunk {
public:
    // Chunk inner types define
    using SetDirty = std::function<void(Poi::RegionId)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                         mSetDirty;
    ::ll::TypedStorage<4, 24, ::BoundingBox>            mBox;
    ::ll::TypedStorage<8, 24, ::Poi::detail::Container> mRecords;
    ::ll::UntypedStorage<8, 16>                         mRegistry;
    // NOLINTEND
};

} // namespace Poi
