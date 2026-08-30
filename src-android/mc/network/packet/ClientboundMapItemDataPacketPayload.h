#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Level;
class MapDecoration;
class MapItemSavedData;
struct DimensionType;
// clang-format on

struct ClientboundMapItemDataPacketPayload {
public:
    // ClientboundMapItemDataPacketPayload inner types define
    enum class Type : uint {
        Invalid          = 0,
        TextureUpdate    = 2,
        DecorationUpdate = 4,
        Creation         = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mMapId;
    ::ll::TypedStorage<4, 4, ::ClientboundMapItemDataPacketPayload::Type>  mType;
    ::ll::TypedStorage<1, 1, uchar>                                        mDimension;
    ::ll::TypedStorage<1, 1, bool>                                         mLocked;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                  mMapOrigin;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>>                  mCreationMapIds;
    ::ll::TypedStorage<1, 1, schar>                                        mScale;
    ::ll::UntypedStorage<8, 24>                                            mUniqueIds;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<MapDecoration>>> mDecorations;
    ::ll::TypedStorage<4, 4, int>                                          mWidth;
    ::ll::TypedStorage<4, 4, int>                                          mHeight;
    ::ll::TypedStorage<4, 4, int>                                          mStartX;
    ::ll::TypedStorage<4, 4, int>                                          mStartY;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                           mMapPixels;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientboundMapItemDataPacketPayload(::ClientboundMapItemDataPacketPayload const&);

    MCNAPI ClientboundMapItemDataPacketPayload(::gsl::not_null<MapItemSavedData*>, ::Level&);

    MCNAPI ClientboundMapItemDataPacketPayload(
        ::ActorUniqueID,
        schar,
        std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>> const&,
        ::buffer_span<uint>,
        int,
        int,
        int,
        int,
        ::DimensionType,
        bool,
        ::BlockPos const&
    );

    MCNAPI void applyToMap(::MapItemSavedData&, bool) const;

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI ::ActorUniqueID getMapId() const;

    MCNAPI std::vector<ActorUniqueID> getMapIds() const;

    MCNAPI ::BlockPos getMapOrigin() const;

    MCNAPI schar getScale() const;

    MCNAPI bool hasEmptyOrBlackPixels() const;

    MCNAPI bool isLocked() const;

    MCNAPI bool isOfType(::ClientboundMapItemDataPacketPayload::Type) const;

    MCNAPI bool isTextureUpdate() const;

    MCNAPI ::ClientboundMapItemDataPacketPayload& operator=(::ClientboundMapItemDataPacketPayload&&);

    MCNAPI void resampleClientMap(::MapItemSavedData&, ::BlockSource&, ::BlockPos const&, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientboundMapItemDataPacketPayload const&);

    MCNAPI void* $ctor(::gsl::not_null<MapItemSavedData*>, ::Level&);

    MCNAPI void* $ctor(
        ::ActorUniqueID,
        schar,
        std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>> const&,
        ::buffer_span<uint>,
        int,
        int,
        int,
        int,
        ::DimensionType,
        bool,
        ::BlockPos const&
    );
    // NOLINTEND
};
