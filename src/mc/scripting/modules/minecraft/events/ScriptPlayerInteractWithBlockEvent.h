#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                     mBlock;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationRelative;
    ::ll::TypedStorage<1, 1, bool>                                  mIsFirstEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing>                                       mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationRelative;
    ::ll::TypedStorage<1, 1, bool>    mIsFirstEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerInteractWithBlockEvent(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::Vec3,
        bool
#else // @header-generator platform
    MCAPI ScriptPlayerInteractWithBlockEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>  block,
        ::ScriptModuleMinecraft::ScriptFacing                                       blockFace,
        ::Vec3                                                                      faceLocation,
        bool                                                                        isFirstEvent
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::Vec3,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>  block,
        ::ScriptModuleMinecraft::ScriptFacing                                       blockFace,
        ::Vec3                                                                      faceLocation,
        bool                                                                        isFirstEvent
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
