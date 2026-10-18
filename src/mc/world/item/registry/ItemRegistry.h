#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/resource_processing/util/MinecraftDocumentInput.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemTag.h"
#include "mc/world/item/registry/ItemRegistrationOrder.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/registry/ItemRegistryComplexAlias.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockDefinitionGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPalette;
class BlockType;
class CompoundTag;
class CreativeContentPacket;
#else // @header-generator platform
#endif // @header-generator platform
class CreativeItemRegistry;
class Experiments;
#if defined(LL_PLAT_A) // @header-generator platform
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class ItemEventResponseFactory;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ItemRegistryRef;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
class ServerScriptManager;
class TagUpdateToken;
#else // @header-generator platform
#endif // @header-generator platform
struct ItemData;
struct ItemIconInfo;
struct ItemParseContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemRegistryComplexAlias;
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace ItemLoaderTraits { struct Loader; }
namespace Puv { class Input; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ItemRegistry : public ::std::enable_shared_from_this<ItemRegistry> {
#else // @header-generator platform
class ItemRegistry : public ::std::enable_shared_from_this<::ItemRegistry> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::HashedString>    currentName;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion> sinceVersion;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> aliasName;
        ::ll::UntypedStorage<8, 32>     sinceVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>             aliasName;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion> sinceVersion;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 272, ::Bedrock::Resources::MinecraftDocumentInput> mDocumentInput;
        ::ll::TypedStorage<1, 1, ::PackType>                                     mPackType;
        ::ll::TypedStorage<8, 96, ::PackLoadInfo>                                mPackLoadInfo;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemEventResponseFactory>> mEventResponseFactory;
        ::ll::TypedStorage<8, 32, ::std::string>                                 mLoadedPackName;
        ::ll::TypedStorage<1, 1, bool>                                           mIsComponentBased;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 440, ::std::optional<::ItemRegistry::LoadedItemAsset>> mLoadedItemAsset;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mError;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ParsedName {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> mItemIdentifier;
        ::ll::TypedStorage<8, 32, ::std::string> mParsedNamespace;
        ::ll::TypedStorage<8, 32, ::std::string> mParsedName;
        ::ll::TypedStorage<4, 4, int>            mAux;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using CreativeItemsServerInitCallbackSignature = void(
        ::ItemRegistryRef,
        ::BlockDefinitionGroup const&,
        ::CreativeItemRegistry*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx const&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const,
        ::IMinecraftEventing&
    );
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::cereal::ReflectionCtx>>>      mCerealContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>              mValidator;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ItemLoaderTraits::Loader>>>   mDocumentLoader;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>                              mItemRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::WeakPtr<::Item>>>                    mIdToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mNameToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mTileNamespaceToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::WeakPtr<::Item>>>         mTileItemNameToItemMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemRegistry::ItemAlias>> mItemAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::ItemRegistry::ItemHashAlias>>     mReverseAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::ItemRegistry::ItemHashAlias>>
        mReverseFullNameAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemRegistryComplexAlias>> mComplexAliasLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<short, ::HashedString>>                      mLegacyIDToNameMap;
    ::ll::TypedStorage<2, 2, short>                                                             mMaxItemID;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                                    mAttachableDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ItemTag, ::std::unordered_set<::Item const*>>> mTagToItemsMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::Item const*> const>                            mEmptyItemSet;
    ::ll::TypedStorage<1, 1, bool>                                      mServerInitializingCreativeItems;
    ::ll::TypedStorage<1, 1, bool>                                      mIsInitialized;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ItemRegistryRef)>> mExtraItemInitCallback;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                                     mFinishedInitServerPublisher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::atomic<int>>> mCanUpdateTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedPtr<::Item>>>    mDeadItemRegistry;
    ::ll::TypedStorage<1, 1, bool>                                   mAddToPreRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::SharedPtr<::Item>>>
                                                                              mHardcodedVanillaItemPreRegistry;
    ::ll::TypedStorage<1, 1, ::ItemRegistrationOrder>                         mItemRegistrationOrder;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mWorldBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                            mCheckForItemWorldCompatibility;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mCompatibilityCheckMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CreativeItemRegistry>>       mCreativeItemRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemRegistry();
#else // @header-generator platform
    MCAPI ItemRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _movePreRegistryToMainRegistry();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _movePreRegistryToMainRegistry();

    MCAPI void _populateVanillaItemVersionMap(
        ::ItemRegistry::LoadedItemAsset const& loadedItemAsset,
        ::ItemParseContext&                    parseContext
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _populateVanillaItemVersionMap(::ItemRegistry::LoadedItemAsset const&, ::ItemParseContext&);
#else // @header-generator platform
    MCAPI void _preRegisterItem(::HashedString const& itemName, ::SharedPtr<::Item> item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _preRegisterItem(::HashedString const&, ::SharedPtr<Item>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::WeakPtr<::Item>
    _registerOrPromoteItem(::HashedString const& itemName, bool isComponentBased, ::cereal::ReflectionCtx const& ctx);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> _registerOrPromoteItem(::HashedString const&, bool, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI ::ItemRegistry::ParsedName _tryParseItemName(::Puv::Input const& input);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemRegistry::ParsedName _tryParseItemName(::Puv::Input const&);
#else // @header-generator platform
    MCAPI ::ItemRegistryRef::LoadedItem
    _tryRegisterAndInitItem(::ItemRegistry::LoadedItemAsset const& loadedItemAsset, ::ItemParseContext& parseContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemRegistryRef::LoadedItem
    _tryRegisterAndInitItem(::ItemRegistry::LoadedItemAsset const&, ::ItemParseContext&);
#else // @header-generator platform
    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* registry, ::LevelData& levelData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addItemToTagMap(::Item const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void buildClientRegistryFromServer(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TagUpdateToken allowTagUpdate();
#else // @header-generator platform
    MCAPI void clearItemAndCreativeItemRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void alterAvailableCreativeItems(::ActorInfoRegistry*, ::LevelData&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void findAllAttachableDefinitions();

    MCAPI void finishedRegistration();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void bindDynamicScriptTypes(::ServerScriptManager&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    buildClientRegistryFromServer(std::vector<ItemData> const&, ::Experiments const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void buildServerRegistry(
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::ResourcePackManager*,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> getItem(short id);

    MCAPI ::std::pair<::HashedString, int> getNameFromAlias(::HashedString const& name, int aux) const;

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCFOLD ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;

#ifdef LL_PLAT_C
    MCAPI void populateClientItemData(
        ::ResourcePackManager& resourcePackManager,
        ::Experiments const&   experiments,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    );
#endif

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion);

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(::SharedPtr<::Item> item);

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUpdateTags() const;
#else // @header-generator platform
    MCAPI void registerValidatorIdentifier(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ReflectionCtx const& cerealContext() const;
#else // @header-generator platform
    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearDeadItemRegistry();
#else // @header-generator platform
    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearItemAndCreativeItemRegistry();
#else // @header-generator platform
    MCAPI void shutdown();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void findAllAttachableDefinitions();
#else // @header-generator platform
    MCAPI void unregisterItem(::HashedString const& itemName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finishedRegistration();
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& items);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~ItemRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<::ItemRegistry::LoadedItemAsset> _loadAllItemAssets(
        ::ResourcePackManager const&   resourcePackManager,
        ::Experiments const&           experiments,
        ::cereal::ReflectionCtx const& ctx
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
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
