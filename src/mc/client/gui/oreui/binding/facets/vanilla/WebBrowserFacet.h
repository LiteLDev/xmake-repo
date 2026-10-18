#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class WebBrowserFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WebBrowserFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WebBrowserFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WebBrowserFacet> {
#else // @header-generator platform
class WebBrowserFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WebBrowserFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

    using LaunchUri = ::std::function<void(::std::string const&)>;

    using LaunchBetaFeedbackQr = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mLaunchUri;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                     mLaunchBetaFeedbackQr;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::OreUI::WebBrowserFacet::WebBrowserLink, ::std::string>>
                                   mAllowedURLs;
    ::ll::TypedStorage<1, 1, bool> mUseBetaFeedbackQr;
    // NOLINTEND

public:
    // prevent constructor by default
    WebBrowserFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WebBrowserFacet(
        ::std::function<void(::std::string const&)> launchUri,
        ::std::function<void()>                     launchBetaFeedbackQr,
        bool                                        useBetaFeedbackQr
    );

    MCAPI void openBetaFeedbackQr();

    MCAPI void openLink(::OreUI::WebBrowserFacet::WebBrowserLink linkHandle);

    MCAPI void openLinkWithParams(::OreUI::WebBrowserFacet::WebBrowserLink linkHandle, ::std::string const& params);

    MCAPI void openManageSubscriptionsStoreLink(::std::string const& storeId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<void(::std::string const&)> launchUri,
        ::std::function<void()>                     launchBetaFeedbackQr,
        bool                                        useBetaFeedbackQr
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND
#else // @header-generator platform
    enum class WebBrowserLink : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
