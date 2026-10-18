#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct RenderableUpdateCommand; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct RenderableUpdateCommand; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace GeometryAtlas {

struct CommandDispatcherArgs {
public:
    // CommandDispatcherArgs inner types declare
    // clang-format off
    struct DispatchFunctions;
    // clang-format on

    // CommandDispatcherArgs inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DispatchFunctions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mDispatch;
        // NOLINTEND
    };

    using DispatchFunctionPointer = std::weak_ptr<GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                    mId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>> mDispatcher;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DispatchFunctions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::GeometryAtlas::RenderableUpdateCommand&&)>>
            mDispatch;
        // NOLINTEND
    };

    using DispatchFunctionPointer = ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                        mId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>> mDispatcher;
    // NOLINTEND
#else // @header-generator platform
    struct DispatchFunctions {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace GeometryAtlas
