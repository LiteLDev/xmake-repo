#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class PropertyComponent;
class Random;
// clang-format on

class LootItemPropertyValueCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mPropertyName;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootItemPropertyValueCondition();

    virtual bool applies(::Random&, ::LootTableContext&);

    virtual bool _hasPropertyValue(::PropertyComponent const&) const = 0;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
