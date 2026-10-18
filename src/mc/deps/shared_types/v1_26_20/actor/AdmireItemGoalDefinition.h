#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_20 {

struct AdmireItemGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                       mAdmireItemSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAdmireItemSound;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundInterval;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStart;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStop;
#else // @header-generator platform
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStart;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStop;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemGoalDefinition& operator=(AdmireItemGoalDefinition const&);
    AdmireItemGoalDefinition(AdmireItemGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AdmireItemGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
#else // @header-generator platform
    MCAPI AdmireItemGoalDefinition(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AdmireItemGoalDefinition();
#else // @header-generator platform
    MCAPI ~AdmireItemGoalDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);
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

} // namespace SharedTypes::v1_26_20
