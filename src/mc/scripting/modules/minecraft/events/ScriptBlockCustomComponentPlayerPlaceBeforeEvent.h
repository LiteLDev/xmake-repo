#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentBeforeEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#include "mc/world/level/block/block_events/BlockPlayerPlacingEvent.h"
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace BlockEvents { class BlockPlayerPlacingEvent; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerPlaceBeforeEvent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ScriptCustomComponentBeforeEvent<BlockEvents::BlockPlayerPlacingEvent&>,
#else // @header-generator platform
: public ::ScriptModuleMinecraft::ScriptCustomComponentBeforeEvent<::BlockEvents::BlockPlayerPlacingEvent&>,
#endif // @header-generator platform
  public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                  mCancel;
    ::ll::UntypedStorage<8, 32>                                     mPermutationToPlace;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCancel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
                                                                    mPermutationToPlace;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                     mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
        mPlayer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent&
    operator=(ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);
#endif // @header-generator platform
    ScriptBlockCustomComponentPlayerPlaceBeforeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptBlockCustomComponentPlayerPlaceBeforeEvent();
#else // @header-generator platform
    virtual void updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent& engineEvent) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;

    virtual bool shouldCancel() const;
#else // @header-generator platform
    virtual bool shouldCancel() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
#endif // @header-generator platform
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptBlockCustomComponentPlayerPlaceBeforeEvent(
        ::BlockEvents::BlockPlayerPlacingEvent const& engineEvent,
        ::Scripting::WeakLifetimeScope const&         scope
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
#else // @header-generator platform
    MCAPI static ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
#endif // @header-generator platform
        void>>
#if defined(LL_PLAT_A) // @header-generator platform
    tryGetComponentsToExecute(::BlockEvents::BlockPlayerPlacingEvent const&);
#else // @header-generator platform
    tryGetComponentsToExecute(::BlockEvents::BlockPlayerPlacingEvent const& eventData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerPlaceBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockEvents::BlockPlayerPlacingEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void*
    $ctor(::BlockEvents::BlockPlayerPlacingEvent const& engineEvent, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;
#else // @header-generator platform
    MCAPI void $updateEngineEvent(::BlockEvents::BlockPlayerPlacingEvent& engineEvent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldCancel() const;
#else // @header-generator platform
    MCAPI bool $shouldCancel() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
