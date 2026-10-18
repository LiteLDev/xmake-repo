#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/ecs/systems/IEntitySystems.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/profiler/PredeclaredAnnotation.h"

// auto generated forward declare list
// clang-format off
class EcsEventDispatcher;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
class ITickingSystem;
class PlayerInteractionSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
#else // @header-generator platform
#endif // @header-generator platform
struct EntitySystemTickingMode;
#if defined(LL_PLAT_A) // @header-generator platform
struct EntitySystemsInfo;
#else // @header-generator platform
#endif // @header-generator platform
struct IEntitySystemsCollection;
#if defined(LL_PLAT_A) // @header-generator platform
struct ISystem;
#else // @header-generator platform
struct SystemCategory;
#endif // @header-generator platform
struct SystemInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct SystemTiming;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemId;
#if defined(LL_PLAT_A) // @header-generator platform
struct TickingSystemWithInfo;
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EntitySystems : public ::IEntitySystems, public ::Bedrock::EnableNonOwnerReferences {
public:
    // EntitySystems inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct GameSystemCategory;
#else // @header-generator platform
#endif // @header-generator platform
    struct EditorSystemCategory;
#if defined(LL_PLAT_A) // @header-generator platform
    struct UsedInServerPlayerMovement;
    struct UsedInClientMovementCorrections;
#else // @header-generator platform
    struct GameSystemCategory;
#endif // @header-generator platform
    struct RuntimeInitialize;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UsedInClientMovementCorrections;
    struct UsedInServerPlayerMovement;
#endif // @header-generator platform
    // clang-format on

    // EntitySystems inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct GameSystemCategory {};

#else // @header-generator platform
#endif // @header-generator platform
    struct EditorSystemCategory {};

#if defined(LL_PLAT_A) // @header-generator platform
    struct UsedInServerPlayerMovement {};

    struct UsedInClientMovementCorrections {};
#else // @header-generator platform
    struct GameSystemCategory {};
#endif // @header-generator platform

    struct RuntimeInitialize {};

#if defined(LL_PLAT_A) // @header-generator platform
    using TotalTickCallbackFunc = std::function<void()>;
#else // @header-generator platform
    struct UsedInClientMovementCorrections {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SystemInvokeCallbackFunc = std::function<void(TickingSystemId)>;
#else // @header-generator platform
    struct UsedInServerPlayerMovement {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TotalTickCallbackPair = std::pair<std::function<void()>, std::function<void()>>;
#else // @header-generator platform
    using MovementSystemCategory = ::entt::
        type_list<::EntitySystems::UsedInServerPlayerMovement, ::EntitySystems::UsedInClientMovementCorrections>;

    using SystemInvokeCallbackFunc = ::std::function<void(::TickingSystemId)>;
#endif // @header-generator platform

    using SystemInvokeCallbackPair =
#if defined(LL_PLAT_A) // @header-generator platform
        std::pair<std::function<void(TickingSystemId)>, std::function<void(TickingSystemId)>>;
#else // @header-generator platform
        ::std::pair<::std::function<void(::TickingSystemId)>, ::std::function<void(::TickingSystemId)>>;

    using SystemInvokeCallbackSig = void(::TickingSystemId);

    using TotalTickCallbackFunc = ::std::function<void()>;

    using TotalTickCallbackPair = ::std::pair<::std::function<void()>, ::std::function<void()>>;

    using TotalTickCallbackSig = void();
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInteractionSystem>>        mPlayerInteractionSystem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IEntitySystemsCollection>>       mSystems;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EcsEventDispatcher>>                   mDispatcher;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
    ::ll::TypedStorage<1, 1, bool>                                                mEnableTimingCapture;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                            mPreTotalTick;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                            mPostTotalTick;
    ::ll::TypedStorage<8, 64, ::std::function<void(::TickingSystemId)>>           mPreSystemInvoke;
    ::ll::TypedStorage<8, 64, ::std::function<void(::TickingSystemId)>>           mPostSystemInvoke;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mTickingAnnotation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    EntitySystems& operator=(EntitySystems const&);
#else // @header-generator platform
    EntitySystems();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~EntitySystems();
#else // @header-generator platform
    virtual ~EntitySystems() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode);
#else // @header-generator platform
    virtual void tickMovementCatchup(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const;
#else // @header-generator platform
    virtual void tickMovementCorrectionReplay(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickMovementCatchup(::EntityRegistry&);
#else // @header-generator platform
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickMovementCorrectionReplay(::EntityRegistry&);
    // clang-format on
#else // @header-generator platform
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EntitySystems(std::string_view);
#else // @header-generator platform
    MCAPI EntitySystems(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntitySystems(std::unique_ptr<IEntitySystemsCollection>, std::string_view);
#else // @header-generator platform
    MCAPI void registerEvents(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _singleTickCategory(::Bedrock::typeid_t<SystemCategory> const, ::EntityContext&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::pair<::std::function<void(::TickingSystemId)>, ::std::function<void(::TickingSystemId)>>
    setSystemInvokeCallbacks(
        ::std::function<void(::TickingSystemId)>&& preInvoke,
        ::std::function<void(::TickingSystemId)>&& postInvoke
    );

    MCAPI ::std::pair<::std::function<void()>, ::std::function<void()>>
    setTotalTickCallbacks(::std::function<void()>&& preTick, ::std::function<void()>&& postTick);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _singleTickCategory(::Bedrock::typeid_t<SystemCategory> const, ::StrictEntityContext&, ::EntityRegistry&);
#else // @header-generator platform
    MCAPI void tick(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StackRefResult<EcsEventDispatcher> getDispatcher();
#else // @header-generator platform
    MCAPI void tickEditor(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tickInitialize(::EntityRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view);

    MCNAPI void* $ctor(std::unique_ptr<IEntitySystemsCollection>, std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string_view name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerTickingSystem(
        ::gsl::span<const Bedrock::typeid_t<SystemCategory>>,
        std::unique_ptr<ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
#else // @header-generator platform
    MCAPI void $tickMovementCatchup(::EntityRegistry& registry);

    MCAPI void $tickMovementCorrectionReplay(::EntityRegistry& registry);

    MCAPI void $registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const;
#else // @header-generator platform
    MCAPI bool $_hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tickMovementCatchup(::EntityRegistry&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tickMovementCorrectionReplay(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
