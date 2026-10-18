#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
// clang-format on

struct ActorFactoryData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mBaseIdentifier;
    ::ll::TypedStorage<1, 1, bool> mAllowSummon;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Actor>(*)(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&)> mFactory;
    ::ll::TypedStorage<4, 8, std::optional<int>> mExperimentIndex;
    ::ll::TypedStorage<4, 4, ::ActorType> mActorType;
    ::ll::TypedStorage<4, 4, float> mWalkAnimSpeed;
    ::ll::TypedStorage<1, 1, bool> mIsAlias;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFactoryData(ActorFactoryData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorFactoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mBaseIdentifier;
    ::ll::TypedStorage<1, 1, bool>                          mAllowSummon;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Actor> (*)(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&)>
                                                   mFactory;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mExperimentIndex;
    ::ll::TypedStorage<4, 4, ::ActorType>          mActorType;
    ::ll::TypedStorage<4, 4, float>                mWalkAnimSpeed;
    ::ll::TypedStorage<1, 1, bool>                 mIsAlias;
#endif // @header-generator platform
    // NOLINTEND
};
