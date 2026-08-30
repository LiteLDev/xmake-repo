#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct AdmireItemGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                       mAdmireItemSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mSoundInterval;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStart;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnAdmireItemStop;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemGoalDefinition& operator=(AdmireItemGoalDefinition const&);
    AdmireItemGoalDefinition(AdmireItemGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_26_20::AdmireItemGoalDefinition&
    operator=(::SharedTypes::v1_26_20::AdmireItemGoalDefinition&&);

    MCNAPI ~AdmireItemGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
