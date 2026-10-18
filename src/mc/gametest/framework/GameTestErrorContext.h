#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace gametest {

struct GameTestErrorContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos> absolutePosition;
    ::ll::TypedStorage<4, 12, ::BlockPos> relativePosition;
    ::ll::TypedStorage<4, 4, int>         tickCount;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkdcbc69;
    ::ll::UntypedStorage<4, 12> mUnk144395;
    ::ll::UntypedStorage<4, 4>  mUnk2a25a2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GameTestErrorContext& operator=(GameTestErrorContext const&);
    GameTestErrorContext(GameTestErrorContext const&);
    GameTestErrorContext();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace gametest
