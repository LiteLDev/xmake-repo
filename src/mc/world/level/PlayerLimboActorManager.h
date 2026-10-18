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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::vector<std::unique_ptr<CompoundTag>>>> mOwnedActorsDimensionTransferLimbo;
    ::ll::UntypedStorage<8, 24> mLevelStorage;
    ::ll::UntypedStorage<8, 24> mActorManager;
    ::ll::UntypedStorage<8, 24> mActorFactory;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::vector<::std::unique_ptr<::CompoundTag>>>>
                                                                                   mOwnedActorsDimensionTransferLimbo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> const> mLevelStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager>>       mActorManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> const> mActorFactory;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLimboActorManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerLimboActorManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorFactory>>
#else // @header-generator platform
    MCAPI PlayerLimboActorManager(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearOwnedEntityLimboForPlayer(::ActorUniqueID);
#else // @header-generator platform
    MCAPI void clearOwnedEntityLimboForPlayer(::ActorUniqueID playerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadAllOwnedLimboActors();
#else // @header-generator platform
    MCAPI void loadAllOwnedLimboActors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor*
    processOwnedAgentForPlayer(::CompoundTag&, ::IAddActorEntityProxy&, ::DimensionHeightRange const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI ::Actor* processOwnedAgentForPlayer(
        ::CompoundTag&                agentCompoundTag,
        ::IAddActorEntityProxy&       addActorEntityProxy,
        ::DimensionHeightRange const& heightRange,
        ::Vec3 const&                 spawnPosition
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID, ::Actor&);
#else // @header-generator platform
    MCAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID playerUniqueID, ::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerLimboActorManager();
#else // @header-generator platform
    MCAPI ~PlayerLimboActorManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(::ActorUniqueID);
#else // @header-generator platform
    MCAPI static ::std::string getOwnedEntityLimboStorageKeyForPlayer(::ActorUniqueID playerId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorFactory>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager,
        ::Bedrock::NotNullNonOwnerPtr<::ActorFactory> actorFactory
#endif // @header-generator platform
    );
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
