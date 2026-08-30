#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/saveddata/maps/ClientTerrainPixel.h"
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
class Packet;
class Player;
class Random;
class SpinLockImpl;
class Vec3;
namespace mce { class Color; }
// clang-format on

class MapItemSavedData {
public:
    // MapItemSavedData inner types declare
    // clang-format off
    struct ChunkBounds;
    struct MapDecorationTypeAndRotation;
    struct MapDecorationContext;
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

    struct MapDecorationTypeAndRotation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>    type;
        ::ll::TypedStorage<4, 4, int> rotation;
        // NOLINTEND
    };

    struct MapDecorationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>    type;
        ::ll::TypedStorage<4, 4, int> x;
        ::ll::TypedStorage<4, 4, int> y;
        ::ll::TypedStorage<4, 4, int> rot;
        // NOLINTEND
    };

    using DecorationCollection = std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    MapItemSavedData& operator=(MapItemSavedData const&);
    MapItemSavedData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapItemSavedData(::ActorUniqueID, bool);

    MCNAPI void _addDecoration(
        ::MapDecoration::Type,
        ::MapItemTrackedActor::UniqueId const&,
        ::Vec3 const&,
        std::string const&,
        ::mce::Color const&
    );

    MCNAPI std::shared_ptr<MapItemTrackedActor>
           _addTrackedMapEntity(::MapItemTrackedActor::UniqueId const&, ::BlockSource&, ::MapDecoration::Type);

    MCNAPI void _clampOriginWithinLimitedWorld(::BlockPos&, ::Vec3 const&, int) const;

    MCNAPI void _deserializeData(::CompoundTag const&);

    MCNAPI void _removeDecoration(::MapItemTrackedActor::UniqueId const&);

    MCNAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const&);

    MCNAPI bool _updateTrackedEntityDecoration(::BlockSource&, std::shared_ptr<MapItemTrackedActor>);

    MCNAPI void _updateTrackedEntityDecorations(::BlockSource&);

    MCNAPI void addDecoration(::MapItemTrackedActor::UniqueId const&, std::shared_ptr<MapDecoration> const&);

    MCNAPI std::shared_ptr<MapItemTrackedActor> addTrackedMapEntity(::Actor&, ::MapDecoration::Type);

    MCNAPI std::shared_ptr<MapItemTrackedActor>
           addTrackedMapEntity(::BlockPos const&, ::BlockSource&, ::MapDecoration::Type);

    MCNAPI bool areClientPixelsDirty() const;

    MCNAPI void checkNeedsResampling();

    MCNAPI void copyMapData(::MapItemSavedData const&);

    MCNAPI void deserialize(::CompoundTag const&);

    MCNAPI void enableUnlimitedTracking();

    MCNAPI std::vector<ClientTerrainPixel>& getClientPixels();

    MCNAPI ::SpinLockImpl* getClientSamplingLock();

    MCNAPI std::unique_ptr<Packet> getFullDataPacket() const;

    MCNAPI ::ActorUniqueID getMapId() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB getMapWorldBounds(::BlockPos const&, int, int);

    MCNAPI static std::string getSerializationKey(::ActorUniqueID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUniqueID, bool);
    // NOLINTEND
};
