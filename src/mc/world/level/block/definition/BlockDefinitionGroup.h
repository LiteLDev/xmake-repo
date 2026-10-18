#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/WeakPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/DefinitionEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/definition/BlockDescription.h"
#include "mc/world/level/block/traits/BlockTraitFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockCustomComponentsComponent;
class BlockType;
#else // @header-generator platform
class DefinitionEvent;
#endif // @header-generator platform
class Experiments;
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class PackLoadContext;
class PackLoadRequirement;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
struct BlockComponentDescription;
#else // @header-generator platform
#endif // @header-generator platform
struct BlockComponentGroupDescription;
struct BlockDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
struct BlockDescription;
struct BlockPermutationDescription;
#else // @header-generator platform
#endif // @header-generator platform
struct ServerBlockProperty;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionGroup {
public:
    // BlockDefinitionGroup inner types declare
    // clang-format off
    struct BlockResource;
    // clang-format on

    // BlockDefinitionGroup inner types define
    struct BlockResource {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                    mFormatVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::SemVersion>        mFormatVersion;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 32, ::MinEngineVersion>  mMinEngineVersion;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                    mOriginalJsonVersion;
        ::ll::TypedStorage<8, 200, ::BlockDescription> mDescription;
        ::ll::TypedStorage<8, 24, std::string>         mResourcePackLocation;
        ::ll::TypedStorage<8, 24, std::string>         mResourceFileLocation;
        ::ll::UntypedStorage<8, 16>                    mRoot;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BlockResource();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::SemVersion>        mOriginalJsonVersion;
        ::ll::TypedStorage<8, 240, ::BlockDescription> mDescription;
        ::ll::TypedStorage<8, 32, ::std::string>       mResourcePackLocation;
        ::ll::TypedStorage<8, 32, ::std::string>       mResourceFileLocation;
        ::ll::TypedStorage<8, 16, ::Json::Value>       mRoot;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<BlockDefinition>>> mBlockDefinitions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockDescription>>> mDescriptionSchema;
    ::ll::UntypedStorage<8, 80> mTraitFactory;
    ::ll::TypedStorage<4, 4, int> mLastBlockId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mBlockResourceGroupNames;
    ::ll::UntypedStorage<8, 24> mCtx;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BlockDefinition>>>
        mBlockDefinitions;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>>
                                                                                            mDescriptionSchema;
    ::ll::TypedStorage<8, 128, ::BlockTraitFactory>                                         mTraitFactory;
    ::ll::TypedStorage<4, 4, int>                                                           mLastBlockId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                 mBlockResourceGroupNames;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                         mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&);
    BlockDefinitionGroup(BlockDefinitionGroup const&);
    BlockDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDefinitionGroup(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI BlockDefinitionGroup(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseComponents(
        ::Json::Value const&,
        ::BlockComponentGroupDescription&,
        std::string const&,
        ::SemVersion const&,
        ::PackLoadContext&,
        bool
#else // @header-generator platform
    MCAPI void _buildBlockDescriptionSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory
    _stringToCreativeItemCategory(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI bool _parseComponents(
        ::Json::Value const&              blockRoot,
        ::BlockComponentGroupDescription& componentGroupDescription,
        ::std::string const&              blockIdentifier,
        ::SemVersion const&               originalJsonVersion,
        ::PackLoadContext&                packLoadContext,
        bool                              isVanillaBlock
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void digestServerBlockProperties(std::vector<ServerBlockProperty> const&);
#else // @header-generator platform
    MCAPI void digestServerBlockProperties(::std::vector<::ServerBlockProperty> const& blocks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockDefinition>
           generateBlockDefinition(::BlockDefinitionGroup::BlockResource const&, ::PackLoadContext&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockDefinition>
    generateBlockDefinition(::BlockDefinitionGroup::BlockResource const& resource, ::PackLoadContext& packLoadContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ServerBlockProperty> generateServerBlockProperties() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ServerBlockProperty> generateServerBlockProperties() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<const BlockDefinition*> getBlockDefinitions() const;
#else // @header-generator platform
    MCAPI ::std::vector<::BlockDefinition const*> getBlockDefinitions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeBlockFromDefinition(::BlockDefinition const&, ::Level&);
#else // @header-generator platform
    MCAPI void initializeBlockFromDefinition(::BlockDefinition const& definition, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeBlocks(::Level&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockDefinition> loadResource(
        ::std::string                            upgradedJsonData,
        ::Core::PathBuffer<::std::string> const& res,
        ::std::string const&                     resourcePacklocation,
        ::PackLoadContext&                       packLoadContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockDefinition>
           loadResource(std::string, ::Core::PathBuffer<std::string> const&, std::string const&, ::PackLoadContext&);
#else // @header-generator platform
    MCAPI void loadResources(
        ::ResourcePackManager const&                       resourcePackManager,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    loadResources(::ResourcePackManager const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI void registerBlockFromDefinition(::BlockDefinition const& definition, bool assertIfAlreadyExists);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerBlockFromDefinition(::BlockDefinition const&, bool);
#else // @header-generator platform
    MCAPI ::BlockDefinition const* tryGetBlockDefinition(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerBlocks();
#else // @header-generator platform
    MCAPI ~BlockDefinitionGroup();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockDefinition const* tryGetBlockDefinition(std::string const&) const;
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory
    _stringToCreativeItemCategory(::std::string const& category, ::std::string const& blockIdentifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockDefinitionGroup();
#else // @header-generator platform
    MCAPI static bool _validatePrereleaseRequirements(
        ::LogArea                                   logArea,
        ::std::string const&                        jsonType,
        ::std::string const&                        jsonIdentifier,
        ::std::optional<::SemVersion> const&        releaseVersion,
        ::std::vector<::PackLoadRequirement> const& requirements,
        ::PackLoadContext const&                    packLoadContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
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
