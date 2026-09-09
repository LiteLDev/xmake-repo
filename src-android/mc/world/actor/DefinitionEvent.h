#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/DefinitionEventType.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/response/EventResponseCollection.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct DefinitionModifier;
namespace SharedTypes::v1_26_20::BlockDefinition { struct DeprecatedDefinitionEvent; }
// clang-format on

class DefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mProbability;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>          mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>      mType;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger>       mTrigger;
    ::ll::UntypedStorage<8, 24>                          mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection> mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionEvent& operator=(DefinitionEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionEvent(::DefinitionEvent const&);

    MCNAPI void evaluateEvent(::RenderParams&, std::vector<DefinitionModifier>&) const;

    MCNAPI ::DefinitionEvent&
    fromSharedType(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const&);

    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent getSharedType() const;

    MCNAPI ~DefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
