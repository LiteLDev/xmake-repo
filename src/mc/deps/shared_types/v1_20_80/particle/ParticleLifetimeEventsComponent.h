#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents> mCreationEvents;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::VectorEvents> mExpirationEvents;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<float, SharedTypes::v1_20_80::VectorEvents>>> mTimelineEvents;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::std::optional<::std::unordered_map<float, ::SharedTypes::v1_20_80::VectorEvents>>>
        mTimelineEvents;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleLifetimeEventsComponent();

    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleLifetimeEventsComponent const&) const;
#else // @header-generator platform
    virtual ::HashedString const& getIdentifier() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::HashedString const& NameID();
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
