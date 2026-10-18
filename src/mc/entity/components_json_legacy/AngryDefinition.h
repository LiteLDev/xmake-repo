#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AngryComponent;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mDuration;
    ::ll::TypedStorage<4, 4, int>                            mDurationDelta;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                            mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>            mBroadcastFilter;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>     mOnCalm;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mBroadcastTargets;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>            mSubjectFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                 mAngrySound;
    ::ll::TypedStorage<4, 8, ::FloatRange>                   mSoundInterval;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AngryDefinition();
#else // @header-generator platform
    MCAPI void addBroadcastTargetByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBroadcastTargetByName(std::string const&);
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::AngryComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::AngryComponent&) const;

    MCNAPI void uninitialize(::EntityContext&, ::AngryComponent&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::AngryComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AngryDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AngryDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
