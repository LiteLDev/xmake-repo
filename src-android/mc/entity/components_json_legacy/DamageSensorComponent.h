#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/DealsDamage.h"
#include "mc/entity/components_json_legacy/DamageSensorTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
struct VariantParameterList;
// clang-format on

class DamageSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mDamageAmount;
    ::ll::TypedStorage<1, 1, bool>                              mDamageIsFatal;
    ::ll::TypedStorage<4, 4, int>                               mDamageCause;
    ::ll::TypedStorage<8, 24, std::vector<DamageSensorTrigger>> mTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::Legacy::DealsDamage _recordDamageAndCheckIfDealt(
        ::Actor&,
        ::Actor*,
        ::SharedTypes::Legacy::ActorDamageCause const&,
        ::Actor*,
        float,
        float,
        ::VariantParameterList,
        bool
    );

    MCNAPI float getAdjustedDamage(::Actor&, ::ActorDamageSource const&, float) const;

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
    );

    MCNAPI ::SharedTypes::Legacy::DealsDamage recordGenericDamageAndCheckIfDealt(
        ::Actor&,
        ::ActorDamageSource const&,
        float,
        float,
        ::VariantParameterList,
        bool
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fillParameters(::VariantParameterList&, ::Actor&, ::Actor*, ::Actor*);
    // NOLINTEND
};
