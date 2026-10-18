#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class LootItemCondition;
class PropertyComponent;
namespace Json { class Value; }
// clang-format on

class LootItemIntPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkdd5ea9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LootItemIntPropertyValueCondition& operator=(LootItemIntPropertyValueCondition const&);
    LootItemIntPropertyValueCondition(LootItemIntPropertyValueCondition const&);
#endif // @header-generator platform
    LootItemIntPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemIntPropertyValueCondition();
#else // @header-generator platform
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemCondition::ConditionType getConditionType() const;

    virtual bool _hasPropertyValue(::PropertyComponent const&) const;
#else // @header-generator platform
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LootItemCondition> deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI bool $_hasPropertyValue(::PropertyComponent const& component) const;

#endif // @header-generator platform
    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_hasPropertyValue(::PropertyComponent const&) const;
    // NOLINTEND
#else // @header-generator platform
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
