#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/saveddata/maps/ClientTerrainPixel.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/saveddata/maps/MapDecoration.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockSource;
class CompoundTag;
class ItemStack;
class Level;
class LevelStorage;
class MapDecoration;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class MapItemTrackedActor;
#endif // @header-generator platform
class Packet;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class SpinLockImpl;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ClientTerrainPixel;
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

class MapItemSavedData {
public:
    // MapItemSavedData inner types declare
    // clang-format off
    struct ChunkBounds;
#if defined(LL_PLAT_A) // @header-generator platform
    struct MapDecorationTypeAndRotation;
#else // @header-generator platform
#endif // @header-generator platform
    struct MapDecorationContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MapDecorationTypeAndRotation;
#endif // @header-generator platform
    // clang-format on

    // MapItemSavedData inner types define
    struct ChunkBounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> x0;
        ::ll::TypedStorage<4, 4, uint> z0;
        ::ll::TypedStorage<4, 4, uint> x1;
        ::ll::TypedStorage<4, 4, uint> z1;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct MapDecorationTypeAndRotation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>    type;
        ::ll::TypedStorage<4, 4, int> rotation;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct MapDecorationContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 1>    type;
        ::ll::TypedStorage<4, 4, int> x;
        ::ll::TypedStorage<4, 4, int> y;
        ::ll::TypedStorage<4, 4, int> rot;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::MapDecoration::Type> type;
        ::ll::TypedStorage<4, 4, int>                   x;
        ::ll::TypedStorage<4, 4, int>                   y;
        ::ll::TypedStorage<4, 4, int>                   rot;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using DecorationCollection = std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>>;
#else // @header-generator platform
    struct MapDecorationTypeAndRotation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MapDecoration::Type> type;
        ::ll::TypedStorage<4, 4, int>                   rotation;
        // NOLINTEND
    };

    using DecorationCollection =
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                              mUpdateInterval;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mMapId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mParentMapId;
    ::ll::TypedStorage<1, 1, bool>                                               mIsFullyExplored;
    ::ll::TypedStorage<1, 1, bool>                                               mPreviewIncomplete;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mOrigin;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                    mDimension;
    ::ll::TypedStorage<1, 1, schar>                                              mScale;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                                 mPixels;
    ::ll::TypedStorage<8, 24, std::vector<ClientTerrainPixel>>                   mClientPixels;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<MapItemTrackedActor>>> mTrackedEntities;
    ::ll::TypedStorage<1, 1, bool>                                               mUnlimitedTracking;
    ::ll::TypedStorage<1, 1, bool>                                               mDirtyForSave;
    ::ll::TypedStorage<1, 1, bool>                                               mDirtyPixelData;
    ::ll::TypedStorage<1, 1, bool>                                               mLocked;
    ::ll::UntypedStorage<8, 24>                                                  mDecorations;
    ::ll::TypedStorage<1, 1, bool>                                               mHasDirtyClientPixels;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpinLockImpl>>                      mClientSamplingLock;
    ::ll::TypedStorage<1, 1, bool>                                               mNeedsResampling;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDLCWorld;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                                                   mUpdateInterval;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                          mMapId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                          mParentMapId;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsFullyExplored;
    ::ll::TypedStorage<1, 1, bool>                                                     mPreviewIncomplete;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mOrigin;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                          mDimension;
    ::ll::TypedStorage<1, 1, schar>                                                    mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                                     mPixels;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientTerrainPixel>>                     mClientPixels;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MapItemTrackedActor>>> mTrackedEntities;
    ::ll::TypedStorage<1, 1, bool>                                                     mUnlimitedTracking;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirtyForSave;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirtyPixelData;
    ::ll::TypedStorage<1, 1, bool>                                                     mLocked;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>>>
                                                                mDecorations;
    ::ll::TypedStorage<1, 1, bool>                              mHasDirtyClientPixels;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpinLockImpl>> mClientSamplingLock;
    ::ll::TypedStorage<1, 1, bool>                              mNeedsResampling;
    ::ll::TypedStorage<1, 1, bool>                              mIsDLCWorld;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MapItemSavedData& operator=(MapItemSavedData const&);
#else // @header-generator platform
#endif // @header-generator platform
    MapItemSavedData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MapItemSavedData(::ActorUniqueID, bool);
