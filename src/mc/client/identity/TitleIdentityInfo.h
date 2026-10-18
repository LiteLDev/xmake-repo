#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/PlayFabEnvironment.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class TitleIdentityInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabEnvironment>   mEnvironment;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OptionRegistry>> mPrimaryUserOptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TitleIdentityInfo();

    virtual void setEnvironment(::Social::PlayFabEnvironment);

    virtual std::string_view const getPlayFabTitleId() = 0;

    virtual std::string const& getPlayfabSharedSecret() = 0;

    virtual bool isSignInToPlayFabWithAnonymousAuthEnabled();

    virtual uint getXboxLiveMPTitleId();

    virtual std::string const& getXboxLiveMPScid();

    virtual bool isXboxLiveTitleIdAnyPlatform(uint);

    virtual uint getXboxLiveFlags();

    virtual std::string const& getXboxLiveClientId();

    virtual int getXboxLiveTitleId();

    virtual std::string const& getXboxLiveRedirectUri();

    virtual std::string const& getXboxLiveScid();

    virtual std::string const& getXboxLiveTelemetryAppId();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getXboxLiveSandbox();

    MCNAPI void setPrimaryUserOptions(std::weak_ptr<OptionRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setEnvironment(::Social::PlayFabEnvironment);

    MCNAPI bool $isSignInToPlayFabWithAnonymousAuthEnabled();

    MCNAPI uint $getXboxLiveMPTitleId();

    MCNAPI std::string const& $getXboxLiveMPScid();

    MCNAPI bool $isXboxLiveTitleIdAnyPlatform(uint);

    MCNAPI uint $getXboxLiveFlags();

    MCNAPI std::string const& $getXboxLiveClientId();

    MCNAPI int $getXboxLiveTitleId();

    MCNAPI std::string const& $getXboxLiveRedirectUri();

    MCNAPI std::string const& $getXboxLiveScid();

    MCNAPI std::string const& $getXboxLiveTelemetryAppId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TitleIdentityInfo {};
#endif // @header-generator platform

} // namespace Social
