#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IClientInstance;
// clang-format on

class ProfanityFilterSystem : public ::ITickingSystem, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsRemoteProfanityFilterEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mIsLocalProfanityFilterEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfanityFilterSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfanityFilterSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfanityFilterSystem(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
