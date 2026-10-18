#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct TileHandleSharedState; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class InitializeCallbackPayload; }
namespace GeometryAtlas { struct AllocateAtlasPayload; }
namespace GeometryAtlas { struct AllocateBackendPayload; }
namespace GeometryAtlas { struct InsertTilePayload; }
namespace GeometryAtlas { struct PaperDollTransformPayload; }
namespace GeometryAtlas { struct RemoveTilePayload; }
namespace GeometryAtlas { struct TileHandleSharedState; }
namespace GeometryAtlas { struct UIItemPayload; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CommandDispatcher {
public:
    // CommandDispatcher inner types define
    using DispatchFunction = ::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions;

    using DispatchFunctionPointer = ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const> mId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions> const>
                                                                                                   mDispatcher;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::TileHandleSharedState const> const> mShared;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tryDispatch(
        ::std::variant<
            ::GeometryAtlas::AllocateAtlasPayload,
            ::GeometryAtlas::AllocateBackendPayload,
            ::GeometryAtlas::UIItemPayload,
            ::GeometryAtlas::InsertTilePayload,
            ::GeometryAtlas::RemoveTilePayload,
            ::GeometryAtlas::PaperDollTransformPayload,
            ::GeometryAtlas::InitializeCallbackPayload>&& command
    );
    // NOLINTEND
};
#else // @header-generator platform
class CommandDispatcher {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
