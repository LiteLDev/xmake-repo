#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/Listener.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/BlockEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSourceHandle;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockBreakingEventListener; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<BlockEventListener> {
#else // @header-generator platform
class ScriptBlockGlobalEventListener : public ::EventListenerDispatcher<::BlockEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ScriptModuleMinecraft::ScriptBlockBreakingEventListener>>> mBlockBreakingListener;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    ::ll::TypedStorage<
        8,
        8,
        ::gsl::not_null<::std::unique_ptr<::ScriptModuleMinecraft::ScriptBlockBreakingEventListener>>>
        mBlockBreakingListener;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptBlockGlobalEventListener();
#else // @header-generator platform
    virtual ~ScriptBlockGlobalEventListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PistonActionEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestroyedByPlayer(::Player&, ::Block const&, ::BlockPos const&, ::ItemStackBase const&, ::ItemStackBase const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::LeverActionEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionStopped(::Player&, ::BlockPos const&, int);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ButtonPushEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PressurePlatePushEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PressurePlatePopEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);
#else // @header-generator platform
    virtual ::EventResult onEvent(::TripWireTripEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PistonActionEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::TargetBlockHitEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::LeverActionEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ExplosionStartedEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ButtonPushEvent const&);
#else // @header-generator platform
    virtual ::EventResult onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PressurePlatePushEvent const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool) /*override*/;
#else // LL_PLAT_C
    virtual ::EventResult onBlockPlacedByPlayer(
        ::Player&         player,
        ::Block const&    placedBlock,
        ::BlockPos const& pos,
        bool              isUnderwater
    ) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PressurePlatePopEvent const&);
#else // @header-generator platform
    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::TargetBlockHitEvent const&);
#else // @header-generator platform
    virtual ::EventResult onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::TripWireTripEvent const&);
#else // @header-generator platform
    virtual ::EventResult
    onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::EventResult onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockPlacedByPlayer(::Player&, ::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::PistonActionEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&,
        ::Block const&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::ItemStackBase const&
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::LeverActionEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ButtonPushEvent const& eventData);

    MCAPI ::EventResult $onEvent(::PressurePlatePushEvent const& eventData);

    MCAPI ::EventResult $onEvent(::PressurePlatePopEvent const& eventData);

    MCAPI ::EventResult $onEvent(::TripWireTripEvent const& eventData);

    MCAPI ::EventResult $onEvent(::TargetBlockHitEvent const& eventData);

    MCAPI ::EventResult $onEvent(::ExplosionStartedEvent const& eventData);

    MCAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockDestructionStopped(::Player&, ::BlockPos const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool);
#else // LL_PLAT_C
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onBlockDestructionContinued(::Player&, ::BlockPos const&, ::Block const&, uchar const, int const);
#else // @header-generator platform
    MCAPI ::EventResult $onBlockDestructionStarted(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    hitBlock,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onBlockExploded(::Dimension&, ::BlockPos const&, ::Block const&, ::Actor*);
#else // @header-generator platform
    MCAPI ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PistonActionEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onBlockDestructionContinued(
        ::Player&         player,
        ::BlockPos const& pos,
        ::Block const&    block,
        uchar const       face,
        int const         previousProgress
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LeverActionEvent const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
