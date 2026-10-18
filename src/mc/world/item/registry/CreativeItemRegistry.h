#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/registry/CreativeGroupInfo.h"
#include "mc/world/item/registry/CreativeItemEntry.h"
#include "mc/world/item/registry/CreativeItemGroupCategory.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPalette;
class CreativeContentPacket;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemInstance;
#else // @header-generator platform
class CreativeGroupInfo;
class CreativeItemEntry;
class CreativeItemGroupCategory;
struct CreativeItemNetIdTag;
#endif // @header-generator platform
// clang-format on

class CreativeItemRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<CreativeItemEntry>> mCreativeItems;
    ::ll::TypedStorage<8, 24, std::vector<CreativeGroupInfo>> mCreativeGroups;
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::CreativeItemCategory, CreativeItemGroupCategory>> mCreativeGroupCategories;
    ::ll::UntypedStorage<8, 40> mCreativeNetIdIndex;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeItemEntry>> mCreativeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreativeGroupInfo>> mCreativeGroups;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::CreativeItemCategory, ::CreativeItemGroupCategory>>
                                                                                 mCreativeGroupCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CreativeItemNetId, uint64>> mCreativeNetIdIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CreativeItemRegistry();
#else // @header-generator platform
    virtual ~CreativeItemRegistry() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::brstd::flat_map<
        SharedTypes::CreativeItemCategory,
        gsl::not_null<CreativeItemGroupCategory*>,
        std::less<SharedTypes::CreativeItemCategory>,
        std::vector<SharedTypes::CreativeItemCategory>,
        std::vector<gsl::not_null<CreativeItemGroupCategory*>>>
    createCategories();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CreativeItemRegistry();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CreativeItemEntry* findCreativeItemEntry(::ItemInstance const&);
#else // @header-generator platform
    MCAPI ::brstd::flat_map<
        ::SharedTypes::CreativeItemCategory,
        ::gsl::not_null<::CreativeItemGroupCategory*>,
        ::std::less<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::SharedTypes::CreativeItemCategory>,
        ::std::vector<::gsl::not_null<::CreativeItemGroupCategory*>>> createCategories();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CreativeItemEntry* findCreativeItemEntry(::TypedServerNetId<CreativeItemNetIdTag, uint, 0> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void initializeFromCreativeContentPacket(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    );
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
