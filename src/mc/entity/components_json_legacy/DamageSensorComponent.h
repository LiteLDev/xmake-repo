#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/DealsDamage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/DamageSensorTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DamageSensorTrigger;
#endif // @header-generator platform
struct VariantParameterList;
// clang-format on

class DamageSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mDamageAmount;
    ::ll::TypedStorage<1, 1, bool>                              mDamageIsFatal;
    ::ll::TypedStorage<4, 4, int>                               mDamageCause;
    ::ll::TypedStorage<8, 24, std::vector<DamageSensorTrigger>> mTriggers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                   mDamageAmount;
    ::ll::TypedStorage<1, 1, bool>                                  mDamageIsFatal;
    ::ll::TypedStorage<4, 4, int>                                   mDamageCause;
    ::ll::TypedStorage<8, 24, ::std::vector<::DamageSensorTrigger>> mTriggers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::DealsDamage _recordDamageAndCheckIfDealt(
        ::Actor&,
        ::Actor*,
        ::SharedTypes::Legacy::ActorDamageCause const&,
        ::Actor*,
        float,
        float,
        ::VariantParameterList,
        bool
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::DealsDamage _recordDamageAndCheckIfDealt(
        ::Actor&                                       owner,
        ::Actor*                                       sender,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::Actor*                                       damager,
        float                                          amount,
        float                                          preDamageHealth,
        ::VariantParameterList                         parameters,
        bool                                           willTrigger
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAdjustedDamage(::Actor&, ::ActorDamageSource const&, float) const;
#else // @header-generator platform
    MCAPI float getAdjustedDamage(::Actor& owner, ::ActorDamageSource const& source, float amount) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getCause() const;

    MCNAPI bool isFatal() const;

    MCNAPI ::SharedTypes::Legacy::DealsDamage
    recordBlockDamageAndCheckIfDealt(::Actor&, ::SharedTypes::Legacy::ActorDamageCause, float, ::BlockPos);

    MCNAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&,
        ::Actor*,
        ::SharedTypes::Legacy::ActorDamageCause,
        float,
        ::VariantParameterList
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::DealsDamage recordBlockDamageAndCheckIfDealt(
        ::Actor&                                owner,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        float                                   amount,
        ::BlockPos                              standingOnPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&,
        ::ActorDamageSource const&,
        float,
        float,
        ::VariantParameterList,
        bool
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&                   owner,
        ::ActorDamageSource const& source,
        float                      amount,
        float                      preDamageHealth,
        ::VariantParameterList     parameters,
        bool                       willTrigger
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _fillParameters(::VariantParameterList&, ::Actor&, ::Actor*, ::Actor*);
#else // @header-generator platform
    MCAPI static void
    _fillParameters(::VariantParameterList& inOutParameters, ::Actor& owner, ::Actor* sender, ::Actor* damager);
#endif // @header-generator platform
    // NOLINTEND
};
