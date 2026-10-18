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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mOnDamageSound;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>               mOnDamage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mOnDamageSound;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>              mOnDamage;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, float>                                   mDamageMultipler;
    ::ll::TypedStorage<4, 4, float>                                   mDamageModifier;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::DealsDamage>      mDealsDamage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCause(std::string const&);
#else // @header-generator platform
    MCAPI void setCause(::std::string const& causeName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDealsDamage(std::string const&);
#else // @header-generator platform
    MCAPI void setDealsDamage(::std::string const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DamageSensorTrigger();
#else // @header-generator platform
    MCAPI ~DamageSensorTrigger();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
