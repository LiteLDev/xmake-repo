#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#include "mc/world/level/storage/loot/predicates/LootItemPropertyValueCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
class PropertyComponent;
namespace Json { class Value; }
// clang-format on

class LootItemEnumPropertyValueCondition : public ::LootItemPropertyValueCondition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkbafe36;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LootItemEnumPropertyValueCondition& operator=(LootItemEnumPropertyValueCondition const&);
    LootItemEnumPropertyValueCondition(LootItemEnumPropertyValueCondition const&);
#endif // @header-generator platform
    LootItemEnumPropertyValueCondition();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemEnumPropertyValueCondition();
#else // @header-generator platform
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemCondition::ConditionType getConditionType() const;

    virtual bool _hasPropertyValue(::PropertyComponent const&) const;
#else // @header-generator platform
    virtual bool _hasPropertyValue(::PropertyComponent const& component) const /*override*/;
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
    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_hasPropertyValue(::PropertyComponent const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $_hasPropertyValue(::PropertyComponent const& component) const;
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
