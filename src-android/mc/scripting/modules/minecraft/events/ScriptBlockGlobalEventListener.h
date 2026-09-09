#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSourceHandle;
class Dimension;
class ItemStackBase;
class Player;
struct ButtonPushEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptBlockBreakingEventListener; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ScriptModuleMinecraft::ScriptBlockBreakingEventListener>>> mBlockBreakingListener;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptBlockGlobalEventListener();

    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    virtual ::EventResult onBlockDestroyedByPlayer(::Player&, ::Block const&, ::BlockPos const&, ::ItemStackBase const&, ::ItemStackBase const&);

    virtual ::EventResult onBlockDestructionStopped(::Player&, ::BlockPos const&, int);

    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    virtual ::EventResult onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    virtual ::EventResult onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);

    virtual ::EventResult onEvent(::PistonActionEvent const&);

    virtual ::EventResult onEvent(::LeverActionEvent const&);

    virtual ::EventResult onEvent(::ButtonPushEvent const&);

    virtual ::EventResult onEvent(::PressurePlatePushEvent const&);

    virtual ::EventResult onEvent(::PressurePlatePopEvent const&);

    virtual ::EventResult onEvent(::TargetBlockHitEvent const&);

    virtual ::EventResult onEvent(::TripWireTripEvent const&);

    virtual ::EventResult onEvent(::ExplosionStartedEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldAfterEvents>
    );

    MCNAPI void unregisterListener(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldAfterEvents>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCNAPI ::EventResult $onBlockDestructionStopped(::Player&, ::BlockPos const&, int);

    MCNAPI ::EventResult
    $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI ::EventResult
    $onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);

    MCNAPI ::EventResult $onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);

    MCNAPI ::EventResult $onEvent(::PistonActionEvent const&);

    MCNAPI ::EventResult $onEvent(::LeverActionEvent const&);

    MCNAPI ::EventResult $onEvent(::ButtonPushEvent const&);

    MCNAPI ::EventResult $onEvent(::PressurePlatePushEvent const&);

    MCNAPI ::EventResult $onEvent(::PressurePlatePopEvent const&);

    MCNAPI ::EventResult $onEvent(::TargetBlockHitEvent const&);

    MCNAPI ::EventResult $onEvent(::TripWireTripEvent const&);

    MCNAPI ::EventResult $onEvent(::ExplosionStartedEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
