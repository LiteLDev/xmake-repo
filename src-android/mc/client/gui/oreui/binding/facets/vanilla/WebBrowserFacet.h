#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

namespace OreUI {

class WebBrowserFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WebBrowserFacet> {
public:
    // WebBrowserFacet inner types define
    enum class WebBrowserLink : int {
        NewWorldCreationFeedbackPage       = 0,
        PlayScreenFeedbackPage             = 1,
        EditWorldScreenFeedbackPage        = 2,
        RealmsSafetyPage                   = 4,
        ManageParentalConsentPage          = 5,
        BannedHelpPage                     = 6,
        NintendoSwitchTechnicalSupportPage = 7,
        BuyMinecraftStorePage              = 8,
        XboxPrivacyAndOnlineSafety         = 9,
        XboxAccountProfile                 = 10,
        JoinRealmHelpPage                  = 11,
        FriendsDrawerFeedbackPage          = 12,
        ServersTabFeedbackPage             = 13,
        PlayerFeedbackMain                 = 14,
        PlayerFeedbackIdeas                = 15,
        StartFromTemplateFeedbackPage      = 17,
        RealmsTabFeedbackPage              = 18,
        TermsAndServicePage                = 19,
        PrivacyPolicyPage                  = 20,
        PreproductionRealmsGuide           = 21,
        TroubleshootMultiplayer            = 22,
        EduAboutAddOns                     = 23,
        EduAboutBehaviorPacks              = 24,
        EduAboutResourcePacks              = 25,
        EduAboutCloud                      = 26,
        FlatWorldFeedbackPage              = 27,
        ContactSupport                     = 28,
        RealmsCommitWikiLink               = 29,
        SettingsFeedbackPage               = 30,
        NewPlayerPathTutorialSurvey        = 31,
        RealmsFeedbackPage                 = 32,
        InboxFeedbackBugs                  = 33,
        InboxFeedbackIdeas                 = 34,
        RealmsManageSavesHelpPage          = 35,
        ServicesAgreementPage              = 36,
    };

    using LaunchUri = std::function<void(const std::string&)>;

    using LaunchBetaFeedbackQr = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                      mLaunchUri;
    ::ll::TypedStorage<8, 48, std::function<void()>> mLaunchBetaFeedbackQr;
    ::ll::TypedStorage<8, 40, std::unordered_map<OreUI::WebBrowserFacet::WebBrowserLink, std::string>> mAllowedURLs;
    ::ll::TypedStorage<1, 1, bool> mUseBetaFeedbackQr;
    // NOLINTEND

public:
    // prevent constructor by default
    WebBrowserFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebBrowserFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebBrowserFacet(std::function<void(const std::string&)>, std::function<void()>, bool);

    MCNAPI void openBetaFeedbackQr();

    MCNAPI void openLink(::OreUI::WebBrowserFacet::WebBrowserLink);

    MCNAPI void openLinkWithParams(::OreUI::WebBrowserFacet::WebBrowserLink, std::string const&);

    MCNAPI void openManageSubscriptionsStoreLink(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(const std::string&)>, std::function<void()>, bool);
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
