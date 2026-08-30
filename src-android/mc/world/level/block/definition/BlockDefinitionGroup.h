#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/DefinitionEvent.h"
#include "mc/world/level/block/definition/BlockDescription.h"
#include "mc/world/level/block/traits/BlockTraitFactory.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCustomComponentsComponent;
class BlockType;
class Experiments;
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class PackLoadContext;
class PackLoadRequirement;
class ResourcePackManager;
struct BlockComponentDescription;
struct BlockComponentGroupDescription;
struct BlockDefinition;
struct BlockDescription;
struct BlockPermutationDescription;
struct ServerBlockProperty;
namespace Json { class Value; }
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
        ::ll::UntypedStorage<8, 24>                    mFormatVersion;
        ::ll::TypedStorage<8, 32, ::MinEngineVersion>  mMinEngineVersion;
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&);
    BlockDefinitionGroup(BlockDefinitionGroup const&);
    BlockDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinitionGroup(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);

    MCNAPI bool _parseComponents(
        ::Json::Value const&,
        ::BlockComponentGroupDescription&,
        std::string const&,
        ::SemVersion const&,
        ::PackLoadContext&,
        bool
    );

    MCNAPI ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory
    _stringToCreativeItemCategory(std::string const&, std::string const&);

    MCNAPI void digestServerBlockProperties(std::vector<ServerBlockProperty> const&);

    MCNAPI std::unique_ptr<BlockDefinition>
           generateBlockDefinition(::BlockDefinitionGroup::BlockResource const&, ::PackLoadContext&);

    MCNAPI std::vector<ServerBlockProperty> generateServerBlockProperties() const;

    MCNAPI std::vector<const BlockDefinition*> getBlockDefinitions() const;

    MCNAPI void initializeBlockFromDefinition(::BlockDefinition const&, ::Level&);

    MCNAPI void initializeBlocks(::Level&);

    MCNAPI std::unique_ptr<BlockDefinition>
           loadResource(std::string, ::Core::PathBuffer<std::string> const&, std::string const&, ::PackLoadContext&);

    MCNAPI void
    loadResources(::ResourcePackManager const&, ::Experiments const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI void registerBlockFromDefinition(::BlockDefinition const&, bool);

    MCNAPI void registerBlocks();

    MCNAPI ::BlockDefinition const* tryGetBlockDefinition(std::string const&) const;

    MCNAPI ~BlockDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
