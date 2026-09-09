#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerBlockProperty.h"
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
// clang-format on

struct StartGamePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    StartGamePacketPayload& operator=(StartGamePacketPayload const&);
    StartGamePacketPayload(StartGamePacketPayload const&);

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI std::string getMultiplayerCorrelationId() const;

    MCNAPI ::StartGamePacketPayload& operator=(::StartGamePacketPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    );
    // NOLINTEND
};
