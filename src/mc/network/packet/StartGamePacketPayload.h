#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ServerBlockProperty.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkPermissions.h"
#include "mc/platform/UUID.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"
#include "mc/world/actor/player/SyncedPlayerMovementSettings.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelSettings.h"

// auto generated forward declare list
// clang-format off
class BlockDefinitionGroup;
struct PlayerMovementSettings;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ServerBlockProperty;
#endif // @header-generator platform
// clang-format on

struct StartGamePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 1112, ::LevelSettings> mSettings;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<4, 4, ::GameType> mEntityGameType;
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 8, ::Vec2> mRot;
    ::ll::TypedStorage<8, 24, std::string> mLevelId;
    ::ll::TypedStorage<8, 24, std::string> mLevelName;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mTemplateContentIdentity;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mWorldTemplateId;
    ::ll::TypedStorage<1, 1, bool> mIsTrial;
    ::ll::UntypedStorage<4, 12> mMovementSettings;
    ::ll::TypedStorage<8, 8, ulong> mLevelCurrentTime;
    ::ll::TypedStorage<4, 4, int> mEnchantmentSeed;
    ::ll::TypedStorage<8, 24, std::string> mMultiplayerCorrelationId;
    ::ll::TypedStorage<1, 1, bool> mEnableItemStackNetManager;
    ::ll::TypedStorage<8, 24, std::string> mServerVersion;
    ::ll::TypedStorage<8, 32, ::CompoundTag> mPlayerPropertyData;
    ::ll::TypedStorage<8, 8, ulong> mServerBlockTypeRegistryChecksum;
    ::ll::TypedStorage<1, 1, bool> mServerEnabledClientSideGeneration;
    ::ll::TypedStorage<1, 1, bool> mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions> mNetworkPermissions;
    ::ll::TypedStorage<8, 24, std::vector<ServerBlockProperty>> mBlockProperties;
    ::ll::TypedStorage<8, 320, std::optional<ServerConfiguration::ServerConfigurationJoinInfo>> mServerConfigurationJoinInfo;
    ::ll::TypedStorage<8, 96, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 1344, ::LevelSettings>                    mSettings;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                      mRuntimeId;
    ::ll::TypedStorage<4, 4, ::GameType>                            mEntityGameType;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                mRot;
    ::ll::TypedStorage<8, 32, ::std::string>                        mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>                        mLevelName;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                    mTemplateContentIdentity;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                          mWorldTemplateId;
    ::ll::TypedStorage<1, 1, bool>                                  mIsTrial;
    ::ll::TypedStorage<4, 8, ::SyncedPlayerMovementSettings>        mMovementSettings;
    ::ll::TypedStorage<8, 8, uint64>                                mLevelCurrentTime;
    ::ll::TypedStorage<4, 4, int>                                   mEnchantmentSeed;
    ::ll::TypedStorage<8, 32, ::std::string>                        mMultiplayerCorrelationId;
    ::ll::TypedStorage<1, 1, bool>                                  mEnableItemStackNetManager;
    ::ll::TypedStorage<8, 32, ::std::string>                        mServerVersion;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                        mPlayerPropertyData;
    ::ll::TypedStorage<8, 8, uint64>                                mServerBlockTypeRegistryChecksum;
    ::ll::TypedStorage<1, 1, bool>                                  mServerEnabledClientSideGeneration;
    ::ll::TypedStorage<1, 1, bool>                                  mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>                  mNetworkPermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ServerBlockProperty>> mBlockProperties;
    ::ll::TypedStorage<8, 384, ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo>>
                                                                      mServerConfigurationJoinInfo;
    ::ll::TypedStorage<8, 128, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StartGamePacketPayload& operator=(StartGamePacketPayload const&);
    StartGamePacketPayload(StartGamePacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StartGamePacketPayload(
        ::LevelSettings const&,
        ::ActorUniqueID,
        ::ActorRuntimeID,
        ::GameType,
        bool const,
        ::Vec3 const&,
        ::Vec2 const&,
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        std::string const&,
        ::BlockDefinitionGroup const&,
        bool const,
        ::CompoundTag,
        ::PlayerMovementSettings const&,
        std::string const&,
        ::mce::UUID const&,
        std::optional<ServerConfiguration::ServerConfigurationJoinInfo> const&,
        ::Social::Events::ServerTelemetryData const&,
        ulong const,
        int,
        ulong const
#else // @header-generator platform
    MCAPI StartGamePacketPayload();

    MCAPI StartGamePacketPayload(::StartGamePacketPayload&&);

    MCAPI StartGamePacketPayload(
        ::LevelSettings const&                                                     settings,
        ::ActorUniqueID                                                            entityId,
        ::ActorRuntimeID                                                           runtimeId,
        ::GameType                                                                 entityGameType,
        bool                                                                       enableItemStackNetManager,
        ::Vec3 const&                                                              pos,
        ::Vec2 const&                                                              rot,
        ::std::string const&                                                       levelId,
        ::std::string const&                                                       levelName,
        ::ContentIdentity const&                                                   premiumTemplateContentIdentity,
        ::std::string const&                                                       multiplayerCorrelationId,
        ::BlockDefinitionGroup const&                                              blockDefinitionGroup,
        bool                                                                       isTrial,
        ::CompoundTag                                                              playerPropertyData,
        ::PlayerMovementSettings const&                                            movementSettings,
        ::std::string const&                                                       serverVersion,
        ::mce::UUID const&                                                         worldTemplateId,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serverTelemetryData,
        uint64                                                                     levelCurrentTime,
        int                                                                        enchantmentSeed,
        uint64                                                                     blockTypeRegistryChecksum
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getMultiplayerCorrelationId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getMultiplayerCorrelationId() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StartGamePacketPayload& operator=(::StartGamePacketPayload&&);
#else // @header-generator platform
    MCAPI ~StartGamePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::LevelSettings const&,
        ::ActorUniqueID,
        ::ActorRuntimeID,
        ::GameType,
        bool const,
        ::Vec3 const&,
        ::Vec2 const&,
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        std::string const&,
        ::BlockDefinitionGroup const&,
        bool const,
        ::CompoundTag,
        ::PlayerMovementSettings const&,
        std::string const&,
        ::mce::UUID const&,
        std::optional<ServerConfiguration::ServerConfigurationJoinInfo> const&,
        ::Social::Events::ServerTelemetryData const&,
        ulong const,
        int,
        ulong const
#else // @header-generator platform
    MCAPI void* $ctor();

    MCAPI void* $ctor(::StartGamePacketPayload&&);

    MCAPI void* $ctor(
        ::LevelSettings const&                                                     settings,
        ::ActorUniqueID                                                            entityId,
        ::ActorRuntimeID                                                           runtimeId,
        ::GameType                                                                 entityGameType,
        bool                                                                       enableItemStackNetManager,
        ::Vec3 const&                                                              pos,
        ::Vec2 const&                                                              rot,
        ::std::string const&                                                       levelId,
        ::std::string const&                                                       levelName,
        ::ContentIdentity const&                                                   premiumTemplateContentIdentity,
        ::std::string const&                                                       multiplayerCorrelationId,
        ::BlockDefinitionGroup const&                                              blockDefinitionGroup,
        bool                                                                       isTrial,
        ::CompoundTag                                                              playerPropertyData,
        ::PlayerMovementSettings const&                                            movementSettings,
        ::std::string const&                                                       serverVersion,
        ::mce::UUID const&                                                         worldTemplateId,
        ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo> const& serverJoinInfo,
        ::Social::Events::ServerTelemetryData const&                               serverTelemetryData,
        uint64                                                                     levelCurrentTime,
        int                                                                        enchantmentSeed,
        uint64                                                                     blockTypeRegistryChecksum
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
