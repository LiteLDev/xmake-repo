#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemRandomChanceWithLootingCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mChance;
    ::ll::TypedStorage<4, 4, float> mLootingMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemRandomChanceWithLootingCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootItemRandomChanceWithLootingCondition();

    virtual bool applies(::Random&, ::LootTableContext&);

    virtual ::LootItemCondition::ConditionType getConditionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getChance() const;

    MCNAPI float getLootingMultiplier() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LootItemCondition> deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random&, ::LootTableContext&);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
