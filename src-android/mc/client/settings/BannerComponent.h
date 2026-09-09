#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/BannerCta.h"
#include "mc/client/settings/BannerType.h"
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/ConfirmationRequest.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IDataProvider; }
// clang-format on

namespace Settings {

class BannerComponent : public ::Settings::Component<Settings::BannerComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Settings::BannerType>                         mBannerType;
    ::ll::UntypedStorage<8, 96>                                              mCta;
    ::ll::TypedStorage<8, 104, std::optional<Settings::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IDataProvider>>       mDataProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Settings::BannerType getBannerType() const;

    MCNAPI std::optional<Settings::ConfirmationRequest> const& getConfirmationRequest() const;

    MCNAPI std::optional<std::string> getCtaText() const;

    MCNAPI bool invokeCtaCallback();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
