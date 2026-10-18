#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class CraftingItemCatalogMergeResult;
class CreativeGroupInfo;
class CreativeItemRegistry;
class ItemInstance;
struct BlockDefinition;
// clang-format on

class CreativeItemInitializer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::UntypedStorage<8, 24>                        mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, std::set<short>>         mServerItemsUsedInCreativeItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                                     mItemRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> const> mCreativeItemRegistry;
    ::ll::TypedStorage<8, 16, ::std::set<short>> mServerItemsUsedInCreativeItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemInitializer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    CreativeItemInitializer(::ItemRegistryRef const&, ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>);
#else // @header-generator platform
    MCAPI CreativeItemInitializer(
        ::ItemRegistryRef const&                              itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addCreativeItemServer(::CreativeGroupInfo&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI void _addCreativeItemServer(::CreativeGroupInfo& creativeGroupInfo, ::ItemInstance const& itemInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addLooseCreativeItem(::ItemInstance const&);
#else // @header-generator platform
    MCAPI void _addLooseCreativeItem(::ItemInstance const& itemInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addLooseCreativeItemsServer(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void _addLooseCreativeItemsServer(::BaseGameVersion const& worldVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addLooseBlocks(std::vector<const BlockDefinition*> const&);
#else // @header-generator platform
    MCAPI void addLooseBlocks(::std::vector<::BlockDefinition const*> const& blockDefinitions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addLooseCreativeItems(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void
    initializeFromCraftingItemCatalog(::CraftingItemCatalogMergeResult const& craftingItemCatalogMergeResult);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeFromCraftingItemCatalog(::CraftingItemCatalogMergeResult const&);

    MCNAPI ~CreativeItemInitializer();
#else // @header-generator platform
    MCAPI ~CreativeItemInitializer();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemRegistryRef const&, ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ItemRegistryRef const&                              itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );
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
};
