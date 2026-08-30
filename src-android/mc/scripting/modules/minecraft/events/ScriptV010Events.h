#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"

// auto generated forward declare list
// clang-format off
class Level;
class Player;
struct ChatEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptActorCreateEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptDataDrivenActorTriggerEventFilter; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptV010Events : public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
                         public ::ScriptModuleMinecraft::IScriptWorldBeforeEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                      mScope;
    ::ll::UntypedStorage<8, 16>                                                    mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>>                              mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::UntypedStorage<8, 32>                                                    mTickSignal;
    ::ll::UntypedStorage<8, 32>                                                    mWeatherChangeSignal;
    ::ll::UntypedStorage<8, 32>                                                    mWorldInitializeSignal;
    ::ll::UntypedStorage<8, 32>                                                    mPlayerJoinEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mPlayerLeaveEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mBeforeChatSignal;
    ::ll::UntypedStorage<8, 32>                                                    mEntityCreateSignal;
    ::ll::UntypedStorage<8, 32>                                                    mEntityHitSignal;
    ::ll::UntypedStorage<8, 32>                                                    mDataDrivenEntityEventSend;
    ::ll::UntypedStorage<8, 32>                                                    mEntityHurtSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemBeforeUseEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemBeforeUseOnEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemUseOnEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemStartChargeEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemCompleteChargeEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemReleaseChargeEventSignal;
    ::ll::UntypedStorage<8, 32>                                                    mItemStopChargeEventSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptV010Events& operator=(ScriptV010Events const&);
    ScriptV010Events(ScriptV010Events const&);
    ScriptV010Events();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptV010Events();

    virtual ::Level& getLevel() const;

    virtual void onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);

    virtual void onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);

    virtual void onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);

    virtual void onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);

    virtual void onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);

    virtual void onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);

    virtual void onDataDrivenActorEventSend(std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&);

    virtual void onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);

    virtual void onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);

    virtual void onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);

    virtual void onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);

    virtual void onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);

    virtual void onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);

    virtual void onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>> onBeforeChat(::ChatEvent const&, ::Player const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>> onBeforeItemUse(::Player const&, ::ItemUseEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>> onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptV010Events(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<Level*>);

    MCNAPI void onActorCreated(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    MCNAPI void onLevelTick(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptTickEvent>&);

    MCNAPI ::ScriptModuleMinecraft::ScriptV010Events& operator=(::ScriptModuleMinecraft::ScriptV010Events&&);

    MCNAPI void registerListener(
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptV010Events>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<Level*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Level& $getLevel() const;

    MCNAPI void
    $onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);

    MCNAPI void
    $onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);

    MCNAPI void $onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);

    MCNAPI void $onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);

    MCNAPI void $onDataDrivenActorEventSend(
        std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
    );

    MCNAPI void $onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);

    MCNAPI void $onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);

    MCNAPI void $onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);

    MCNAPI void $onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);

    MCNAPI void $onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);

    MCNAPI void $onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);

    MCNAPI void $onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
           $onBeforeChat(::ChatEvent const&, ::Player const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
           $onBeforeItemUse(::Player const&, ::ItemUseEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
           $onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
