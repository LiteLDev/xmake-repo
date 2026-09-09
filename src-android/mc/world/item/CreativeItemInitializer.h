#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
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
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::UntypedStorage<8, 24>                        mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, std::set<short>>         mServerItemsUsedInCreativeItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemInitializer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    CreativeItemInitializer(::ItemRegistryRef const&, ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>);

    MCNAPI void _addCreativeItemServer(::CreativeGroupInfo&, ::ItemInstance const&);

    MCNAPI void _addLooseCreativeItem(::ItemInstance const&);

    MCNAPI void _addLooseCreativeItemsServer(::BaseGameVersion const&);

    MCNAPI void addLooseBlocks(std::vector<const BlockDefinition*> const&);

    MCNAPI void addLooseCreativeItems(::BaseGameVersion const&);

    MCNAPI void initializeFromCraftingItemCatalog(::CraftingItemCatalogMergeResult const&);

    MCNAPI ~CreativeItemInitializer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemRegistryRef const&, ::gsl::not_null<Bedrock::NonOwnerPointer<CreativeItemRegistry>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
