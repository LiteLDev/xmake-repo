#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct EventResponseBase; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DeprecatedDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                                 mProbability;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                                mCondition;
    ::ll::TypedStorage<4, 4, int>                                                                   mType;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger>                             mTrigger;
    ::ll::UntypedStorage<8, 24>                                                                     mChildren;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SharedTypes::Legacy::EventResponseBase>>> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                     mProbability;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>    mCondition;
    ::ll::TypedStorage<4, 4, int>                                       mType;
    ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>>
                                                                                                          mChildren;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SharedTypes::Legacy::EventResponseBase>>> mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    DeprecatedDefinitionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeprecatedDefinitionEvent(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const&);

    MCAPI ~DeprecatedDefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
