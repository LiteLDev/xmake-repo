#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class CompoundTag;
class DimensionHeightRange;
class IAddActorEntityProxy;
class LevelStorage;
class Vec3;
// clang-format on

class PlayerLimboActorManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::vector<std::unique_ptr<CompoundTag>>>> mOwnedActorsDimensionTransferLimbo;
    ::ll::UntypedStorage<8, 24> mLevelStorage;
    ::ll::UntypedStorage<8, 24> mActorManager;
    ::ll::UntypedStorage<8, 24> mActorFactory;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLimboActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerLimboActorManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorFactory>>
    );

    MCNAPI void clearOwnedEntityLimboForPlayer(::ActorUniqueID);

    MCNAPI void loadAllOwnedLimboActors();

    MCNAPI ::Actor*
    processOwnedAgentForPlayer(::CompoundTag&, ::IAddActorEntityProxy&, ::DimensionHeightRange const&, ::Vec3 const&);

    MCNAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID, ::Actor&);

    MCNAPI ~PlayerLimboActorManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(::ActorUniqueID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorFactory>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
