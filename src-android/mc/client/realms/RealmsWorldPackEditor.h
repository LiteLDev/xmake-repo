#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/network/realms/Content.h"
#include "mc/client/network/realms/ContentType.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/realms/RealmsWorldPackContext.h"
#include "mc/client/services/download/IMarketplacePackDownloader.h"
#include "mc/client/world/PackActionError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/PublishedValue.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
struct PackContentItem;
struct PackSettingsInfo;
struct WorldContentItemCollectionsModel;
namespace Realms { class IContentApi; }
namespace Realms { class IRealmsUGCPackUploader; }
namespace Realms { class RealmsWorldPackContext; }
namespace World { class IWorldPackCollectionManager; }
namespace World { struct PendingPackAction; }
// clang-format on

namespace Realms {

class RealmsWorldPackEditor {
public:
    // RealmsWorldPackEditor inner types declare
    // clang-format off
    struct FetchStatus;
    struct SaveStatus;
    class RealmsWorldPackEditorImpl;
    // clang-format on

    // RealmsWorldPackEditor inner types define
    enum class ProcessState : int {
        IDLE    = 0,
        PENDING = 1,
        FAILURE = 2,
        SUCCESS = 3,
    };

    struct FetchStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldPackEditor::ProcessState> mState;
        ::ll::TypedStorage<4, 8, std::optional<Realms::GenericStatus>>          mError;
        // NOLINTEND
    };

    struct SaveStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldPackEditor::ProcessState> mState;
        ::ll::TypedStorage<4, 8, std::optional<Realms::GenericStatus>>          mError;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>                   mFailedUploadPackName;
        // NOLINTEND
    };

    class RealmsWorldPackEditorImpl
    : public ::std::enable_shared_from_this<Realms::RealmsWorldPackEditor::RealmsWorldPackEditorImpl> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                   mRealmsWorldPackContext;
        ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IContentApi>> mContentAPI;
        ::ll::UntypedStorage<8, 24>                                   mRealmsUGCPackUploader;
        ::ll::UntypedStorage<8, 16>                                   mWorldPackCollectionManager;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>>
                                                                   mGlobalResourcePackCollection;
        ::ll::UntypedStorage<8, 64>                                mCreateRealmsWorldContentSourceCallback;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsWorldPackContextStateSub;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mWorldCollectionChangedSub;
        ::ll::UntypedStorage<8, 8>                                 mCurrentRealmId;
        ::ll::TypedStorage<8, 24, std::vector<Realms::Content>>    mServiceAppliedContent;
        ::ll::TypedStorage<8, 24, std::vector<Realms::Content>>    mCurrentContent;
        ::ll::UntypedStorage<8, 48>                                mIsPackContentChangedPubVal;
        ::ll::TypedStorage<1, 1, bool>                             mHasInitialContentLoaded;
        ::ll::UntypedStorage<8, 48>                                mChangePackPriorityError;
        ::ll::UntypedStorage<8, 48>                                mPackApplicationError;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>>
            mSelectedResourcePackCollection;
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItemCollection>>>
                                    mSelectedBehaviorPackCollection;
        ::ll::UntypedStorage<8, 56> mFetchStatusPubVal;
        ::ll::UntypedStorage<8, 88> mSaveStatusPubVal;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsWorldPackEditorImpl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::vector<Realms::Content> _generateRealmsContentFromSelectedItems() const;

        MCNAPI void _handleContextStateChange(::Realms::RealmsWorldPackContext::RealmsWorldPackContextState);

        MCNAPI void _handlePackContentChanged();

        MCNAPI void _handleUGCPackUploadStep();

        MCNAPI ::Realms::Content _packContentToRealmsContent(::PackContentItem const&, ulong) const;

        MCNAPI void _savePackSettings();

        MCNAPI void _setSaveStatus(
            ::Realms::RealmsWorldPackEditor::ProcessState,
            std::optional<Realms::GenericStatus>,
            std::optional<std::string_view>
        );

        MCNAPI bool hasNonAddonBehaviorPacks();

        MCNAPI ::Bedrock::PubSub::Subscription
            subscribeToFetchContentStatePublisher(std::function<void(Realms::RealmsWorldPackEditor::FetchStatus)>);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldPackEditor::RealmsWorldPackEditorImpl>> mPackEditorImpl;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackEditor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void activatePack(std::string const&, ::ContentType, bool);

    MCNAPI void changePackPriority(std::string const&, ::ContentType, int, int);

    MCNAPI void clearChangePackPriorityError();

    MCNAPI void clearPackApplicationError();

    MCNAPI void clearPendingPackAction();

    MCNAPI void clearSavePackSettingsState();

    MCNAPI void continuePendingPackAction();

    MCNAPI void deactivatePack(std::string const&, ::ContentType, bool);

    MCNAPI ::Realms::RealmsWorldPackEditor::FetchStatus getFetchContentState() const;

    MCNAPI ::gsl::not_null<std::shared_ptr<ContentItemCollection>> getGlobalResourcePackCollection() const;

    MCNAPI std::shared_ptr<const PackContentItem> getPackItemForPackIdVersion(std::string_view);

    MCNAPI std::optional<PackSettingsInfo> getPackSettingsForPackIdVersion(std::string const&);

    MCNAPI ::WorldContentItemCollectionsModel getWorldCollectionsModel() const;

    MCNAPI bool hasNonAddonBehaviorPacks() const;

    MCNAPI bool isPackContentChanged() const;

    MCNAPI void reloadPacks();

    MCNAPI void savePackSettings();

    MCNAPI void setWorldPackCollectionManagerEditorEnabled(bool);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToChangePackPriorityErrorSub(std::function<void(std::optional<::World::PackActionError>)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToContentItemCollectionDirtySubscription(std::function<void()>&&);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToFetchContentStatePublisher(std::function<void(Realms::RealmsWorldPackEditor::FetchStatus)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToMarketplacePackDownloadStatus(
        std::function<void(std::optional<IMarketplacePackDownloader::MarketplacePackDownloadStatus>)>&&
    );

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToPackApplicationErrorPublisher(std::function<void(std::optional<::World::PackActionError>)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToPackContentChangedPublisher(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToPendingPackActionPublisher(std::function<void(std::optional<::World::PendingPackAction>)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToSavePacksStatePublisher(std::function<void(Realms::RealmsWorldPackEditor::SaveStatus)>);
    // NOLINTEND
};

} // namespace Realms