#else // @header-generator platform
    MCAPI MapItemSavedData(::ActorUniqueID mapId, bool isDLCworld);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addDecoration(
        ::MapDecoration::Type,
        ::MapItemTrackedActor::UniqueId const&,
        ::Vec3 const&,
        std::string const&,
        ::mce::Color const&
#else // @header-generator platform
    MCAPI void _addDecoration(
        ::MapDecoration::Type                  type,
        ::MapItemTrackedActor::UniqueId const& id,
        ::Vec3 const&                          position,
        ::std::string const&                   label,
        ::mce::Color const&                    color
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<MapItemTrackedActor>
           _addTrackedMapEntity(::MapItemTrackedActor::UniqueId const&, ::BlockSource&, ::MapDecoration::Type);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::MapItemTrackedActor> _addTrackedMapEntity(
        ::MapItemTrackedActor::UniqueId const& key,
        ::BlockSource&                         region,
        ::MapDecoration::Type                  decorationType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _clampOriginWithinLimitedWorld(::BlockPos&, ::Vec3 const&, int) const;
#else // @header-generator platform
    MCAPI void _deserializeData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deserializeData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void _removeDecoration(::MapItemTrackedActor::UniqueId const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeDecoration(::MapItemTrackedActor::UniqueId const&);
#else // @header-generator platform
    MCAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const&);
#else // @header-generator platform
    MCAPI bool
    _updateTrackedEntityDecoration(::BlockSource& region, ::std::shared_ptr<::MapItemTrackedActor> trackedActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _updateTrackedEntityDecoration(::BlockSource&, std::shared_ptr<MapItemTrackedActor>);
#else // @header-generator platform
    MCAPI void _updateTrackedEntityDecorations(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateTrackedEntityDecorations(::BlockSource&);
#else // @header-generator platform
    MCAPI void copyMapData(::MapItemSavedData const& map);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDecoration(::MapItemTrackedActor::UniqueId const&, std::shared_ptr<MapDecoration> const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> getFullDataPacket() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<MapItemTrackedActor> addTrackedMapEntity(::Actor&, ::MapDecoration::Type);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::MapItemTrackedActor> getTrackedMapEntity(::Actor& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<MapItemTrackedActor>
           addTrackedMapEntity(::BlockPos const&, ::BlockSource&, ::MapDecoration::Type);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::Level&, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areClientPixelsDirty() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkNeedsResampling();
#else // @header-generator platform
    MCAPI bool isPlayerHoldingMap(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void copyMapData(::MapItemSavedData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void replaceDecorations(
        ::std::vector<::std::shared_ptr<::MapDecoration>>     decorations,
        ::std::vector<::MapItemTrackedActor::UniqueId> const& uniqueIds
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserialize(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void save(::LevelStorage& storage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableUnlimitedTracking();
#else // @header-generator platform
    MCAPI void serialize(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ClientTerrainPixel>& getClientPixels();
#else // @header-generator platform
    MCAPI void setMapSection(::buffer_span<uint> src, ::MapItemSavedData::ChunkBounds bb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpinLockImpl* getClientSamplingLock();
#else // @header-generator platform
    MCAPI void setOrigin(
        ::Vec3            origin,
        int               mapScale,
        ::DimensionType   dimension,
        bool              isLegacyLevel,
        bool              isCentered,
        ::BlockPos const& worldCenter
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> getFullDataPacket() const;
#else // @header-generator platform
    MCAPI void tickByBlock(::BlockPos const& pos, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getMapId() const;
#else // @header-generator platform
    MCAPI void tickCarriedBy(::Actor& player, ::CompoundTag const* item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getParentMapId() const;

    MCNAPI ::buffer_span<uint> getPixels() const;

    MCNAPI std::shared_ptr<MapItemTrackedActor> getTrackedMapEntity(::Actor&);

    MCNAPI std::unique_ptr<Packet> getUpdatePacket(::Level&, ::BlockPos const&) const;

    MCNAPI std::unique_ptr<Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;

    MCNAPI bool hasParentMap() const;

    MCNAPI bool isAdjacent(::MapItemSavedData const&, int) const;

    MCNAPI bool isChunkAllEmpty(::MapItemSavedData::ChunkBounds) const;

    MCNAPI bool isFullyExplored() const;

    MCNAPI bool isLocked() const;

    MCNAPI bool isPixelDataDirty() const;

    MCNAPI bool isPlayerHoldingMap(::Player&);

    MCNAPI bool needsResampling() const;

    MCNAPI void removeTrackedMapEntity(::BlockPos const&);

    MCNAPI void
    replaceDecorations(std::vector<std::shared_ptr<MapDecoration>>, std::vector<MapItemTrackedActor::UniqueId> const&);

    MCNAPI void replacePixels(::buffer_span<uint>, uint, uint, uint, uint);

    MCNAPI void save(::LevelStorage&);

    MCNAPI void serialize(::CompoundTag&) const;

    MCNAPI void setClientPixelsDirty(bool);

    MCNAPI void setDimensionId(::DimensionType);

    MCNAPI void setDirtyForSaveAndPixelData();

    MCNAPI void setLocked();

    MCNAPI void setMapSection(::buffer_span<uint>, ::MapItemSavedData::ChunkBounds);

    MCNAPI void setOrigin(::Vec3, int, ::DimensionType, bool, bool, ::BlockPos const&);

    MCNAPI bool setPixel(uint, uint, uint);

    MCNAPI void setPixelDataClean();

    MCNAPI void setScale(int);

    MCNAPI void setScaleAndParentMapId(int, ::ActorUniqueID);

    MCNAPI void tickByBlock(::BlockPos const&, ::BlockSource&);

    MCNAPI void tickCarriedBy(::Actor&, ::CompoundTag const*);

    MCNAPI void trySave(::LevelStorage&);
#else // @header-generator platform
    MCAPI ~MapItemSavedData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::AABB getMapWorldBounds(::BlockPos const&, int, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::AABB getMapWorldBounds(::BlockPos const& mapOrigin, int blocksPerTexel, int offset);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getSerializationKey(::ActorUniqueID);
#else // @header-generator platform
    MCAPI static ::std::string getSerializationKey(::ActorUniqueID id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorUniqueID, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorUniqueID mapId, bool isDLCworld);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
