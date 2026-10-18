#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/TitleIdentityInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class TitleIdentityInfo_Vanilla : public ::Social::TitleIdentityInfo {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TitleIdentityInfo_Vanilla();

    virtual std::string_view const getPlayFabTitleId();

    virtual std::string const& getPlayfabSharedSecret();

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string_view const $getPlayFabTitleId();

    MCNAPI std::string const& $getPlayfabSharedSecret();

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
class TitleIdentityInfo_Vanilla {};
#endif // @header-generator platform

} // namespace Social
