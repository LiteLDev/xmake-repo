#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/string/util/string_hash.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackLoadRequirement.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/CerealSchemaUpgradeSet.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/AllExperiments.h"
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
class ItemComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PackLoadRequirement;
#endif // @header-generator platform
struct PackLoadInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealItemComponentFactory {
public:
    // CerealItemComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // CerealItemComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // ComponentMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        using Ctor = std::unique_ptr<ItemComponent> (*)();
#else // @header-generator platform
        using Ctor = ::std::unique_ptr<::ItemComponent> (*)();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using ParseFunction = std::function<bool(const Experiments&, const SemVersion&)>;
#else // @header-generator platform
        using ParseFunction = ::std::function<bool(::Experiments const&, ::SemVersion const&)>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<ItemComponent> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, std::vector<PackLoadRequirement>>    requirements;
        ::ll::UntypedStorage<8, 32>                                    releasedMinFormatVersion;
        ::ll::UntypedStorage<8, 32>                                    deprecatedVersion;
        ::ll::UntypedStorage<8, 32>                                    versionUpgrades;
        ::ll::UntypedStorage<8, 48>                                    onParseCallback;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemComponent> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>    requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           releasedMinFormatVersion;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           deprecatedVersion;
        ::ll::TypedStorage<8, 24, ::CerealSchemaUpgradeSet>                versionUpgrades;
        ::ll::TypedStorage<8, 64, ::std::function<bool(::Experiments const&, ::SemVersion const&)>> onParseCallback;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);
        ComponentMetadata();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ComponentMetadata(::CerealItemComponentFactory::ComponentMetadata const&);

        MCNAPI ::CerealItemComponentFactory::ComponentMetadata&
#else // @header-generator platform
        MCAPI ::CerealItemComponentFactory::ComponentMetadata&
#endif // @header-generator platform
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

        MCAPI ~ComponentMetadata();
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // constructor thunks
#else // @header-generator platform
        // destructor thunk
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::CerealItemComponentFactory::ComponentMetadata const&);
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CerealItemComponentFactory::ComponentMetadata, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, CerealItemComponentFactory::ComponentMetadata>>>> mRegisteredComponents;
    ::ll::UntypedStorage<8, 24> mReleasedMinFormatVersionForAnyComponent;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::CerealItemComponentFactory::ComponentMetadata,
            ::Util::string_hash,
            ::std::equal_to<void>>>
                                            mRegisteredComponents;
    ::ll::TypedStorage<8, 24, ::SemVersion> mReleasedMinFormatVersionForAnyComponent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&,
        std::string const&,
        ::CerealItemComponentFactory::ComponentMetadata&&,
        std::optional<SemVersion>
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    addAllComponentUpgrades(::CerealDocumentUpgrader& documentUpgrader, ::cereal::ReflectionCtx const& ctx);
#endif

    MCAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&                          ctx,
        ::std::string const&                              componentName,
        ::CerealItemComponentFactory::ComponentMetadata&& metadata,
        ::std::optional<::SemVersion>                     releasedMinFormatVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<ItemComponent>
    constructItemComponent(std::string const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::ItemComponent>
    constructItemComponent(::std::string const& name, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    deprecateComponentStartingFromVersion(std::string const&, ::SemVersion const, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI static void deprecateComponentStartingFromVersion(
        ::std::string const&           name,
        ::SemVersion                   deprecatedVersion,
        ::cereal::ReflectionCtx const& ctx
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<SemVersion> getReleasedMinFormatVersionForAnyComponent(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::SemVersion>
    getReleasedMinFormatVersionForAnyComponent(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool isComponentBasedItemSchema(
        ::SemVersion const& formatVersion,
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& itemData,
        ::cereal::ReflectionCtx const&                                          ctx
    );
#endif

    MCAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(::CerealItemComponentFactory& instance, ::SemVersion version);

    MCAPI static bool validateCerealComponent(
        ::std::string const&           componentName,
        ::SemVersion const&            documentVersion,
        ::PackLoadInfo const&          packLoadInfo,
        ::cereal::ReflectionCtx const& ctx
    );
#endif // @header-generator platform
    // NOLINTEND
};
