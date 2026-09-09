#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct TileHandleSharedState; }
// clang-format on

namespace GeometryAtlas {

class CommandDispatcher {
public:
    // CommandDispatcher inner types define
    using DispatchFunctionPointer = std::weak_ptr<GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                                       mId;
    ::ll::UntypedStorage<8, 16>                                                                mDispatcher;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const GeometryAtlas::TileHandleSharedState> const> mShared;
    // NOLINTEND
};

} // namespace GeometryAtlas
