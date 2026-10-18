#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/volume/VolumeDefinitionGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/volume/VolumeEntityManager.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkPos;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityRegistry;
class LevelStorage;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkIdentifier;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePackManager;
#else // @header-generator platform
#endif // @header-generator platform
class UserEntityIdentifierComponent;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
struct VolumeDefinition;
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::VolumeDefinitionGroup> mDefinitionGroup;
    ::ll::TypedStorage<1, 1, bool>                     mVolumeFilesLoaded;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 88> mUnk6e629a;
    ::ll::UntypedStorage<1, 1>  mUnk3d4c19;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VolumeEntityManagerServer& operator=(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer(VolumeEntityManagerServer const&);
#endif // @header-generator platform
    VolumeEntityManagerServer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sendVolumeToClient(
#if defined(LL_PLAT_A) // @header-generator platform
        ::EntityContext const&,
        ::UserEntityIdentifierComponent const&,
        ::NetworkIdentifier const&,
        ::PacketSender&
#else // @header-generator platform
        ::EntityContext const&                 entity,
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::NetworkIdentifier const&             source,
        ::PacketSender&                        packetSender
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<WeakRef<EntityContext>>
           getAllVolumesOverlappingChunkPosition(::ChunkPos const&, ::DimensionType const) const;
#else // @header-generator platform
    MCNAPI ::std::vector<::WeakRef<::EntityContext>>
    getAllVolumesOverlappingChunkPosition(::ChunkPos const& pos, ::DimensionType chunkDimension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    sendAllVolumesToClient(::UserEntityIdentifierComponent const&, ::NetworkIdentifier const&, ::PacketSender&) const;
#else // @header-generator platform
    MCNAPI void sendAllVolumesToClient(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::NetworkIdentifier const&             source,
        ::PacketSender&                        packetSender
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};
