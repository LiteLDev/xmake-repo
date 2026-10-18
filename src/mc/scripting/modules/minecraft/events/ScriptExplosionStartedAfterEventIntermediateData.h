#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class Dimension;
struct ExplosionStartedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                                 mBlocks;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                  mBlocks;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEventIntermediateData&
    operator=(ScriptExplosionStartedAfterEventIntermediateData const&);
    ScriptExplosionStartedAfterEventIntermediateData(ScriptExplosionStartedAfterEventIntermediateData const&);
    ScriptExplosionStartedAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptExplosionStartedAfterEventIntermediateData(::ExplosionStartedEvent const&, ::Actor const*);
#else // @header-generator platform
    MCAPI
    ScriptExplosionStartedAfterEventIntermediateData(::ExplosionStartedEvent const& eventData, ::Actor const* source);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ExplosionStartedEvent const&, ::Actor const*);
#else // @header-generator platform
    MCAPI void* $ctor(::ExplosionStartedEvent const& eventData, ::Actor const* source);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
