#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionEventType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/response/ActorEventResponseCollection.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
struct VariantParameterListConst;
// clang-format on

class ActorDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>             mFilter;
    ::ll::TypedStorage<8, 24, std::string>                    mName;
    ::ll::TypedStorage<4, 4, ::ActorDefinitionEventType>      mType;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mGroups;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mRemoveGroups;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mTrigger;
    ::ll::UntypedStorage<8, 24>                               mChildren;
    ::ll::TypedStorage<8, 24, ::ActorEventResponseCollection> mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionEvent();

    MCNAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);

    MCNAPI void
    _evaluateGroups(::Actor&, std::vector<ActorDefinitionModifier>&, ::VariantParameterListConst const&) const;

    MCNAPI void
    evaluateGroups(::Actor&, std::vector<ActorDefinitionModifier>&, ::VariantParameterListConst const&) const;

    MCNAPI ::ActorDefinitionEventType getType() const;

    MCNAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);

    MCNAPI void setName(std::string);

    MCNAPI ~ActorDefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorDefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
