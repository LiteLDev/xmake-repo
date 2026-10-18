#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mPropertyName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnke360f1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LootItemPropertyValueCondition& operator=(LootItemPropertyValueCondition const&);
    LootItemPropertyValueCondition(LootItemPropertyValueCondition const&);
#endif // @header-generator platform
    LootItemPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemPropertyValueCondition();
#else // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext&);

    virtual bool _hasPropertyValue(::PropertyComponent const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $applies(::Random&, ::LootTableContext&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $applies(::Random&, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
