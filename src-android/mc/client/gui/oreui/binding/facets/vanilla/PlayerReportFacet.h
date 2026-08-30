#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class PlayerReportFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerReportFacet> {
public:
    // PlayerReportFacet inner types declare
    // clang-format off
    struct ChatMessageData;
    struct DropdownOption;
    struct ChatSelection;
    // clang-format on

    // PlayerReportFacet inner types define
    struct ChatMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mMessage;
        ::ll::TypedStorage<8, 24, std::string> mFilteredMessage;
        ::ll::TypedStorage<8, 24, std::string> mAuthor;
        ::ll::TypedStorage<1, 1, bool>         mIsAuthorBeingReported;
        ::ll::TypedStorage<1, 1, bool>         mIsProfanityFilterOn;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ChatMessageData(::OreUI::PlayerReportFacet::ChatMessageData const&);

        MCNAPI ~ChatMessageData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::PlayerReportFacet::ChatMessageData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DropdownOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mLabel;
        ::ll::TypedStorage<4, 4, int>          mValue;
        // NOLINTEND
    };

    struct ChatSelection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<int>> mSelectedMessages;
        ::ll::TypedStorage<1, 1, bool>              mIsPartyChatReport;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChatSelection& operator=(ChatSelection const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mReportArea;
    ::ll::TypedStorage<4, 4, int>                                                     mReportReason;
    ::ll::TypedStorage<8, 24, std::string>                                            mReportMessage;
    ::ll::TypedStorage<8, 24, std::string>                                            mXuid;
    ::ll::TypedStorage<8, 24, std::string>                                            mPlatformId;
    ::ll::TypedStorage<8, 24, std::string>                                            mGalleryScreenshotId;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mSelectedChatMessages;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsPartyChatReport;
    ::ll::TypedStorage<8, 24, std::string>                                            mPartyId;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerReportFacet::ChatMessageData>> mReportableChatMessages;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerReportFacet::ChatMessageData>> mReportablePartyChatMessages;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerReportFacet::DropdownOption>>  mReportAreaOptions;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerReportFacet::DropdownOption>>  mReportReasonOptions;
    ::ll::UntypedStorage<8, 72>                                                       mScreenshotPath;
    ::ll::UntypedStorage<8, 24>                                                       mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                    mDirty;
    ::ll::UntypedStorage<8, 24>                                                       mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerReportFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerReportFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void decideReportReasonOptions();

    MCNAPI void finishReport();

    MCNAPI bool getHasReachedReportLimit() const;

    MCNAPI bool isPartyChatAvailable() const;

    MCNAPI bool isWorldChatAvailable() const;

    MCNAPI void startReport(std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
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
