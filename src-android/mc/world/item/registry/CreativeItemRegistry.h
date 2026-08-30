#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/registry/CreativeGroupInfo.h"
#include "mc/world/item/registry/CreativeItemEntry.h"
#include "mc/world/item/registry/CreativeItemGroupCategory.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CreativeContentPacket;
class HashedString;
class ItemInstance;
// clang-format on

class CreativeItemRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<CreativeItemEntry>> mCreativeItems;
    ::ll::TypedStorage<8, 24, std::vector<CreativeGroupInfo>> mCreativeGroups;
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::CreativeItemCategory, CreativeItemGroupCategory>> mCreativeGroupCategories;
    ::ll::UntypedStorage<8, 40> mCreativeNetIdIndex;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeItemRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::brstd::flat_map<
        SharedTypes::CreativeItemCategory,
        gsl::not_null<CreativeItemGroupCategory*>,
        std::less<SharedTypes::CreativeItemCategory>,
        std::vector<SharedTypes::CreativeItemCategory>,
        std::vector<gsl::not_null<CreativeItemGroupCategory*>>>
    createCategories();

    MCNAPI ::CreativeItemEntry* findCreativeItemEntry(::ItemInstance const&);

    MCNAPI ::CreativeItemEntry* findCreativeItemEntry(::TypedServerNetId<CreativeItemNetIdTag, uint, 0> const&);

    MCNAPI void forEachCreativeItemInstance(::brstd::function_ref<bool(const ItemInstance&)>) const;

    MCNAPI ::CreativeItemGroupCategory* getCreativeCategory(::SharedTypes::CreativeItemCategory);

    MCNAPI ::CreativeGroupInfo* getCreativeGroup(uint);

    MCNAPI std::vector<CreativeGroupInfo> const& getCreativeGroups() const;

    MCNAPI std::vector<CreativeItemEntry> const& getCreativeItemEntries() const;

    MCNAPI ::CreativeItemEntry* getItemEntry(uint);

    MCNAPI void initializeFromCreativeContentPacket(::CreativeContentPacket const&, ::BlockPalette const&);

    MCNAPI ::CreativeItemGroupCategory* newCreativeCategory(std::string const&, ::SharedTypes::CreativeItemCategory);

    MCNAPI ::CreativeGroupInfo*
    newCreativeGroup(::SharedTypes::CreativeItemCategory, ::HashedString const&, ::ItemInstance const&);

    MCNAPI ::CreativeItemEntry*
    newItemEntry(::TypedServerNetId<CreativeItemNetIdTag, uint, 0> const&, ::ItemInstance const&);

    MCNAPI ::CreativeItemEntry* updateItemEntry(uint, ::ItemInstance const&);

    MCNAPI void updateNetIdMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
