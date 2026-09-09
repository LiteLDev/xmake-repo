#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/realms/RealmsWorldPackEditor.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDetails.h"
#include "mc/client/world/PendingPackAction.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsWorldPackEditor; }
// clang-format on

namespace OreUI {

class RealmsWorldPackEditorQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldPackEditorQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                       mIsDirty;
    ::ll::UntypedStorage<8, 24>                                          mRealmsWorldPackEditor;
    ::ll::UntypedStorage<8, 24>                                          mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mCollectionDirtySub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mRealmsWorldPackEditorFetchStatusSub;
    ::ll::UntypedStorage<4, 12>                                          mRealmsWorldPackEditorFetchStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mRealmsWorldPackEditorSaveStatusSub;
    ::ll::UntypedStorage<8, 48>                                          mRealmsWorldPackEditorSaveStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mRealmsWorldPackEditorPackContentChangedSub;
    ::ll::TypedStorage<1, 1, bool>                                       mIsPackContentChanged;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mSelectedResourcePackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mAvailableResourcePackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mMarketplacePassResourcePackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mSelectedBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mAvailableBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mMarketplacePassBehaviorPackDetails;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>>           mGlobalResourcePackDetails;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPackApplicationErrorSub;
    ::ll::TypedStorage<1, 2, std::optional<::World::PackActionError>>    mPackApplicationError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPendingPackActionSub;
    ::ll::TypedStorage<8, 72, std::optional<::World::PendingPackAction>> mPendingPackAction;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mChangePackPriorityErrorSub;
    ::ll::TypedStorage<1, 2, std::optional<::World::PackActionError>>    mChangePackPriorityError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mMarketplacePackDownloadStatusSub;
    ::ll::UntypedStorage<8, 56>                                          mMarketplacePackDownloadStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditorQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackEditorQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsWorldPackEditorQueriesFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<World::PackDetails> _collectionToDetails(std::shared_ptr<ContentItemCollection>);

    MCNAPI void _regeneratePackDetails();

    MCNAPI std::vector<World::PackDetails> const& getAvailableBehaviorPacks() const;

    MCNAPI std::vector<World::PackDetails> const& getAvailableResourcePacks() const;

    MCNAPI std::optional<::World::PackActionError> const& getChangePackPriorityError() const;

    MCNAPI std::vector<World::PackDetails> const& getGlobalResourcePacks() const;

    MCNAPI bool getIsPackEditorContentChanged() const;

    MCNAPI std::optional<IMarketplacePackDownloader::MarketplacePackDownloadStatus> const&
           getMarketplacePackDownloadStatus();

    MCNAPI std::vector<World::PackDetails> const& getMarketplacePassBehaviorPacks() const;

    MCNAPI std::vector<World::PackDetails> const& getMarketplacePassResourcePacks() const;

    MCNAPI std::optional<::World::PackActionError> const& getPackApplicationError() const;

    MCNAPI std::optional<std::string> const& getPackEditorFailedUploadPackName() const;

    MCNAPI std::optional<Realms::GenericStatus> getPackEditorFetchError() const;

    MCNAPI ::Realms::RealmsWorldPackEditor::ProcessState getPackEditorFetchState() const;

    MCNAPI std::optional<Realms::GenericStatus> const& getPackEditorSaveError() const;

    MCNAPI ::Realms::RealmsWorldPackEditor::ProcessState getPackEditorSaveState() const;

    MCNAPI std::optional<::World::PendingPackAction> const& getPendingPackAction() const;

    MCNAPI std::vector<World::PackDetails> const& getSelectedBehaviorPacks() const;

    MCNAPI std::vector<World::PackDetails> const& getSelectedResourcePacks() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackEditor>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
