#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AngryComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mDuration;
    ::ll::TypedStorage<4, 4, int>                        mDurationDelta;
    ::ll::TypedStorage<1, 1, bool>                       mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                       mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                       mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                       mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                        mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mBroadcastFilter;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>  mOnCalm;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mBroadcastTargets;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mSubjectFilter;
    ::ll::TypedStorage<8, 24, std::string>               mAngrySound;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mSoundInterval;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AngryDefinition();

    MCNAPI void addBroadcastTargetByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::AngryComponent&) const;

    MCNAPI void uninitialize(::EntityContext&, ::AngryComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AngryDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
