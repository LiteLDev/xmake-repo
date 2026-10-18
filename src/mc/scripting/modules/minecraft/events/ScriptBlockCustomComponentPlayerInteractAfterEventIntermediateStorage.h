#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const>     mPlayer;
    ::ll::TypedStorage<1, 1, uchar const>                mFace;
    ::ll::TypedStorage<4, 16, std::optional<Vec3> const> mHit;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const>         mPlayer;
    ::ll::TypedStorage<1, 1, uchar const>                    mFace;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3> const> mHit;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentPlayerInteractAfterEventIntermediateStorage();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
