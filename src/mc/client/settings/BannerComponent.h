#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BannerComponent : public ::Settings::Component<::Settings::BannerComponent> {
public:
    // BannerComponent inner types define
    using DataProvider = ::Settings::IDataProvider;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Settings::BannerType>                             mBannerType;
    ::ll::TypedStorage<8, 104, ::std::optional<::Settings::BannerCta>>           mCta;
    ::ll::TypedStorage<8, 136, ::std::optional<::Settings::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IDataProvider>>       mDataProvider;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::string> getCtaText() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND
};
#else // @header-generator platform
class BannerComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
