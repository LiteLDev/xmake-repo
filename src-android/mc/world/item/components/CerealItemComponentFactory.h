#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/string/util/string_hash.h"
#include "mc/resources/PackLoadRequirement.h"
#include "mc/util/CerealSchemaUpgradeSet.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class CerealSchemaUpgrade;
class Experiments;
class ItemComponent;
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
        using Ctor = std::unique_ptr<ItemComponent> (*)();

        using ParseFunction = std::function<bool(const Experiments&, const SemVersion&)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<ItemComponent> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, std::vector<PackLoadRequirement>>    requirements;
        ::ll::UntypedStorage<8, 32>                                    releasedMinFormatVersion;
        ::ll::UntypedStorage<8, 32>                                    deprecatedVersion;
        ::ll::UntypedStorage<8, 32>                                    versionUpgrades;
        ::ll::UntypedStorage<8, 48>                                    onParseCallback;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ComponentMetadata(::CerealItemComponentFactory::ComponentMetadata const&);

        MCNAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CerealItemComponentFactory::ComponentMetadata const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CerealItemComponentFactory::ComponentMetadata, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, CerealItemComponentFactory::ComponentMetadata>>>> mRegisteredComponents;
    ::ll::UntypedStorage<8, 24> mReleasedMinFormatVersionForAnyComponent;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&,
        std::string const&,
        ::CerealItemComponentFactory::ComponentMetadata&&,
        std::optional<SemVersion>
    );

    MCNAPI static std::shared_ptr<ItemComponent>
    constructItemComponent(std::string const&, ::cereal::ReflectionCtx const&);

    MCNAPI static void
    deprecateComponentStartingFromVersion(std::string const&, ::SemVersion const, ::cereal::ReflectionCtx const&);

    MCNAPI static std::optional<SemVersion> getReleasedMinFormatVersionForAnyComponent(::cereal::ReflectionCtx const&);

    MCNAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx&);
    // NOLINTEND
};
