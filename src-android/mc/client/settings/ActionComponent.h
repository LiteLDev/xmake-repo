#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/AsyncProgressInfo.h"
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/ConfirmationRequest.h"
#include "mc/client/settings/SettingsActionType.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IActionDataProvider; }
// clang-format on

namespace Settings {

class ActionComponent : public ::Settings::Component<Settings::ActionComponent> {
public:
    // ActionComponent inner types define
    using ActionCallback = std::function<void(std::function<void(bool)>)>;

    using ActionLabelOverrideProvider = std::function<std::optional<std::string>(const Settings::ActionComponent&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mActionLabel;
    ::ll::TypedStorage<4, 8, std::optional<Settings::SettingsActionType>>    mActionType;
    ::ll::TypedStorage<8, 104, std::optional<Settings::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 160, std::optional<Settings::AsyncProgressInfo>>   mAsyncProgressInfo;
    ::ll::UntypedStorage<8, 16>                                              mDataProvider;
    ::ll::UntypedStorage<8, 48>                                              mActionCallback;
    ::ll::UntypedStorage<8, 48>                                              mActionLabelOverrideProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActionComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActionComponent(
        std::string_view,
        std::string_view,
        std::optional<std::string>,
        std::string_view,
        std::function<void(std::function<void(bool)>)>,
        std::optional<Settings::ConfirmationRequest>,
        std::optional<Settings::AsyncProgressInfo>,
        std::unique_ptr<Settings::IActionDataProvider>
    );

    MCNAPI bool flush();

    MCNAPI std::string getActionLabel() const;

    MCNAPI std::optional<Settings::SettingsActionType> getActionType() const;

    MCNAPI std::optional<Settings::AsyncProgressInfo> const& getAsyncProgressInfo() const;

    MCNAPI std::optional<Settings::ConfirmationRequest> const& getConfirmationRequest() const;

    MCNAPI bool invokeCancelAction();

    MCNAPI bool invokeClickCallback(std::function<void(bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string_view,
        std::string_view,
        std::optional<std::string>,
        std::string_view,
        std::function<void(std::function<void(bool)>)>,
        std::optional<Settings::ConfirmationRequest>,
        std::optional<Settings::AsyncProgressInfo>,
        std::unique_ptr<Settings::IActionDataProvider>
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
