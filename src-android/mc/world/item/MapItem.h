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
    // prevent constructor by default
    MapItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MapItem();

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual std::unique_ptr<Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapItem(std::string const&, short);

    MCNAPI void blockTick(::ItemStackBase const&, ::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _scheduleMapChunkRendering(
        ::Dimension&,
        ::MapItemSavedData const&,
        ::MapItemSavedData::ChunkBounds,
        std::shared_ptr<bool>
    );

    MCNAPI static bool doesDisplayPlayerMarkers(::ItemStackBase const&);

    MCNAPI static ::ActorUniqueID getMapId(::CompoundTag const*);

    MCNAPI static void markForRegeneration(::ItemStackBase&);

    MCNAPI static void renderBiomePreviewMap(::Dimension&, ::MapItemSavedData&);

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
    );

    MCNAPI static void serializeMapData(std::vector<MapSample> const&, std::string&);

    MCNAPI static void setItemInstanceInfo(::ItemStackBase&, ::MapItemSavedData&);

    MCNAPI static void setMapNameIndex(::ItemStack&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TAG_MAP_INIT();

    MCNAPI static std::string const& TAG_MAP_NAME_INDEX();

    MCNAPI static std::string const& TAG_MAP_PLAYER_DISPLAY();

    MCNAPI static std::string const& TAG_MAP_REGENERATE();

    MCNAPI static std::string const& TAG_MAP_SCALE();

    MCNAPI static std::string const& TAG_MAP_SCALING();

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCNAPI void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;

    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI std::unique_ptr<Packet> $getUpdatePacket(::ItemStack const&, ::Level&, ::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
