#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackCollection.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackCollection.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct WorldPacksData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::World::PackCollection> resourcePack;
    ::ll::TypedStorage<8, 128, ::World::PackCollection> behaviorPack;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPacksData& operator=(WorldPacksData const&);
    WorldPacksData(WorldPacksData const&);
    WorldPacksData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WorldPacksData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::World::PackCollection> resourcePack;
    ::ll::TypedStorage<8, 128, ::World::PackCollection> behaviorPack;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldPacksData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
