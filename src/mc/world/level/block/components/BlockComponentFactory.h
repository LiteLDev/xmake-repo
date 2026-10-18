#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/IPackLoadScoped.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackLoadRequirement.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/CerealSchemaUpgradeSet.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/BlockComponentDescription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgrade;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
class PackLoadContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PackLoadRequirement;
struct BlockComponentDescription;
#endif // @header-generator platform
struct BlockComponentGroupDescription;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class BlockComponentFactory : public ::IPackLoadScoped, public ::Factory<BlockComponentDescription> {
#else // @header-generator platform
class BlockComponentFactory : public ::IPackLoadScoped, public ::Factory<::BlockComponentDescription> {
#endif // @header-generator platform
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // ComponentMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        using Ctor = std::unique_ptr<BlockComponentDescription> (*)();
#else // @header-generator platform
        using Ctor = ::std::unique_ptr<::BlockComponentDescription> (*)();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using ParseFunction = std::function<bool(const Experiments&, const Json::Value&, const SemVersion&, bool)>;
#else // @header-generator platform
        using ParseFunction =
            ::std::function<bool(::Experiments const&, ::Json::Value const&, ::SemVersion const&, bool)>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<BlockComponentDescription> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, std::vector<PackLoadRequirement>>                requirements;
        ::ll::UntypedStorage<8, 32>                                                releasedMinFormatVersion;
        ::ll::UntypedStorage<8, 32>                                                versionUpgrades;
        ::ll::UntypedStorage<8, 48>                                                onParseCallback;
        ::ll::UntypedStorage<1, 16>                                                mIsCustomComponent;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockComponentDescription> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>                requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>                       releasedMinFormatVersion;
        ::ll::TypedStorage<8, 24, ::CerealSchemaUpgradeSet>                            versionUpgrades;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<bool(::Experiments const&, ::Json::Value const&, ::SemVersion const&, bool)>>
                                       onParseCallback;
        ::ll::TypedStorage<1, 1, bool> mIsCustomComponent;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ComponentMetadata();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::BlockComponentFactory::ComponentMetadata& operator=(::BlockComponentFactory::ComponentMetadata&&);
#else // @header-generator platform
        MCAPI ::BlockComponentFactory::ComponentMetadata& operator=(::BlockComponentFactory::ComponentMetadata&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ComponentMetadata();
#else // @header-generator platform
        MCAPI ~ComponentMetadata();
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

#if defined(LL_PLAT_A) // @header-generator platform
    using CerealComponentsMap = std::unordered_map<std::string, BlockComponentFactory::ComponentMetadata>;
#else // @header-generator platform
    using CerealComponentsMap = ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>> mBlockComponentsSchema;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>>
        mBlockComponentsSchema;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockComponentFactory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockComponentFactory();
#else // @header-generator platform
    virtual ~BlockComponentFactory() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockComponentFactory(::PackLoadContext const*);
#else // @header-generator platform
    MCAPI void _buildBlockComponentsSchema();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _buildBlockComponentsSchema();
#else // @header-generator platform
    MCAPI void _registerLegacyDescriptions(::PackLoadContext const* packLoadContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerLegacyDescriptions(::PackLoadContext const*);

    MCNAPI std::unique_ptr<BlockComponentDescription>
           createDescription(std::string const&, ::cereal::ReflectionCtx const&) const;

    MCNAPI std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>> const&
           getSchema() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockComponentDescription>
    createDescription(::std::string const& name, ::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addAllComponentUpgrades(::CerealDocumentUpgrader&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI static void
    addAllComponentUpgrades(::CerealDocumentUpgrader& documentUpgrader, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    addComponentMetadata(::cereal::ReflectionCtx&, std::string const&, ::BlockComponentFactory::ComponentMetadata&&);
#else // @header-generator platform
    MCAPI static void registerAllCerealDescriptions(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerAllCerealDescriptions(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata> const*
    registeredCerealComponents(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata>&
    setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);
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
