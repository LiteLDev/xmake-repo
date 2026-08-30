#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ParticleSystem {

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

} // namespace ParticleSystem
