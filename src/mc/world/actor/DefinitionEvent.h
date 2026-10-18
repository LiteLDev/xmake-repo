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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                      mProbability;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>          mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>      mType;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger>       mTrigger;
    ::ll::UntypedStorage<8, 24>                          mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                             mProbability;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                 mCondition;
    ::ll::TypedStorage<4, 4, ::DefinitionEventType>             mType;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>              mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::EventResponseCollection>        mResponses;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionEvent& operator=(DefinitionEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DefinitionEvent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DefinitionEvent(::DefinitionEvent const&);
#else // @header-generator platform
    MCAPI DefinitionEvent(::DefinitionEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void evaluateEvent(::RenderParams&, std::vector<DefinitionModifier>&) const;
#else // @header-generator platform
    MCAPI void evaluateEvent(::RenderParams& params, ::std::vector<::DefinitionModifier>& modifications) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DefinitionEvent&
    fromSharedType(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const&);
#else // @header-generator platform
    MCAPI ::DefinitionEvent&
    fromSharedType(::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent const& definitionEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent getSharedType() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent getSharedType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DefinitionEvent();
#else // @header-generator platform
    MCAPI ~DefinitionEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DefinitionEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::DefinitionEvent const&);
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
