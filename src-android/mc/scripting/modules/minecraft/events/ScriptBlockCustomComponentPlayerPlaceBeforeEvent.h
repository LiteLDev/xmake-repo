#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentBeforeEvent.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#include "mc/world/level/block/block_events/BlockPlayerPlacingEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent
: public ::ScriptModuleMinecraft::ScriptCustomComponentBeforeEvent<BlockEvents::BlockPlayerPlacingEvent&>,
  public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mCancel;
    ::ll::UntypedStorage<8, 32>                                     mPermutationToPlace;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::UntypedStorage<8, 40>                                     mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

    virtual void updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;

    virtual bool shouldCancel() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&
    );

    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(::BlockEvents::BlockPlayerPlacingEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);

    MCNAPI void* $ctor(::BlockEvents::BlockPlayerPlacingEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;

    MCNAPI bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
