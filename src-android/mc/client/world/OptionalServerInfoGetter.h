#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IOptionalServerInfoGetter.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ThirdPartyInfo;
// clang-format on

struct OptionalServerInfoGetter : public ::IOptionalServerInfoGetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionalServerInfoGetter();

    virtual std::optional<ThirdPartyInfo> getOptionalInfo(::IClientInstance const&) const;

    virtual ::ThirdPartyInfo getThirdPartyInfoForUrl(::IClientInstance const&, std::string const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<ThirdPartyInfo> $getOptionalInfo(::IClientInstance const&) const;

    MCNAPI ::ThirdPartyInfo $getThirdPartyInfoForUrl(::IClientInstance const&, std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
