#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/OptionConfirmationRequest.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IOptionsDataProvider; }
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

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

} // namespace Settings
