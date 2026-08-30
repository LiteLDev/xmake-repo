#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/DlcBatchCacheModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IEntitlementManager;
class IPersonaClient;
class ISkinRepository;
class IStoreCatalogItem;
class IStoreCatalogRepository;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
namespace persona { class DlcImportTracker; }
// clang-format on

class SDLSkinPackCollectionModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::DlcBatchCacheModel>                                    mDlcBatchCacheModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISkinRepository>>                        mSkinRepository;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                                         mPersonaClient;
    ::ll::UntypedStorage<8, 24>                                                        mEntitlementManager;
    ::ll::UntypedStorage<8, 24>                                                        mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<persona::DlcImportTracker>>> mTrackedImports;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SkinPackModel>>>             mSkinPacks;
    ::ll::TypedStorage<8, 8, ulong>                                                    mStartFetchIndex;
    ::ll::TypedStorage<8, 8, ulong>                                                    mVisibleEndRange;
    ::ll::TypedStorage<4, 4, uint>                                                     mVisiblePacks;
    ::ll::TypedStorage<4, 4, uint>                                                     mMaxPacksPerFetch;
    ::ll::TypedStorage<4, 4, int>                                                      mSideLoadedPacksCollected;
    // NOLINTEND

public:
    // prevent constructor by default
    SDLSkinPackCollectionModel& operator=(SDLSkinPackCollectionModel const&);
    SDLSkinPackCollectionModel(SDLSkinPackCollectionModel const&);
    SDLSkinPackCollectionModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SDLSkinPackCollectionModel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        std::shared_ptr<ISkinRepository>,
        ::IPersonaClient&
    );

    MCNAPI void addBuiltInSkinPackModel(std::shared_ptr<SkinPackModel>);

    MCNAPI ulong collectLegacyAndSideLoadedSkinPacks();

    MCNAPI void collectOffers(std::vector<gsl::not_null<IStoreCatalogItem*>> const&);

    MCNAPI ulong collectSkinsForOffline(bool, ::mce::UUID const&);

    MCNAPI std::shared_ptr<SkinPackModel> getFirstSkinPack() const;

    MCNAPI ulong getNumSkinPacks() const;

    MCNAPI std::shared_ptr<SkinPackModel> getSkinPackAtIndex(ulong const&) const;

    MCNAPI ulong getVisibleEndRange() const;

    MCNAPI void incrementVisibleEndRange(ulong const&);

    MCNAPI void setMaxPacksPerFetch(uint const&);

    MCNAPI void tick(::ui::DirtyFlag&);

    MCNAPI ~SDLSkinPackCollectionModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        std::shared_ptr<ISkinRepository>,
        ::IPersonaClient&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
