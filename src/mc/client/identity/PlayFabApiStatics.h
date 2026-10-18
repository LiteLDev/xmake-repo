#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/PlayFabEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Social { class TitleIdentityInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabApiStatics {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getContentSubscriptionID();

    MCNAPI static std::string const& getRealmsPlusID();

    MCNAPI static std::string getRequestUrl(std::string const&);

    MCNAPI static std::string const& getTitleId();

    MCNAPI static void init(std::weak_ptr<Social::TitleIdentityInfo>);

    MCNAPI static void teardown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mInitialized();

    MCNAPI static std::string& mTitleId();

    MCNAPI static std::weak_ptr<Social::TitleIdentityInfo>& mTitleIdentityInfo();
    // NOLINTEND
};
#else // @header-generator platform
class PlayFabApiStatics {};
#endif // @header-generator platform

} // namespace Social
