#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/network/ExperiencePromotion.h"

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
        ::ll::UntypedStorage<8, 24>            imagePath;
        ::ll::TypedStorage<8, 24, std::string> title;
        ::ll::TypedStorage<8, 24, std::string> subtitle;
        ::ll::TypedStorage<8, 24, std::string> description;
        // NOLINTEND

    public:
        // prevent constructor by default
        AvailableGame& operator=(AvailableGame const&);
        AvailableGame(AvailableGame const&);
        AvailableGame();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AvailableGame();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
