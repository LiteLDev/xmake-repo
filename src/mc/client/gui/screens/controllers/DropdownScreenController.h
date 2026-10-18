#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/ScreenController.h"

class DropdownScreenController : public ::ScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/ScreenController.h"

class DropdownScreenController : public ::ScreenController {
#else // @header-generator platform
class DropdownScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // DropdownScreenController inner types declare
    // clang-format off
    struct SetUpCallbacksForCollectionDropdownOptionsParameters;
    // clang-format on

    // DropdownScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SetUpCallbacksForCollectionDropdownOptionsParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                            mCollectionName;
        ::ll::TypedStorage<8, 32, ::std::string const>                            mDropdownName;
        ::ll::TypedStorage<8, 32, ::std::string const>                            mDropdownToggleLabelBindingName;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int> const> mNameValuePairs;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string> const> mValueLabelPairs;
        ::ll::TypedStorage<8, 32, ::std::string const>                            mEnabledBindingName;
        ::ll::TypedStorage<8, 64, ::std::function<bool(int)>>                     mIsEnabled;
        ::ll::TypedStorage<8, 64, ::std::function<int(int)>>                      mGetValue;
        ::ll::TypedStorage<8, 64, ::std::function<void(int, int)>>                mSetValue;
        // NOLINTEND
    };

    using BooleanOptionGetter = ::std::function<bool()>;

    using IntegerOptionGetter = ::std::function<int()>;

    using IntegerOptionSetter = ::std::function<void(int)>;

    using CollectionBooleanOptionGetter = ::std::function<bool(int)>;

    using CollectionIntegerOptionGetter = ::std::function<int(int)>;

    using CollectionIntegerOptionSetter = ::std::function<void(int, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mOffset;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mActiveDropdown;
    ::ll::TypedStorage<1, 1, bool>                 mUpdateBindings;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::DropdownScreenController::SetUpCallbacksForCollectionDropdownOptionsParameters>>
        mDelayedParams;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropdownScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setUpCallbacksForCollectionDropdownOption(
        ::std::string const&                            collectionName,
        int const&                                      collectionSize,
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool(int)>                      isEnabled,
        ::std::function<int(int)>                       getValue,
        ::std::function<void(int, int)>                 setValue
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool()>                         isEnabled,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void updateDropdownCollectionSize(int const& collectionSize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct SetUpCallbacksForCollectionDropdownOptionsParameters {};
#endif // @header-generator platform
#endif // @header-generator platform
};
