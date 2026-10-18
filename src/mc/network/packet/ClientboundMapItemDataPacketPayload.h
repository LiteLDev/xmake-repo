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
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : uint {
#else // @header-generator platform
    enum class Type : int {
#endif // @header-generator platform
        Invalid          = 0,
        TextureUpdate    = 2,
        DecorationUpdate = 4,
        Creation         = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mMapId;
    ::ll::TypedStorage<4, 4, ::ClientboundMapItemDataPacketPayload::Type>        mType;
    ::ll::TypedStorage<1, 1, uchar>                                              mDimension;
    ::ll::TypedStorage<1, 1, bool>                                               mLocked;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mMapOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                    mCreationMapIds;
    ::ll::TypedStorage<1, 1, schar>                                              mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::MapItemTrackedActor::UniqueId>>    mUniqueIds;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MapDecoration>>> mDecorations;
    ::ll::TypedStorage<4, 4, int>                                                mWidth;
    ::ll::TypedStorage<4, 4, int>                                                mHeight;
    ::ll::TypedStorage<4, 4, int>                                                mStartX;
    ::ll::TypedStorage<4, 4, int>                                                mStartY;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                               mMapPixels;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientboundMapItemDataPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClientboundMapItemDataPacketPayload(::ClientboundMapItemDataPacketPayload const&);
#else // @header-generator platform
    MCAPI ClientboundMapItemDataPacketPayload(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ClientboundMapItemDataPacketPayload(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyToMap(::MapItemSavedData&, bool) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void applyToMap(::MapItemSavedData& map, bool resampleMap) const;

    MCAPI ::std::vector<::ActorUniqueID> getMapIds() const;

    MCAPI void resampleClientMap(
        ::MapItemSavedData& map,
        ::BlockSource&      region,
        ::BlockPos const&   updatePosition,
        int                 scale
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~ClientboundMapItemDataPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ClientboundMapItemDataPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
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
