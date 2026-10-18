#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
class IFeature;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> featureName;
        ::ll::TypedStorage<8, 24, std::string> binaryJsonOutput;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> featureName;
        ::ll::TypedStorage<8, 32, ::std::string> binaryJsonOutput;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FeatureBinaryJsonFormat& operator=(FeatureBinaryJsonFormat const&);
        FeatureBinaryJsonFormat();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::FeatureRegistry::FeatureBinaryJsonFormat const&) const;
#else // @header-generator platform
        MCAPI FeatureBinaryJsonFormat(::FeatureRegistry::FeatureBinaryJsonFormat const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~FeatureBinaryJsonFormat();
#else // @header-generator platform
        MCFOLD ::FeatureRegistry::FeatureBinaryJsonFormat& operator=(::FeatureRegistry::FeatureBinaryJsonFormat&&);

        MCAPI ~FeatureBinaryJsonFormat();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::FeatureRegistry::FeatureBinaryJsonFormat const&);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                      mValidator;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IFeature>>>                mFeatureRegistry;
    ::ll::UntypedStorage<8, 24>                                                      mFeatureSlots;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>>               mFeatureLookupMap;
    ::ll::TypedStorage<8, 24, std::vector<FeatureRegistry::FeatureBinaryJsonFormat>> mFeatureSerializeData;
    ::ll::TypedStorage<1, 1, bool>                                                   mClientInitialized;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mLargeFeaturePasses;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mSmallFeaturePasses;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>        mValidator;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IFeature>>>              mFeatureRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::IFeature>>>                     mFeatureSlots;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>              mFeatureLookupMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat>> mFeatureSerializeData;
    ::ll::TypedStorage<1, 1, bool>                                                       mClientInitialized;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mLargeFeaturePasses;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mSmallFeaturePasses;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureRegistry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FeatureRegistry(::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI explicit FeatureRegistry(::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerFeature(std::string const&, std::unique_ptr<IFeature>);
#else // @header-generator platform
    MCAPI void _registerFeature(::std::string const& name, ::std::unique_ptr<::IFeature> featurePtr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _setupFeature(
        ::IWorldRegistriesProvider&,
        bool,
        ::ResourcePackManager const&,
        std::string const&,
        std::string const&,
        ::MinEngineVersion const&,
        bool
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _setupFeature(
        ::IWorldRegistriesProvider&  worldRegistries,
        bool                         isBasePack,
        ::ResourcePackManager const& rpm,
        ::std::string const&         featureName,
        ::std::string const&         jsonDefinition,
        ::MinEngineVersion const&    minEngineVersion,
        bool                         serializeFeatures
    );
#endif

    MCAPI bool _setupFeature(
        ::IWorldRegistriesProvider&  worldRegistries,
        bool                         isBasePack,
        ::ResourcePackManager const& rpm,
        ::std::string const&         featureName,
        ::Json::Value const&         jsonDefinition,
        ::MinEngineVersion const&    minEngineVersion,
        bool                         serializeFeatures
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _setupFeature(
        ::IWorldRegistriesProvider&,
        bool,
        ::ResourcePackManager const&,
        std::string const&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        bool
#else // @header-generator platform
    MCAPI bool isFeaturePassDefined(::std::string const& featurePass) const;

    MCAPI void loadFromDefinitions(
        ::IWorldRegistriesProvider&  worldRegistries,
        ::ResourcePackManager const& rpm,
        bool                         clientSideGenEnabled
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachFeature(::brstd::function_ref<void(const HashedString&, WeakRef<IFeature>)>) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void loadFromJsonData(
        ::IWorldRegistriesProvider&                                      worldRegistries,
        ::ResourcePackManager const&                                     rpm,
        ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat> const& jsonData
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getLargeFeaturePasses() const;
#else // @header-generator platform
    MCAPI ::WeakRef<::IFeature> lookupByName(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getSmallFeaturePasses() const;
#else // @header-generator platform
    MCAPI ::WeakRef<::IFeature> reserveFeature(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isFeaturePassDefined(std::string const&) const;
#else // @header-generator platform
    MCAPI void setLargeFeaturePasses(::std::vector<::std::string> largeFeaturePasses);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setSmallFeaturePasses(::std::vector<::std::string> smallFeaturePasses);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string _featureIdentifierFromInput(std::string_view, ::Json::Value const&);
#else // @header-generator platform
    MCAPI static ::std::string
    _featureIdentifierFromInput(::std::string_view filePath, ::Json::Value const& jsonDefinition);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& AFTER_SKY_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& AFTER_SKY_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& AFTER_SURFACE_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& AFTER_SURFACE_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& AFTER_UNDERGROUND_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& AFTER_UNDERGROUND_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BEFORE_SKY_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& BEFORE_SKY_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BEFORE_SURFACE_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& BEFORE_SURFACE_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& BEFORE_UNDERGROUND_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& BEFORE_UNDERGROUND_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& FINAL_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& FINAL_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& FIRST_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& FIRST_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PREGENERATION_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& PREGENERATION_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SKY_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& SKY_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SURFACE_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& SURFACE_PASS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& UNDERGROUND_PASS();
#else // @header-generator platform
    MCAPI static ::std::string const& UNDERGROUND_PASS();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
#endif // @header-generator platform
    // NOLINTEND
};
