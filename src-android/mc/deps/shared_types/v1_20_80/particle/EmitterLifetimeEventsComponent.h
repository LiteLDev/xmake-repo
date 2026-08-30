#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/DistanceEvent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                mCreationEvents;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                mExpirationEvents;
    ::ll::TypedStorage<8, 24, std::map<float, SharedTypes::v1_20_80::VectorEvents>> mTimelineEvents;
    ::ll::TypedStorage<8, 24, std::map<float, SharedTypes::v1_20_80::VectorEvents>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_80::DistanceEvent>>    mLoopingTravelDistanceEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterLifetimeEventsComponent();

    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
