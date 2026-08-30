#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
class LinkedAssetValidator;
class MinEngineVersion;
class ResourcePackManager;
namespace Json { class Value; }
// clang-format on

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> featureName;
        ::ll::TypedStorage<8, 24, std::string> binaryJsonOutput;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::FeatureRegistry::FeatureBinaryJsonFormat const&) const;

        MCNAPI ~FeatureBinaryJsonFormat();
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
    ::ll::UntypedStorage<8, 24>                                                      mValidator;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IFeature>>>                mFeatureRegistry;
    ::ll::UntypedStorage<8, 24>                                                      mFeatureSlots;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>>               mFeatureLookupMap;
    ::ll::TypedStorage<8, 24, std::vector<FeatureRegistry::FeatureBinaryJsonFormat>> mFeatureSerializeData;
    ::ll::TypedStorage<1, 1, bool>                                                   mClientInitialized;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mLargeFeaturePasses;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mSmallFeaturePasses;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FeatureRegistry(::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI void _registerFeature(std::string const&, std::unique_ptr<IFeature>);

    MCNAPI bool _setupFeature(
        ::IWorldRegistriesProvider&,
        bool,
        ::ResourcePackManager const&,
        std::string const&,
        std::string const&,
        ::MinEngineVersion const&,
        bool
    );

    MCNAPI bool _setupFeature(
        ::IWorldRegistriesProvider&,
        bool,
        ::ResourcePackManager const&,
        std::string const&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        bool
    );

    MCNAPI void forEachFeature(::brstd::function_ref<void(const HashedString&, WeakRef<IFeature>)>) const;

    MCNAPI std::vector<std::string> getLargeFeaturePasses() const;

    MCNAPI std::vector<std::string> getSmallFeaturePasses() const;

    MCNAPI bool isFeaturePassDefined(std::string const&) const;

    MCNAPI void loadFromDefinitions(::IWorldRegistriesProvider&, ::ResourcePackManager const&, bool const);

    MCNAPI void loadFromJsonData(
        ::IWorldRegistriesProvider&,
        ::ResourcePackManager const&,
        std::vector<FeatureRegistry::FeatureBinaryJsonFormat> const&
    );

    MCNAPI ::WeakRef<IFeature> lookupByName(std::string const&) const;

    MCNAPI ::WeakRef<IFeature> lookupOrReserveFeature(std::string const&);

    MCNAPI ::WeakRef<IFeature> reserveFeature(std::string const&);

    MCNAPI std::string const& reverseLookupString(::IFeature const&) const;

    MCNAPI void setLargeFeaturePasses(std::vector<std::string>);

    MCNAPI void setSmallFeaturePasses(std::vector<std::string>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string _featureIdentifierFromInput(std::string_view, ::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& AFTER_SKY_PASS();

    MCNAPI static std::string const& AFTER_SURFACE_PASS();

    MCNAPI static std::string const& AFTER_UNDERGROUND_PASS();

    MCNAPI static std::string const& BEFORE_SKY_PASS();

    MCNAPI static std::string const& BEFORE_SURFACE_PASS();

    MCNAPI static std::string const& BEFORE_UNDERGROUND_PASS();

    MCNAPI static std::string const& FINAL_PASS();

    MCNAPI static std::string const& FIRST_PASS();

    MCNAPI static std::string const& PREGENERATION_PASS();

    MCNAPI static std::string const& SKY_PASS();

    MCNAPI static std::string const& SURFACE_PASS();

    MCNAPI static std::string const& UNDERGROUND_PASS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
    // NOLINTEND
};
