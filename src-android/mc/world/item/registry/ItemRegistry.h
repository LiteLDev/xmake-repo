#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/resource_processing/util/MinecraftDocumentInput.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemTag.h"
#include "mc/world/item/registry/ItemRegistrationOrder.h"
#include "mc/world/item/registry/ItemRegistryComplexAlias.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class Block;
class BlockDefinitionGroup;
class BlockPalette;
class BlockType;
class CompoundTag;
class CreativeContentPacket;
class CreativeItemRegistry;
class Experiments;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IMinecraftEventing;
class ItemEventResponseFactory;
class ItemInstance;
class ItemRegistryRef;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
class SemVersion;
class ServerScriptManager;
class TagUpdateToken;
struct ItemData;
struct ItemIconInfo;
struct ItemParseContext;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace ItemLoaderTraits { struct Loader; }
namespace Puv { class Input; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistry : public ::std::enable_shared_from_this<ItemRegistry> {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ItemAlias;
    struct ItemHashAlias;
    struct LoadedItemAsset;
    struct ItemLoadResult;
    struct ParsedName;
    // clang-format on

    // ItemRegistry inner types define
    struct ItemAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> currentName;
        ::ll::UntypedStorage<8, 32>               sinceVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemAlias& operator=(ItemAlias const&);
        ItemAlias(ItemAlias const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> aliasName;
        ::ll::UntypedStorage<8, 32>     sinceVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
    };

    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 272>                                         mDocumentInput;
        ::ll::TypedStorage<1, 1, ::PackType>                                 mPackType;
        ::ll::TypedStorage<8, 80, ::PackLoadInfo>                            mPackLoadInfo;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ItemEventResponseFactory>> mEventResponseFactory;
        ::ll::TypedStorage<8, 24, std::string>                               mLoadedPackName;
        ::ll::TypedStorage<1, 1, bool>                                       mIsComponentBased;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedItemAsset& operator=(LoadedItemAsset const&);
        LoadedItemAsset(LoadedItemAsset const&);
        LoadedItemAsset();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LoadedItemAsset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 416>           mLoadedItemAsset;
        ::ll::TypedStorage<8, 24, std::string> mError;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemLoadResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ParsedName {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mItemIdentifier;
        ::ll::TypedStorage<8, 24, std::string> mParsedNamespace;
        ::ll::TypedStorage<8, 24, std::string> mParsedName;
        ::ll::TypedStorage<4, 4, int>          mAux;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParsedName();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<cereal::ReflectionCtx>>> mCerealContext;
    ::ll::UntypedStorage<8, 24> mValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ItemLoaderTraits::Loader>>> mDocumentLoader;
    ::ll::UntypedStorage<8, 24> mItemRegistry;
    ::ll::UntypedStorage<8, 40> mIdToItemMap;
    ::ll::UntypedStorage<8, 40> mNameToItemMap;
    ::ll::UntypedStorage<8, 40> mTileNamespaceToItemMap;
    ::ll::UntypedStorage<8, 40> mTileItemNameToItemMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemRegistry::ItemAlias>> mItemAliasLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ItemRegistry::ItemHashAlias>> mReverseAliasLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ItemRegistry::ItemHashAlias>> mReverseFullNameAliasLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ItemRegistryComplexAlias>> mComplexAliasLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<short, HashedString>> mLegacyIDToNameMap;
    ::ll::TypedStorage<2, 2, short> mMaxItemID;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mAttachableDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<ItemTag, std::unordered_set<const Item*>>> mTagToItemsMap;
    ::ll::TypedStorage<8, 40, std::unordered_set<const Item*> const> mEmptyItemSet;
    ::ll::TypedStorage<1, 1, bool> mServerInitializingCreativeItems;
    ::ll::TypedStorage<1, 1, bool> mIsInitialized;
    ::ll::UntypedStorage<8, 48> mExtraItemInitCallback;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mFinishedInitServerPublisher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::atomic<int>>> mCanUpdateTags;
    ::ll::UntypedStorage<8, 24> mDeadItemRegistry;
    ::ll::TypedStorage<1, 1, bool> mAddToPreRegistry;
    ::ll::UntypedStorage<8, 40> mHardcodedVanillaItemPreRegistry;
    ::ll::UntypedStorage<1, 1> mItemRegistrationOrder;
    ::ll::UntypedStorage<8, 32> mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool> mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::mutex>> mCompatibilityCheckMutex;
    ::ll::UntypedStorage<8, 16> mCreativeItemRegistry;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRegistry();

    MCNAPI void _movePreRegistryToMainRegistry();

    MCNAPI void _populateVanillaItemVersionMap(::ItemRegistry::LoadedItemAsset const&, ::ItemParseContext&);

    MCNAPI void _preRegisterItem(::HashedString const&, ::SharedPtr<Item>);

    MCNAPI ::WeakPtr<Item> _registerOrPromoteItem(::HashedString const&, bool, ::cereal::ReflectionCtx const&);

    MCNAPI ::ItemRegistry::ParsedName _tryParseItemName(::Puv::Input const&);

    MCNAPI ::ItemRegistryRef::LoadedItem
    _tryRegisterAndInitItem(::ItemRegistry::LoadedItemAsset const&, ::ItemParseContext&);

    MCNAPI void addItemToTagMap(::Item const&);

    MCNAPI ::TagUpdateToken allowTagUpdate();

    MCNAPI void alterAvailableCreativeItems(::ActorInfoRegistry*, ::LevelData&);

    MCNAPI void bindDynamicScriptTypes(::ServerScriptManager&);

    MCNAPI void
    buildClientRegistryFromServer(std::vector<ItemData> const&, ::Experiments const&, ::BaseGameVersion const&);

    MCNAPI void buildServerRegistry(
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::ResourcePackManager*,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::IMinecraftEventing&
    );

    MCNAPI bool canUpdateTags() const;

    MCNAPI ::cereal::ReflectionCtx const& cerealContext() const;

    MCNAPI void clearDeadItemRegistry();

    MCNAPI void clearItemAndCreativeItemRegistry();

    MCNAPI void findAllAttachableDefinitions();

    MCNAPI void finishedRegistration();

    MCNAPI std::vector<std::reference_wrapper<const HashedString>> const&
           getComplexAliasSplitNames(::HashedString const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<CreativeItemRegistry> getCreativeItemRegistry();

    MCNAPI ::WeakPtr<Item> getItem(short const);

    MCNAPI ::WeakPtr<Item> getItem(::HashedString const&);

    MCNAPI int getItemCount();

    MCNAPI uint getMaxItemID();

    MCNAPI std::pair<HashedString, int> getNameFromAlias(::HashedString const&, int) const;

    MCNAPI ::HashedString getNameFromLegacyID(short);

    MCNAPI std::unordered_map<HashedString, WeakPtr<Item>> const& getNameToItemMap();

    MCNAPI ::BaseGameVersion getWorldBaseGameVersion() const;

    MCNAPI void initCreativeItemsClient(::CreativeContentPacket const&, ::BlockPalette const&);

    MCNAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::IMinecraftEventing&,
        std::function<void(
            ItemRegistryRef,
            const BlockDefinitionGroup&,
            CreativeItemRegistry*,
            const BaseGameVersion&,
            const Experiments&,
            const ResourcePackManager&,
            const cereal::ReflectionCtx&,
            Bedrock::NonOwnerPointer<LinkedAssetValidator>,
            IMinecraftEventing&
        )>
    );

    MCNAPI bool isComplexAlias(::HashedString const&) const;

    MCNAPI bool isCreativeItem(::ItemInstance const&);

    MCNAPI bool isRegistryInitialized() const;

    MCNAPI bool isServerInitializingCreativeItems() const;

    MCNAPI ::WeakPtr<Item> lookupByName(::HashedString const&) const;

    MCNAPI ::WeakPtr<Item> lookupByName(int&, std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByName(int&, int&, std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(::HashedString const&) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoParsing(int&, ::HashedString const&) const;

    MCNAPI std::unordered_set<const Item*> const& lookupByTag(::ItemTag const&) const;

    MCNAPI ::WeakPtr<Item> lookupByVanillaName(::HashedString const&) const;

    MCNAPI void matchServerItemIds(std::vector<ItemData> const&);

    MCNAPI ::Bedrock::PubSub::Connector<void()>& onFinishedInitServer() const;

    MCNAPI void onLevelInit(
        ::WeakRef<IDynamicContainerSerialization>,
        ::WeakRef<IContainerRegistryAccess>,
        ::WeakRef<IContainerRegistryTracker>
    );

    MCNAPI void populateClientItemData(
        ::ResourcePackManager&,
        ::Experiments const&,
        std::optional<ItemIconInfo> (*)(std::string const&, int)
    );

    MCNAPI void registerAlias(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&);

    MCNAPI ::WeakPtr<Item> registerComplexAlias(::HashedString const&, ::ItemRegistryComplexAlias const&);

    MCNAPI void registerExtraItemInitCallback(std::function<void(ItemRegistryRef)>);

    MCNAPI void registerItem(::SharedPtr<Item>);

    MCNAPI void registerLegacyID(::HashedString const&, short);

    MCNAPI void registerLegacyMapping(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&);

    MCNAPI void registerValidatorIdentifier(std::string const&);

    MCNAPI ulong remapToFullLegacyNameByHash(ulong const);

    MCNAPI ulong remapToLegacyNameByHash(ulong const);

    MCNAPI void setCheckForItemWorldCompatibility(bool);

    MCNAPI void setItemId(::HashedString const&, short, bool);

    MCNAPI void setServerInitializingCreativeItems(bool);

    MCNAPI bool shouldCheckForItemWorldCompatibility();

    MCNAPI void shutdown();

    MCNAPI void unregisterItem(::HashedString const&);

    MCNAPI std::vector<std::string> validateServerItemComponents(std::vector<ItemData> const&);

    MCNAPI ~ItemRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ItemRegistry::LoadedItemAsset>
    _loadAllItemAssets(::ResourcePackManager const&, ::Experiments const&, ::cereal::ReflectionCtx const&);

    MCNAPI static short getBlockItemId(::BlockType const&);

    MCNAPI static short getBlockItemId(::Block const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& LOG_CREATIVE_ITEM_REGISTRY_DURING_INIT();

    MCNAPI static std::string_view const& MINECRAFT_NAMESPACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
