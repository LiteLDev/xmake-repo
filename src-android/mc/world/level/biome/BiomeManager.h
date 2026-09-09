#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/biome/components/BiomeDecorationFeature.h"

// auto generated forward declare list
// clang-format off
class AutomaticFeatureRules;
class BaseGameVersion;
class BiomeComponentFactory;
class BiomeRegistry;
class ILevelStorageManagerConnector;
class IWorldRegistriesProvider;
class LevelSeed64;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
class SurfaceBuilderRegistry;
struct BiomeJsonDocumentGlueResolvedBiomeData;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class BiomeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                                         mBiomes;
    ::ll::UntypedStorage<1, 16>                                                         mBiomeComponentFactory;
    ::ll::UntypedStorage<1, 16>                                                         mSurfaceBuilders;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<AutomaticFeatureRules>>>   mAutomaticFeatureRules;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BiomeDecorationFeature>> mBiomeDecorationFeatureMap;
    ::ll::UntypedStorage<8, 88> mOnLevelBiomesRegisteredPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeManager(::OwnerPtr<BiomeRegistry>, std::unique_ptr<AutomaticFeatureRules>);

    MCNAPI void _initializeServerBiomeRegistry(
        ::IWorldRegistriesProvider&,
        ::LevelSeed64,
        ::LevelStorage&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&
    );

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
    );

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OwnerPtr<BiomeRegistry>, std::unique_ptr<AutomaticFeatureRules>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
