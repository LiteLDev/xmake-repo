#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockContainerAccessAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                      mPos;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mPos;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockContainerAccessAfterEventIntermediateData&
    operator=(ScriptBlockContainerAccessAfterEventIntermediateData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBlockContainerAccessAfterEventIntermediateData(ScriptBlockContainerAccessAfterEventIntermediateData const&);
#endif // @header-generator platform
    ScriptBlockContainerAccessAfterEventIntermediateData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockContainerAccessAfterEventIntermediateData(::Dimension&, ::BlockPos, ::Actor const&);

    MCNAPI ~ScriptBlockContainerAccessAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::BlockPos, ::Actor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
