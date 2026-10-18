#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/network/ExperiencePromotion.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ThirdPartyServer {
public:
    // ThirdPartyServer inner types declare
    // clang-format off
    struct AvailableGame;
    // clang-format on

    // ThirdPartyServer inner types define
    struct AvailableGame {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>            imagePath;
        ::ll::TypedStorage<8, 24, std::string> title;
        ::ll::TypedStorage<8, 24, std::string> subtitle;
        ::ll::TypedStorage<8, 24, std::string> description;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkb79660;
        ::ll::UntypedStorage<8, 32> mUnk41db28;
        ::ll::UntypedStorage<8, 32> mUnk59a9eb;
        ::ll::UntypedStorage<8, 32> mUnkcbcd98;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        AvailableGame& operator=(AvailableGame const&);
        AvailableGame(AvailableGame const&);
        AvailableGame();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~AvailableGame();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI ~AvailableGame();
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                  mCreatorName;
    ::ll::TypedStorage<8, 24, std::string>                                  mProductId;
    ::ll::TypedStorage<8, 24, std::string>                                  mCreatorId;
    ::ll::TypedStorage<8, 24, std::string>                                  mTitle;
    ::ll::UntypedStorage<8, 24>                                             mScreenshotImagePaths;
    ::ll::TypedStorage<8, 24, std::string>                                  mDescription;
    ::ll::TypedStorage<8, 24, std::vector<ThirdPartyServer::AvailableGame>> mGames;
    ::ll::TypedStorage<8, 24, std::string>                                  mNews;
    ::ll::TypedStorage<8, 24, std::string>                                  mNewsTitle;
    ::ll::TypedStorage<8, 24, std::string>                                  mStorePageId;
    ::ll::TypedStorage<8, 24, std::string>                                  mExperienceId;
    ::ll::TypedStorage<8, 24, std::string>                                  mAllowListUrl;
    ::ll::UntypedStorage<8, 24>                                             mImagePath;
    ::ll::UntypedStorage<8, 24>                                             mBannerPath;
    ::ll::UntypedStorage<8, 24>                                             mIconPath;
    ::ll::UntypedStorage<8, 24>                                             mBadgePath;
    ::ll::TypedStorage<8, 24, std::string>                                  mServerUrl;
    ::ll::TypedStorage<2, 2, ushort>                                        mServerPort;
    ::ll::TypedStorage<1, 1, bool>                                          mRequireXBL;
    ::ll::TypedStorage<1, 1, bool>                                          mIsImageFinished;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                           mRank;
    ::ll::TypedStorage<8, 192, std::optional<ExperiencePromotion>>          mPromotion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkffba03;
    ::ll::UntypedStorage<8, 32>  mUnk9f859a;
    ::ll::UntypedStorage<8, 32>  mUnk3fadde;
    ::ll::UntypedStorage<8, 32>  mUnk2cfcd0;
    ::ll::UntypedStorage<8, 24>  mUnke5c0bb;
    ::ll::UntypedStorage<8, 32>  mUnka1f92e;
    ::ll::UntypedStorage<8, 24>  mUnka01361;
    ::ll::UntypedStorage<8, 32>  mUnkb40281;
    ::ll::UntypedStorage<8, 32>  mUnk28b564;
    ::ll::UntypedStorage<8, 32>  mUnk6a9d9c;
    ::ll::UntypedStorage<8, 32>  mUnk355d8b;
    ::ll::UntypedStorage<8, 32>  mUnka71eec;
    ::ll::UntypedStorage<8, 32>  mUnk4c7a20;
    ::ll::UntypedStorage<8, 32>  mUnk378853;
    ::ll::UntypedStorage<8, 32>  mUnk83a3e3;
    ::ll::UntypedStorage<8, 32>  mUnkac0fd4;
    ::ll::UntypedStorage<8, 32>  mUnk6a061b;
    ::ll::UntypedStorage<2, 2>   mUnk571140;
    ::ll::UntypedStorage<1, 1>   mUnk6977bb;
    ::ll::UntypedStorage<1, 1>   mUnk1d5f2b;
    ::ll::UntypedStorage<4, 8>   mUnk2eacee;
    ::ll::UntypedStorage<8, 248> mUnk1cb960;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ThirdPartyServer& operator=(ThirdPartyServer const&);
    ThirdPartyServer(ThirdPartyServer const&);
    ThirdPartyServer();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ThirdPartyServer();

    MCNAPI void
    addAvailableGameToArray(::Core::Path const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void addScreenshotPath(::Core::Path const&);

    MCNAPI int const getAvailableGameCount() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getBadgePath() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getBannerPath() const;

    MCNAPI std::string const& getDescription() const;

    MCNAPI std::string const& getExperienceId() const;

    MCNAPI std::string const& getGameDescriptionAt(uint const) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getGameImagePathAt(uint const) const;

    MCNAPI std::string const& getGameSubtitleAt(uint const) const;

    MCNAPI std::string const& getGameTitleAt(uint const) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getIconPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getImagePath() const;

    MCNAPI std::string const& getNews() const;

    MCNAPI std::string const& getNewsTitle() const;

    MCNAPI std::optional<uint> getOptionalRank() const;

    MCNAPI ushort getPort() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI std::optional<ExperiencePromotion> const& getPromotion() const;

    MCNAPI int const getScreenshotCount() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getScreenshotPathAt(uint const) const;

    MCNAPI std::string const& getStorePageId() const;

    MCNAPI std::string const& getTitle() const;

    MCNAPI std::string const& getUrl() const;

    MCNAPI bool hasRank() const;

    MCNAPI bool isExperience() const;

    MCNAPI void setBadgePath(::Core::Path const&);

    MCNAPI void setBannerPath(::Core::Path const&);

    MCNAPI void setIconPath(::Core::Path const&);

    MCNAPI void setImagePath(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void addAvailableGameToArray(
        ::Core::Path const&  imagePath,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::std::string const& description
    );

    MCNAPI ~ThirdPartyServer();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
