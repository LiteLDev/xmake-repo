#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/components/BiomeDecorationFeature.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseGameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class BiomeComponentFactory;
class BiomeRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevelStorageManagerConnector;
#else // @header-generator platform
#endif // @header-generator platform
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
class SurfaceBuilderRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeDecorationFeature;
#endif // @header-generator platform
struct BiomeJsonDocumentGlueResolvedBiomeData;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class BiomeManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // BiomeManager inner types define
    using onLevelBiomesRegisteredSignature = void(::BiomeRegistry&);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16>                                                         mBiomes;
    ::ll::UntypedStorage<1, 16>                                                         mBiomeComponentFactory;
    ::ll::UntypedStorage<1, 16>                                                         mSurfaceBuilders;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<AutomaticFeatureRules>>>   mAutomaticFeatureRules;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BiomeDecorationFeature>> mBiomeDecorationFeatureMap;
    ::ll::UntypedStorage<8, 88> mOnLevelBiomesRegisteredPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::BiomeRegistry>>>               mBiomes;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::BiomeComponentFactory>>>       mBiomeComponentFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::OwnerPtr<::SurfaceBuilderRegistry>>>      mSurfaceBuilders;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AutomaticFeatureRules>>> mAutomaticFeatureRules;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>>
        mBiomeDecorationFeatureMap;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::BiomeRegistry&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnLevelBiomesRegisteredPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeManager(::OwnerPtr<BiomeRegistry>, std::unique_ptr<AutomaticFeatureRules>);
#else // @header-generator platform
    MCAPI
    BiomeManager(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializeServerBiomeRegistry(
        ::IWorldRegistriesProvider&,
        ::LevelSeed64,
        ::LevelStorage&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&
#else // @header-generator platform
    MCAPI void _initializeServerBiomeRegistry(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeComponentFactory& getBiomeComponentFactory();

    MCNAPI std::unordered_map<HashedString, BiomeDecorationFeature> const& getBiomeDecorationFeatures() const;

    MCNAPI ::BiomeRegistry& getBiomeRegistry();

    MCNAPI ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    MCNAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::IWorldRegistriesProvider&,
        ::ResourcePackManager&,
        ::LevelSeed64,
        ::LevelStorage&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&
#else // @header-generator platform
    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::ResourcePackManager&                             resourcePackManager,
        ::LevelSeed64                                      levelSeed,
        ::LevelStorage&                                    levelStorage,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI void loadBiomeData(::LevelStorage&);

    MCNAPI void sendLevelBiomesRegistered();

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToLevelBiomesRegistered(std::function<void(BiomeRegistry&)>);

    MCNAPI ~BiomeManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool use3DBiomeMaps(::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI ~BiomeManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::OwnerPtr<BiomeRegistry>, std::unique_ptr<AutomaticFeatureRules>);
#else // @header-generator platform
    MCAPI void*
    $ctor(::OwnerPtr<::BiomeRegistry> biomes, ::std::unique_ptr<::AutomaticFeatureRules> automaticFeatureRules);
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
