#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/volume/VolumeDefinitionGroup.h"
#include "mc/volume/VolumeEntityManager.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class EntityContext;
class EntityRegistry;
class LevelStorage;
class NetworkIdentifier;
class PacketSender;
class ResourcePackManager;
class UserEntityIdentifierComponent;
struct DimensionType;
struct VolumeDefinition;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManagerServer : public ::VolumeEntityManager {
public:
    // VolumeEntityManagerServer inner types define
    enum class CreateVolumeResult : int {
        Success               = 0,
        EntityCreationFailed  = 1,
        ExceededVolumeLimit   = 2,
        DefinitionDoesntExist = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::VolumeDefinitionGroup> mDefinitionGroup;
    ::ll::TypedStorage<1, 1, bool>                     mVolumeFilesLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeEntityManagerServer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sendVolumeToClient(
        ::EntityContext const&,
        ::UserEntityIdentifierComponent const&,
        ::NetworkIdentifier const&,
        ::PacketSender&
    ) const;

    MCNAPI std::vector<WeakRef<EntityContext>>
           getAllVolumesOverlappingChunkPosition(::ChunkPos const&, ::DimensionType const) const;

    MCNAPI void
    sendAllVolumesToClient(::UserEntityIdentifierComponent const&, ::NetworkIdentifier const&, ::PacketSender&) const;
    // NOLINTEND
};
