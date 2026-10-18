#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct SneezeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<4, 4, float>                                  mDropItemChance;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mLootTable;
    ::ll::TypedStorage<8, 24, std::string>                           mSound;
    ::ll::TypedStorage<8, 24, std::string>                           mPrepareSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         mLootTable;
    ::ll::TypedStorage<8, 32, ::std::string>                         mSound;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPrepareSound;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mPrepareTime;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mEntityTypes;
    ::ll::TypedStorage<4, 4, float>                                  mWithinRadius;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    SneezeGoalDefinition& operator=(SneezeGoalDefinition const&);
    SneezeGoalDefinition(SneezeGoalDefinition const&);
#else // @header-generator platform
    SneezeGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_30::SneezeGoalDefinition& operator=(::SharedTypes::v1_26_30::SneezeGoalDefinition&&);
#else // @header-generator platform
    MCAPI SneezeGoalDefinition(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::SneezeGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::SneezeGoalDefinition& operator=(::SharedTypes::v1_26_30::SneezeGoalDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SneezeGoalDefinition();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::SneezeGoalDefinition&
    operator=(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::SneezeGoalDefinition const&) const;

    MCAPI ~SneezeGoalDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
