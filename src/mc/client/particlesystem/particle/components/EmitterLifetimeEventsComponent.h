#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/DistanceEvents.h"
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct DistanceEvents; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class EmitterLifetimeEventsComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mCreationEvents;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mExpirationEvents;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::vector<HashedString>>>> mTimelineEvents;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, std::vector<HashedString>>>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, std::vector<ParticleSystem::DistanceEvents>> mLoopingTravelDistanceEvents;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EmitterLifetimeEventsComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleTimelineEvents(::ParticleSystem::ComponentAccessParticleEmitter&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const, std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    virtual void handleTravelDistanceEvents(::ParticleSystem::ComponentAccessParticleEmitter&, float, float);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _parseEvent(::ConstDeserializeDataParams const&, std::vector<HashedString>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const&);

    MCNAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&);

    MCNAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&);

    MCNAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>
    );

    MCNAPI void $handleTravelDistanceEvents(::ParticleSystem::ComponentAccessParticleEmitter&, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EmitterLifetimeEventsComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mCreationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mExpirationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::chrono::nanoseconds, ::std::vector<::HashedString>>>>
                                                                                                mTimelineEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::std::vector<::HashedString>>>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::DistanceEvents>> mLoopingTravelDistanceEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter) /*override*/;

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter) /*override*/;

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    ) /*override*/;

    virtual void handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _parseEvent(::ConstDeserializeDataParams const& deserializeDataParams, ::std::vector<::HashedString>& eventList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    MCAPI void $handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND
};
#else // @header-generator platform
class EmitterLifetimeEventsComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem
