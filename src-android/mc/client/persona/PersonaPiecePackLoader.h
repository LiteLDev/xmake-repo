#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PersonaPieceFactory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/persona__PackEvictionState.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class DirectoryPackSource;
class GeometryGroup;
class IContentKeyProvider;
class IMinecraftEventing;
class IPackManifestFactory;
class IPackSourceFactory;
class MinEngineVersion;
class Pack;
class PackAccessStrategy;
class PackSource;
class PersonaPackDiskLRUIndex;
class PersonaPiece;
class ResourceLoadManager;
class TaskGroup;
namespace persona { class PieceOfferWrapper; }
namespace persona { struct PackEvictionDrainSnapshot; }
namespace persona { struct PackEvictionPass; }
namespace persona { struct PackEvictionTarget; }
namespace persona { struct PackEvictionTelemetrySnapshot; }
// clang-format on

class PersonaPiecePackLoader {
public:
    // PersonaPiecePackLoader inner types declare
    // clang-format off
    struct StartupParams;
    // clang-format on

    // PersonaPiecePackLoader inner types define
    struct StartupParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mPersonaPremiumPath;
        ::ll::UntypedStorage<8, 24> mPersonaPremiumDevPath;
        ::ll::UntypedStorage<8, 24> mSourceFactory;
        ::ll::UntypedStorage<8, 24> mManifestFactory;
        ::ll::UntypedStorage<8, 24> mKeyProvider;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartupParams& operator=(StartupParams const&);
        StartupParams(StartupParams const&);
        StartupParams();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StartupParams();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ProcessEmotesCallback =
        std::function<void(const std::vector<std::string>&, std::shared_ptr<ActorAnimationGroup>)>;

    using EvictionTarget = ::persona::PackEvictionTarget;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                          mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                            mDiskTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryGroup>>                       mSkinGeometryGroup;
    ::ll::UntypedStorage<8, 24>                                                     mResourceLoadManager;
    ::ll::UntypedStorage<8, 24>                                                     mEventing;
    ::ll::TypedStorage<8, 352, ::PersonaPieceFactory>                               mPieceFactory;
    ::ll::UntypedStorage<8, 48>                                                     mProcessEmotesCallback;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<PersonaPiece>>> mPersonaPieceRepo;
    ::ll::TypedStorage<4, 40, std::mutex>                                           mPersonaPieceRepoLock;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<std::string>>>                mPersonaPieceByType;
    ::ll::TypedStorage<8, 48, std::deque<gsl::not_null<std::shared_ptr<Pack>>>>     mPendingLoadsQueue;
    ::ll::TypedStorage<8, 24, std::set<mce::UUID>>                                  mPendingLoadsLookup;
    ::ll::TypedStorage<8, 24, std::set<mce::UUID>>                                  mLoadingPacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, SemVersion>>            mKnownPersonaPiecePackIdentities;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSource>>                           mAllPersonaPiecePacksSource;
    ::ll::TypedStorage<8, 8, ::DirectoryPackSource*>                                mPremiumCacheSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PersonaPackDiskLRUIndex>>              mPackDiskLRUIndex;
    ::ll::TypedStorage<1, 1, bool>                                                  mAutoEvictionEnabled;
    ::ll::TypedStorage<8, 192, ::persona::PackEvictionState>                        mEvictionState;
    ::ll::UntypedStorage<1, 144>                                                    mAllEmotePieceIdsMutex;
    ::ll::UntypedStorage<8, 32>                                                     mAllEmotePieceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPiecePackLoader& operator=(PersonaPiecePackLoader const&);
    PersonaPiecePackLoader(PersonaPiecePackLoader const&);
    PersonaPiecePackLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaPiecePackLoader(
        ::TaskGroup&,
        std::shared_ptr<GeometryGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>
    );

    MCNAPI void _findAndAddPiecesInPack(
        ::gsl::not_null<std::shared_ptr<Pack>>,
        ::PackAccessStrategy&,
        std::vector<std::string>&,
        bool,
        bool
    );

    MCNAPI void enablePiecePackAutoEviction();

    MCNAPI void findAndAddPiecesInPack(::gsl::not_null<std::shared_ptr<Pack>>, std::vector<std::string>&, bool, bool);

    MCNAPI std::shared_ptr<Pack> findPack(::mce::UUID const&) const;

    MCNAPI void forEachEmote(::brstd::move_only_function<void(const std::string&)>) const;

    MCNAPI void forEachPersonaPack(std::function<void(const Pack&)> const&) const;

    MCNAPI std::vector<persona::PieceOfferWrapper>
           getDefaultPieceWrappersOfTypes(std::vector<SharedTypes::persona::PieceType> const&) const;

    MCNAPI ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const;

    MCNAPI ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const&) const;

    MCNAPI void initPackSources(::PersonaPiecePackLoader::StartupParams const&);

    MCNAPI bool isKnownPersonaPiece(::mce::UUID const&) const;

    MCNAPI bool isKnownPersonaPieceUnloaded(::mce::UUID const&) const;

    MCNAPI bool isPersonaPieceInRepo(::mce::UUID const&) const;

    MCNAPI bool isPersonaPieceInRepo(std::string const&) const;

    MCNAPI bool isPersonaPieceLoading(::mce::UUID const&) const;

    MCNAPI bool isPieceLoaded(::mce::UUID const&) const;

    MCNAPI void loadBuiltInPacks(std::vector<std::string>&);

    MCNAPI void loadPiecePack(::mce::UUID);

    MCNAPI void queueImportOfPersonaPiecePack(::gsl::not_null<std::shared_ptr<Pack>>);

    MCNAPI ::PersonaPiece const& registerClassicSkinPiece(std::string const&, ::PersonaPiece&&);

    MCNAPI void touchPackForPiece(std::string const&);

    MCNAPI void update(std::shared_ptr<ActorAnimationGroup>);

    MCNAPI ~PersonaPiecePackLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::TaskGroup&,
        std::shared_ptr<GeometryGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
