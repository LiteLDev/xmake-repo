#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/registry/WellKnownBiomeTags.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class HashedString;
class ILevelStorageManagerConnector;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
class WellKnownTagID;
struct BiomeHashType;
struct BiomeJsonDocumentGlue;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct DimensionType;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeComparator;
    struct SeasonTextureRowSettings;
    // clang-format on

    // BiomeRegistry inner types define
    struct BiomeComparator {};

    struct SeasonTextureRowSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTemperature;
        ::ll::TypedStorage<4, 4, float> mDownfall;
        ::ll::TypedStorage<4, 4, float> mFoliageSnow;
        // NOLINTEND
    };

    using BiomeNameLookupMap = std::unordered_map<ulong, std::unique_ptr<Biome>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 104> mTagRegistry;
    ::ll::TypedStorage<8, 720, ::WellKnownBiomeTags const> mWellKnownBiomeTags;
    ::ll::TypedStorage<1, 1, bool> mSurfaceBuildersResolved;
    ::ll::TypedStorage<1, 1, bool> mClientInitialized;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unique_ptr<Biome>>> mBiomesByName;
    ::ll::UntypedStorage<8, 24> mBiomesById;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<const BiomeIdType, const std::string&>>> mRemovedBiomesIdAndFullName;
    ::ll::TypedStorage<4, 4, uint> mNextCustomBiomeId;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mClosedForRegistration;
    ::ll::TypedStorage<8, 8, ::Biome*> mEmptyBiome;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    ::ll::TypedStorage<8, 24, std::vector<BiomeRegistry::SeasonTextureRowSettings>> mSeasonTextureRowSettings;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeRegistry();

    MCNAPI ::Biome& _register(std::string_view const, ::BiomeIdType);

    MCNAPI void _save(::LevelStorage&) const;

    MCNAPI ulong assignSeasonTextureRow(::BiomeRegistry::SeasonTextureRowSettings const&, ulong);

    MCNAPI std::vector<std::string> const biomeGetTags(::Biome const&) const;

    MCNAPI bool biomeHasTag(::Biome const&, ::HashedString const&) const;

    MCNAPI bool biomeHasTag(::Biome const&, ulong const) const;

    MCNAPI bool biomeHasTag(::Biome const&, ::IDType<BiomeTagIDType> const&) const;

    MCNAPI bool biomeHasTag(::Biome const&, ::WellKnownTagID const&) const;

    MCNAPI void forEachBiome(::brstd::function_ref<void(const Biome&)>) const;

    MCNAPI void forEachNonConstBiome(::brstd::function_ref<void(Biome&)>);

    MCNAPI std::vector<const Biome*> getBiomesInDimension(::DimensionType) const;

    MCNAPI std::vector<BiomeRegistry::SeasonTextureRowSettings> const& getSeasonTextureRowSettings() const;

    MCNAPI std::vector<BiomeRegistry::SeasonTextureRowSettings>& getSeasonTextureRowSettings();

    MCNAPI ::TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>> const& getTagRegistry() const;

    MCNAPI ::TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>& getTagRegistry();

    MCNAPI void initServerFromPacks(
        ::IWorldRegistriesProvider&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&
    );

    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI bool isRegistrationFinished() const;

    MCNAPI void loadAllBiomeDocuments(
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::BaseGameVersion const&,
        ::BiomeJsonDocumentGlue&,
        std::unordered_map<std::string, std::unique_ptr<BiomeJsonDocumentGlueResolvedBiomeData>>&,
        bool,
        ::IMinecraftEventing&
    );

    MCNAPI void loadBiomeData(::LevelStorage const&);

    MCNAPI void loadBiomeTable(::LevelStorage const&);

    MCNAPI ::Biome const* lookupByHash(::HashedString const&) const;

    MCNAPI ::Biome* lookupByHash(::HashedString const&);

    MCNAPI ::Biome const* lookupById(::BiomeIdType) const;

    MCNAPI ::Biome* lookupById(::BiomeIdType);

    MCNAPI ::Biome const* lookupByName(std::string const&) const;

    MCNAPI ::Biome* lookupByName(std::string const&);

    MCNAPI ::Biome& registerBiomeWithExplicitId(std::string_view const, ::BiomeIdType);

    MCNAPI ::Biome& registerCustomBiome(std::string_view const);

    MCNAPI void registrationFinished();

    MCNAPI void saveBiomeTable(::LevelStorage&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
