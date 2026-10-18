#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcher.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcher.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct CommandDispatcherArgs; }
namespace GeometryAtlas { struct InsertTilePayload; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class BaseTileImpl : public ::GeometryAtlas::CommandDispatcher {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BaseTileImpl : public ::GeometryAtlas::CommandDispatcher {
public:
    // prevent constructor by default
    BaseTileImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseTileImpl(::GeometryAtlas::CommandDispatcherArgs&& args, ::GeometryAtlas::InsertTilePayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeometryAtlas::CommandDispatcherArgs&& args, ::GeometryAtlas::InsertTilePayload payload);
    // NOLINTEND
};
#else // @header-generator platform
class BaseTileImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
