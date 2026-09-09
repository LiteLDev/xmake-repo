#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/IPackLoadScoped.h"
#include "mc/resources/PackLoadRequirement.h"
#include "mc/util/CerealSchemaUpgradeSet.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class CerealSchemaUpgrade;
class Experiments;
class PackLoadContext;
struct BlockComponentGroupDescription;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory : public ::IPackLoadScoped, public ::Factory<BlockComponentDescription> {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // ComponentMetadata inner types define
        using Ctor = std::unique_ptr<BlockComponentDescription> (*)();

        using ParseFunction = std::function<bool(const Experiments&, const Json::Value&, const SemVersion&, bool)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<BlockComponentDescription> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, std::vector<PackLoadRequirement>>                requirements;
        ::ll::UntypedStorage<8, 32>                                                releasedMinFormatVersion;
        ::ll::UntypedStorage<8, 32>                                                versionUpgrades;
        ::ll::UntypedStorage<8, 48>                                                onParseCallback;
        ::ll::UntypedStorage<1, 16>                                                mIsCustomComponent;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::BlockComponentFactory::ComponentMetadata& operator=(::BlockComponentFactory::ComponentMetadata&&);

        MCNAPI ~ComponentMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CerealComponentsMap = std::unordered_map<std::string, BlockComponentFactory::ComponentMetadata>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>> mBlockComponentsSchema;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockComponentFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockComponentFactory(::PackLoadContext const*);

    MCNAPI void _buildBlockComponentsSchema();

    MCNAPI void _registerLegacyDescriptions(::PackLoadContext const*);

    MCNAPI std::unique_ptr<BlockComponentDescription>
           createDescription(std::string const&, ::cereal::ReflectionCtx const&) const;

    MCNAPI std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>> const&
           getSchema() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addAllComponentUpgrades(::CerealDocumentUpgrader&, ::cereal::ReflectionCtx const&);

    MCNAPI static void
    addComponentMetadata(::cereal::ReflectionCtx&, std::string const&, ::BlockComponentFactory::ComponentMetadata&&);

    MCNAPI static void registerAllCerealDescriptions(::cereal::ReflectionCtx&);

    MCNAPI static void registerComponentUpgrade(::CerealDocumentUpgrader&, std::shared_ptr<CerealSchemaUpgrade>);

    MCNAPI static std::unordered_map<std::string, BlockComponentFactory::ComponentMetadata> const*
    registeredCerealComponents(::cereal::ReflectionCtx const&);

    MCNAPI static std::unordered_map<std::string, BlockComponentFactory::ComponentMetadata>&
    setupContextInstanceIfRequired(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackLoadContext const*);
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
