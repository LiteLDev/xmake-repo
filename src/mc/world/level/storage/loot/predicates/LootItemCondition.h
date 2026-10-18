#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemCondition {
public:
    // LootItemCondition inner types define
    enum class ConditionType : int {
        KilledByPlayer                 = 0,
        KilledByPlayerOrPets           = 1,
        KilledByActor                  = 2,
        ActorKilled                    = 3,
        RandomChance                   = 4,
        RandomDifficultyChance         = 5,
        RandomChanceWithLooting        = 6,
        RandomRegionalDifficultyChance = 7,
        HasMarkVariant                 = 8,
        HasVariant                     = 9,
        MatchTool                      = 10,
        DamagedByActor                 = 11,
        PassengerOfActor               = 12,
        IsBaby                         = 13,
        ActorFilter                    = 14,
        HasPropertyCondition           = 15,
        BoolPropertyValueCondition     = 16,
        IntPropertyValueCondition      = 17,
        FloatPropertyValueCondition    = 18,
        EnumPropertyValueCondition     = 19,
        CurrentBiomeHasTag             = 20,
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemCondition();
#else // @header-generator platform
    virtual ~LootItemCondition() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext&) = 0;
#else // @header-generator platform
    virtual bool applies(::Random& random, ::LootTableContext& context) = 0;
#endif // @header-generator platform

    virtual ::LootItemCondition::ConditionType getConditionType() const = 0;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object, bool);
#endif // @header-generator platform
    // NOLINTEND
};
