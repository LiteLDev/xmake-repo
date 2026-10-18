#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemRandomDifficultyChanceCondition : public ::LootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 16> mChances;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 16> mUnkf0e81e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LootItemRandomDifficultyChanceCondition& operator=(LootItemRandomDifficultyChanceCondition const&);
    LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition const&);
#endif // @header-generator platform
    LootItemRandomDifficultyChanceCondition();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemRandomDifficultyChanceCondition();
#else // @header-generator platform
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext&);

    virtual ::LootItemCondition::ConditionType getConditionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::DenseEnumMap<SharedTypes::Legacy::Difficulty, float, (SharedTypes::Legacy::Difficulty)4> const&
    getChances() const;
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
    MCNAPI bool $applies(::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCNAPI bool $applies(::Random& random, ::LootTableContext& context);
#endif // @header-generator platform

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;
#if defined(LL_PLAT_A) // @header-generator platform
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
