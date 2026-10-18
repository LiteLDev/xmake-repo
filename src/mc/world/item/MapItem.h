#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ComplexItem.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class ILevel;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class MapItemSavedData;
class Packet;
struct ActorUniqueID;
struct ClientTerrainPixel;
struct MapSample;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class MapItem : public ::ComplexItem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MapItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MapItem();
#else // @header-generator platform
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual void refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setIconInfo(std::string const&, int);
#else // @header-generator platform
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual std::unique_ptr<Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // clang-format on
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MapItem(std::string const&, short);

    MCNAPI void blockTick(::ItemStackBase const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void blockTick(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _scheduleMapChunkRendering(
        ::Dimension&,
        ::MapItemSavedData const&,
        ::MapItemSavedData::ChunkBounds,
        std::shared_ptr<bool>
#else // @header-generator platform
    MCAPI static void _scheduleMapChunkRendering(
        ::Dimension&                    dimension,
        ::MapItemSavedData const&       original,
        ::MapItemSavedData::ChunkBounds bb,
        ::std::shared_ptr<bool>         chunksRefCount
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool doesDisplayPlayerMarkers(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool doesDisplayPlayerMarkers(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorUniqueID getMapId(::CompoundTag const*);
#else // @header-generator platform
    MCAPI static ::ActorUniqueID getMapId(::CompoundTag const* tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void markForRegeneration(::ItemStackBase&);
#else // @header-generator platform
    MCAPI static void markForRegeneration(::ItemStackBase& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void renderBiomePreviewMap(::Dimension&, ::MapItemSavedData&);
#else // @header-generator platform
    MCAPI static void renderBiomePreviewMap(::Dimension& dimension, ::MapItemSavedData& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool sampleMapData(
        ::BlockSource&,
        int const,
        ::BlockPos const&,
        ::BlockPos const&,
        int const,
        int const,
        std::vector<MapSample>*,
        ::MapItemSavedData*,
        std::vector<ClientTerrainPixel>*
#else // @header-generator platform
    MCAPI static bool sampleMapData(
        ::BlockSource&                       region,
        int                                  blocksPerTexel,
        ::BlockPos const&                    worldOrigin,
        ::BlockPos const&                    updateOrigin,
        int                                  imageWidth,
        int                                  imageHeight,
        ::std::vector<::MapSample>*          output,
        ::MapItemSavedData*                  mapData,
        ::std::vector<::ClientTerrainPixel>* clientPixels
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void serializeMapData(std::vector<MapSample> const&, std::string&);
#else // @header-generator platform
    MCAPI static void serializeMapData(::std::vector<::MapSample> const& mapSamples, ::std::string& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setItemInstanceInfo(::ItemStackBase&, ::MapItemSavedData&);
#else // @header-generator platform
    MCAPI static void setItemInstanceInfo(::ItemStackBase& item, ::MapItemSavedData& savedData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setMapNameIndex(::ItemStack&, int);
#else // @header-generator platform
    MCAPI static void setMapNameIndex(::ItemStack& item, int mapNameIndex);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_INIT();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_INIT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_NAME_INDEX();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_NAME_INDEX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_PLAYER_DISPLAY();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_PLAYER_DISPLAY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_REGENERATE();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_REGENERATE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_SCALE();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_SCALE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_SCALING();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_SCALING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_MAP_UUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_MAP_UUID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI void $refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> $getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;
#else // @header-generator platform
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCFOLD ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> $getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
#else // @header-generator platform
    MCAPI void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
