#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LootItemCondition;
class PropertyComponent;
namespace Json { class Value; }
// clang-format on

class LootItemBoolPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemBoolPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootItemBoolPropertyValueCondition();

    virtual ::LootItemCondition::ConditionType getConditionType() const;

    virtual bool _hasPropertyValue(::PropertyComponent const&) const;
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
    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;

    MCNAPI bool $_hasPropertyValue(::PropertyComponent const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
