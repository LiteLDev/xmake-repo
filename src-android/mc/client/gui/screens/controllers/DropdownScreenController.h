#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/ScreenController.h"

class DropdownScreenController : public ::ScreenController {
public:
    // DropdownScreenController inner types declare
    // clang-format off
    struct SetUpCallbacksForCollectionDropdownOptionsParameters;
    // clang-format on

    // DropdownScreenController inner types define
    struct SetUpCallbacksForCollectionDropdownOptionsParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const>                          mCollectionName;
        ::ll::TypedStorage<8, 24, std::string const>                          mDropdownName;
        ::ll::TypedStorage<8, 24, std::string const>                          mDropdownToggleLabelBindingName;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int> const> mNameValuePairs;
        ::ll::TypedStorage<8, 40, std::unordered_map<int, std::string> const> mValueLabelPairs;
        ::ll::TypedStorage<8, 24, std::string const>                          mEnabledBindingName;
        ::ll::UntypedStorage<8, 48>                                           mIsEnabled;
        ::ll::UntypedStorage<8, 48>                                           mGetValue;
        ::ll::UntypedStorage<8, 48>                                           mSetValue;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetUpCallbacksForCollectionDropdownOptionsParameters();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SetUpCallbacksForCollectionDropdownOptionsParameters();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CollectionBooleanOptionGetter = std::function<bool(int)>;

    using CollectionIntegerOptionGetter = std::function<int(int)>;

    using CollectionIntegerOptionSetter = std::function<void(int, int)>;

    using BooleanOptionGetter = std::function<bool()>;

    using IntegerOptionGetter = std::function<int()>;

    using IntegerOptionSetter = std::function<void(int)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mOffset;
    ::ll::TypedStorage<8, 24, std::vector<bool>> mActiveDropdown;
    ::ll::TypedStorage<1, 1, bool> mUpdateBindings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DropdownScreenController::SetUpCallbacksForCollectionDropdownOptionsParameters>> mDelayedParams;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropdownScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DropdownScreenController();

    MCNAPI void setOffset(int);

    MCNAPI void setUpCallbacksForCollectionDropdownOption(
        std::string const&,
        int const&,
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&,
        std::string const&,
        std::function<bool(int)>,
        std::function<int(int)>,
        std::function<void(int, int)>
    );

    MCNAPI void setUpCallbacksForDropdownOption(
        std::string const&,
        std::string const&,
        std::unordered_map<std::string, int> const&,
        std::unordered_map<int, std::string> const&,
        std::string const&,
        std::function<bool()>,
        std::function<int()>,
        std::function<void(int)>
    );

    MCNAPI void updateDropdownCollectionSize(int const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
