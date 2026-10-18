#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/poi/Container.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Poi { struct RegionId; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Poi { struct Registry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Poi {

struct Chunk {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Chunk inner types define
    using SetDirty = std::function<void(Poi::RegionId)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                         mSetDirty;
    ::ll::TypedStorage<4, 24, ::BoundingBox>            mBox;
    ::ll::TypedStorage<8, 24, ::Poi::detail::Container> mRecords;
    ::ll::UntypedStorage<8, 16>                         mRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk5dbe1d;
    ::ll::UntypedStorage<4, 24> mUnk2f93ca;
    ::ll::UntypedStorage<8, 24> mUnkd14ee7;
    ::ll::UntypedStorage<8, 8>  mUnk75c6bf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Chunk& operator=(Chunk const&);
    Chunk(Chunk const&);
    Chunk();
#endif // @header-generator platform
};

} // namespace Poi
