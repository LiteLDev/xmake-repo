#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/OptionConfirmationRequest.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IOptionsDataProvider; }
namespace Settings { struct OptionData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IOptionsDataProvider; }
namespace Settings { struct OptionConfirmationRequest; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class OptionComponent : public ::Settings::Component<Settings::OptionComponent> {
public:
    // OptionComponent inner types define
    using ConfirmationRequestsProvider = std::function<std::vector<Settings::OptionConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Settings::IOptionsDataProvider>> mDataProvider;
    ::ll::UntypedStorage<8, 48>                                               mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OptionComponent(
        std::string_view,
        std::string_view,
        std::optional<std::string>,
        std::unique_ptr<Settings::IOptionsDataProvider>
    );

    MCNAPI bool flush();

    MCNAPI std::vector<Settings::OptionConfirmationRequest> getConfirmationRequests() const;

    MCNAPI std::optional<std::string> getInfo() const;

    MCNAPI ::gsl::span<const Settings::OptionData> getOptions() const;

    MCNAPI int getValue() const;

    MCNAPI bool updateValue(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string_view,
        std::string_view,
        std::optional<std::string>,
        std::unique_ptr<Settings::IOptionsDataProvider>
    );
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
class OptionComponent : public ::Settings::Component<::Settings::OptionComponent> {
public:
    // OptionComponent inner types define
    using DataProvider = ::Settings::IOptionsDataProvider;

    using ConfirmationRequestsProvider = ::std::function<::std::vector<::Settings::OptionConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IOptionsDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::Settings::OptionConfirmationRequest>()>>
        mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OptionComponent(
        ::std::string_view                                  id,
        ::std::string_view                                  name,
        ::std::optional<::std::string>                      description,
        ::std::unique_ptr<::Settings::IOptionsDataProvider> dataProvider
    );

    MCAPI ::std::optional<::std::string> getInfo() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                                  id,
        ::std::string_view                                  name,
        ::std::optional<::std::string>                      description,
        ::std::unique_ptr<::Settings::IOptionsDataProvider> dataProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND
};
#else // @header-generator platform
class OptionComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
