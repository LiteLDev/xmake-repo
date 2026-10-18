#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/BooleanConfirmationRequest.h"
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IBooleanDataProvider; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IBooleanDataProvider; }
namespace Settings { struct BooleanConfirmationRequest; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class BooleanComponent : public ::Settings::Component<Settings::BooleanComponent> {
public:
    // BooleanComponent inner types define
    using ConfirmationRequestsProvider = std::function<std::vector<Settings::BooleanConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IBooleanDataProvider>> mDataProvider;
    ::ll::UntypedStorage<8, 48>                                               mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    BooleanComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BooleanComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool flush();

    MCNAPI std::vector<Settings::BooleanConfirmationRequest> getConfirmationRequests() const;

    MCNAPI bool getValue() const;

    MCNAPI bool updateValue(bool);
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
class BooleanComponent : public ::Settings::Component<::Settings::BooleanComponent> {
public:
    // BooleanComponent inner types define
    using DataProvider = ::Settings::IBooleanDataProvider;

    using ConfirmationRequestsProvider = ::std::function<::std::vector<::Settings::BooleanConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IBooleanDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::Settings::BooleanConfirmationRequest>()>>
        mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BooleanComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND
};
#else // @header-generator platform
class BooleanComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
