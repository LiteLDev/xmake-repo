#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ThirdPartyInfo;
// clang-format on

struct IOptionalServerInfoGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionalServerInfoGetter();

    virtual std::optional<ThirdPartyInfo> getOptionalInfo(::IClientInstance const&) const = 0;

    virtual ::ThirdPartyInfo getThirdPartyInfoForUrl(::IClientInstance const&, std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
