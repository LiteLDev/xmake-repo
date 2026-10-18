#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
class Block;
class BlockPos;
class BlockSource;
class ILevelStorageManagerConnector;
class Packet;
class Player;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
struct NetworkIdentifierWithSubId;
// clang-format on

class IDimension {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IDimension();
#else // @header-generator platform
    virtual ~IDimension() = default;
#endif // @header-generator platform

    virtual bool isNaturalDimension() const = 0;

    virtual ::DimensionType getDimensionId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*) = 0;
#else // @header-generator platform
    virtual void sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*) = 0;
#else // @header-generator platform
    virtual void sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except) = 0;
#endif // @header-generator platform

    virtual void flushLevelChunkGarbageCollector() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&) = 0;

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;
#else // @header-generator platform
    virtual void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector) = 0;
#endif // @header-generator platform

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const = 0;
#else // @header-generator platform
    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPlayer(::brstd::function_ref<bool (Player&)>) const = 0;
#else // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;
#else // @header-generator platform
    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const = 0;

    virtual ::Actor* fetchEntity(::ActorUniqueID actorID, bool getRemoved) const = 0;
#endif // @header-generator platform

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildPlayersForPositionPacket(::BlockPos const&, ::Player const*, std::vector<NetworkIdentifierWithSubId>&) const = 0;
#else // @header-generator platform
    virtual void buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePoiBlockStateChange(::BlockPos, ::Block const&, ::Block const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
