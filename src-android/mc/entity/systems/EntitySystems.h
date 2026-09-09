#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/ecs/systems/IEntitySystems.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/profiler/PredeclaredAnnotation.h"

// auto generated forward declare list
// clang-format off
class EcsEventDispatcher;
class EntityContext;
class EntityRegistry;
class ITickingSystem;
class PlayerInteractionSystem;
class StrictEntityContext;
struct EntitySystemTickingMode;
struct EntitySystemsInfo;
struct IEntitySystemsCollection;
struct ISystem;
struct SystemInfo;
struct SystemTiming;
struct TickingSystemId;
struct TickingSystemWithInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntitySystems : public ::IEntitySystems, public ::Bedrock::EnableNonOwnerReferences {
public:
    // EntitySystems inner types declare
    // clang-format off
    struct GameSystemCategory;
    struct EditorSystemCategory;
    struct UsedInServerPlayerMovement;
    struct UsedInClientMovementCorrections;
    struct RuntimeInitialize;
    // clang-format on

    // EntitySystems inner types define
    struct GameSystemCategory {};

    struct EditorSystemCategory {};

    struct UsedInServerPlayerMovement {};

    struct UsedInClientMovementCorrections {};

    struct RuntimeInitialize {};

    using TotalTickCallbackFunc = std::function<void()>;

    using SystemInvokeCallbackFunc = std::function<void(TickingSystemId)>;

    using TotalTickCallbackPair = std::pair<std::function<void()>, std::function<void()>>;

    using SystemInvokeCallbackPair =
        std::pair<std::function<void(TickingSystemId)>, std::function<void(TickingSystemId)>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerInteractionSystem>>  mPlayerInteractionSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IEntitySystemsCollection>> mSystems;
    ::ll::UntypedStorage<1, 16>                                         mDispatcher;
    ::ll::TypedStorage<8, 24, std::string>                              mName;
    ::ll::TypedStorage<1, 1, bool>                                      mEnableTimingCapture;
    ::ll::UntypedStorage<8, 48>                                         mPreTotalTick;
    ::ll::UntypedStorage<8, 48>                                         mPostTotalTick;
    ::ll::UntypedStorage<8, 48>                                         mPreSystemInvoke;
    ::ll::UntypedStorage<8, 48>                                         mPostSystemInvoke;
    ::ll::UntypedStorage<8, 16>                                         mTickingAnnotation;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystems& operator=(EntitySystems const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EntitySystems();

    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode);

    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const;

    virtual void tickMovementCatchup(::EntityRegistry&);

    virtual void tickMovementCorrectionReplay(::EntityRegistry&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntitySystems(std::string_view);

    MCNAPI EntitySystems(std::unique_ptr<IEntitySystemsCollection>, std::string_view);

    MCNAPI void _singleTickCategory(::Bedrock::typeid_t<SystemCategory> const, ::EntityContext&);

    MCNAPI void
    _singleTickCategory(::Bedrock::typeid_t<SystemCategory> const, ::StrictEntityContext&, ::EntityRegistry&);

    MCNAPI ::StackRefResult<EcsEventDispatcher> getDispatcher();

    MCNAPI ulong getLargestStableIndexForTickingSystemIds() const;

    MCNAPI ::PlayerInteractionSystem& getPlayerInteractionSystem();

    MCNAPI std::vector<gsl::not_null<const SystemInfo*>>
           getSystemInfo(::Bedrock::typeid_t<SystemCategory> const&) const;

    MCNAPI ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId) const;

    MCNAPI ::TickingSystemId getTickingSystemIdFromIndex(ulong) const;

    MCNAPI void registerEditorOnlyTickingSystem(::TickingSystemWithInfo&&);

    MCNAPI void registerEvents(::EntityRegistry&);

    MCNAPI void registerGameOnlyMovementTickingSystem(::TickingSystemWithInfo&&);

    MCNAPI void registerGameOnlyTickingSystem(::TickingSystemWithInfo&&);

    MCNAPI void registerMovementTickingSystem(::TickingSystemWithInfo&&);

    MCNAPI void registerTickingSystem(::TickingSystemWithInfo&&);

    MCNAPI std::pair<std::function<void(TickingSystemId)>, std::function<void(TickingSystemId)>>
           setSystemInvokeCallbacks(std::function<void(TickingSystemId)>&&, std::function<void(TickingSystemId)>&&);

    MCNAPI std::pair<std::function<void()>, std::function<void()>>
           setTotalTickCallbacks(std::function<void()>&&, std::function<void()>&&);

    MCNAPI void tick(::EntityRegistry&);

    MCNAPI void tickEditor(::EntityRegistry&);

    MCNAPI void tickInitialize(::EntityRegistry&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view);

    MCNAPI void* $ctor(std::unique_ptr<IEntitySystemsCollection>, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerTickingSystem(
        ::gsl::span<const Bedrock::typeid_t<SystemCategory>>,
        std::unique_ptr<ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
    );

    MCNAPI bool $_hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const;

    MCNAPI void $tickMovementCatchup(::EntityRegistry&);

    MCNAPI void $tickMovementCorrectionReplay(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
