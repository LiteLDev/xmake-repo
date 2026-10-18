#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_20_80/particle/DistanceEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_20_80 { struct DistanceEvent; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                mCreationEvents;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                mExpirationEvents;
    ::ll::TypedStorage<8, 24, std::map<float, SharedTypes::v1_20_80::VectorEvents>> mTimelineEvents;
    ::ll::TypedStorage<8, 24, std::map<float, SharedTypes::v1_20_80::VectorEvents>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_80::DistanceEvent>>    mLoopingTravelDistanceEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                    mCreationEvents;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents>                    mExpirationEvents;
    ::ll::TypedStorage<8, 16, ::std::map<float, ::SharedTypes::v1_20_80::VectorEvents>> mTimelineEvents;
    ::ll::TypedStorage<8, 16, ::std::map<float, ::SharedTypes::v1_20_80::VectorEvents>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_80::DistanceEvent>>    mLoopingTravelDistanceEvents;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EmitterLifetimeEventsComponent();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EmitterLifetimeEventsComponent();

    virtual ::HashedString const& getIdentifier() const;
#else // @header-generator platform
    virtual ::HashedString const& getIdentifier() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI EmitterLifetimeEventsComponent(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& NameID();
#else // @header-generator platform
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getIdentifier() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getIdentifier() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
