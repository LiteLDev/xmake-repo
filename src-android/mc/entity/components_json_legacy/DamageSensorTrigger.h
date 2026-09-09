#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/DealsDamage.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct DamageSensorTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mOnDamageSound;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>               mOnDamage;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, float>                                   mDamageMultipler;
    ::ll::TypedStorage<4, 4, float>                                   mDamageModifier;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::DealsDamage>      mDealsDamage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setCause(std::string const&);

    MCNAPI void setDealsDamage(std::string const&);

    MCNAPI ~DamageSensorTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
