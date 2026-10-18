#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/BiomeIdType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/registry/WellKnownBiomeTags.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelStorageManagerConnector;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class LevelStorage;
class LinkedAssetValidator;
class ResourcePackManager;
class WellKnownTagID;
struct BiomeHashType;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeIdType;
#endif // @header-generator platform
struct BiomeJsonDocumentGlue;
struct BiomeJsonDocumentGlueResolvedBiomeData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeTagIDType;
struct BiomeTagSetIDType;
#endif // @header-generator platform
struct DimensionType;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BiomeRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeComparator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LoadedBiomeDocument;
#endif // @header-generator platform
    struct SeasonTextureRowSettings;
    // clang-format on

    // BiomeRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct BiomeComparator {};
#else // @header-generator platform
    struct BiomeComparator {
    public:
        // BiomeComparator inner types define
        using is_transparent = void;
    };

    struct LoadedBiomeDocument {};
#endif // @header-generator platform

    struct SeasonTextureRowSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTemperature;
        ::ll::TypedStorage<4, 4, float> mDownfall;
        ::ll::TypedStorage<4, 4, float> mFoliageSnow;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BiomeNameLookupMap = std::unordered_map<ulong, std::unique_ptr<Biome>>;
#else // @header-generator platform
    using BiomeNameLookupMap = ::std::unordered_map<uint64, ::std::unique_ptr<::Biome>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>> mTagRegistry;
    ::ll::TypedStorage<8, 720, ::WellKnownBiomeTags const>                              mWellKnownBiomeTags;
    ::ll::TypedStorage<1, 1, bool>                                                      mSurfaceBuildersResolved;
    ::ll::TypedStorage<1, 1, bool>                                                      mClientInitialized;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::unique_ptr<::Biome>>> mBiomesByName;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<
            ::gsl::not_null<::Biome*>,
            ::BiomeRegistry::BiomeComparator,
            ::std::vector<::gsl::not_null<::Biome*>>>>
        mBiomesById;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BiomeIdType const, ::std::string const&>>>
                                                               mRemovedBiomesIdAndFullName;
    ::ll::TypedStorage<4, 4, uint>                             mNextCustomBiomeId;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mClosedForRegistration;
    ::ll::TypedStorage<8, 8, ::Biome*>                         mEmptyBiome;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeRegistry::SeasonTextureRowSettings>> mSeasonTextureRowSettings;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeRegistry::SeasonTextureRowSettings>> mSeasonTextureRowSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BiomeRegistry();
#else // @header-generator platform
    virtual ~BiomeRegistry() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeRegistry();
#else // @header-generator platform
    MCAPI BiomeRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome& _register(std::string_view const, ::BiomeIdType);
#else // @header-generator platform
    MCAPI ::Biome& _register(::std::string_view name, ::BiomeIdType id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _save(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void _save(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong assignSeasonTextureRow(::BiomeRegistry::SeasonTextureRowSettings const&, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI
        uint64 assignSeasonTextureRow(::BiomeRegistry::SeasonTextureRowSettings const& desiredSettings, uint64 maxSize);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const biomeGetTags(::Biome const&) const;
#else // @header-generator platform
    MCAPI bool biomeHasTag(::Biome const& biome, ::WellKnownTagID const& tagID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool biomeHasTag(::Biome const&, ::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::Biome const*> getBiomesInDimension(::DimensionType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void initServerFromPacks(
        ::IWorldRegistriesProvider& worldRegistries,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
            biomeIdToResolvedData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);
#else // @header-generator platform
    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void loadAllBiomeDocuments(
        ::ResourcePackManager const&                       loader,
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::BaseGameVersion const&                           baseGameVersion,
        ::BiomeJsonDocumentGlue&                           biomeJsonDocumentGlue,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>&
                              biomeIdToResolvedData,
        bool                  betaApis,
        ::IMinecraftEventing& eventing
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadBiomeData(::LevelStorage const&);
#else // @header-generator platform
    MCAPI void loadBiomeData(::LevelStorage const& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadBiomeTable(::LevelStorage const&);
#else // @header-generator platform
    MCAPI void loadBiomeTable(::LevelStorage const& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* lookupByHash(::HashedString const&) const;
#else // @header-generator platform
    MCFOLD ::Biome const* lookupByHashId(::BiomeHashType id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome* lookupByHash(::HashedString const&);
#else // @header-generator platform
    MCFOLD ::Biome* lookupByHashId(::BiomeHashType id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* lookupById(::BiomeIdType) const;
#else // @header-generator platform
    MCAPI ::Biome* lookupById(::BiomeIdType id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome* lookupById(::BiomeIdType);
#else // @header-generator platform
    MCFOLD ::Biome const* lookupByName(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* lookupByName(std::string const&) const;
#else // @header-generator platform
    MCFOLD ::Biome* lookupByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome* lookupByName(std::string const&);

    MCNAPI ::Biome& registerBiomeWithExplicitId(std::string_view const, ::BiomeIdType);

    MCNAPI ::Biome& registerCustomBiome(std::string_view const);

    MCNAPI void registrationFinished();

    MCNAPI void saveBiomeTable(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void saveBiomeTable(::LevelStorage& levelStorage) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
