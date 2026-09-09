#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockContainerAccessAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                      mPos;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockContainerAccessAfterEventIntermediateData&
    operator=(ScriptBlockContainerAccessAfterEventIntermediateData const&);
    ScriptBlockContainerAccessAfterEventIntermediateData();

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
};

} // namespace ScriptModuleMinecraft
