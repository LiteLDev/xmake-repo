#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class KeyboardRemappingLayout;
class MainMenuScreenModel;
class RemappingLayout;
class UIPropertyBag;
struct RawInputScreenEventData;
struct ToggleChangeEventData;
// clang-format on

class ControlsSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class KeyboardRemappingLayout;
class MainMenuScreenModel;
class RemappingLayout;
struct RawInputScreenEventData;
// clang-format on

class ControlsSettingsScreenController : public ::SettingsScreenControllerBase {
#else // @header-generator platform
class ControlsSettingsScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ControlsSettingsScreenController inner types declare
    // clang-format off
    struct BindingInfo;
    struct KeyboardLayoutInfo;
    // clang-format on

    // ControlsSettingsScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct BindingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>      mAction;
        ::ll::TypedStorage<8, 24, std::string>      mIcon;
        ::ll::TypedStorage<8, 24, std::vector<int>> mKeys;
        ::ll::TypedStorage<1, 1, bool>              mActive;
        ::ll::TypedStorage<4, 4, int>               mLayoutIndex;
        // NOLINTEND

    public:
        // prevent constructor by default
        BindingInfo& operator=(BindingInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI BindingInfo(::ControlsSettingsScreenController::BindingInfo const&);

        MCNAPI ~BindingInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ControlsSettingsScreenController::BindingInfo const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct BindingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>      mAction;
        ::ll::TypedStorage<8, 32, ::std::string>      mIcon;
        ::ll::TypedStorage<8, 24, ::std::vector<int>> mKeys;
        ::ll::TypedStorage<1, 1, bool>                mActive;
        ::ll::TypedStorage<4, 4, int>                 mLayoutIndex;
        // NOLINTEND
    };
#else // @header-generator platform
    struct BindingInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

    struct KeyboardLayoutInfo {
    public:
        // KeyboardLayoutInfo inner types declare
        // clang-format off
        struct BindingInfoCollection;
        // clang-format on

        // KeyboardLayoutInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct BindingInfoCollection {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::vector<ControlsSettingsScreenController::BindingInfo>> mBindings;
            ::ll::TypedStorage<8, 24, std::string>                                                mGridDimensionName;
            ::ll::TypedStorage<8, 24, std::string>                                                mCollectionName;
            // NOLINTEND

        public:
            // prevent constructor by default
            BindingInfoCollection& operator=(BindingInfoCollection const&);
            BindingInfoCollection(BindingInfoCollection const&);

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~BindingInfoCollection();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, ::KeyboardType const> mType;
        ::ll::TypedStorage<8, 8, ::KeyboardRemappingLayout&> mLayout;
        ::ll::TypedStorage<8, 72, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection> mNormalBinds;
        ::ll::TypedStorage<8, 72, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection> mChordBinds;
        ::ll::TypedStorage<8, 72, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection> mCommandMacroBinds;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        KeyboardLayoutInfo& operator=(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~KeyboardLayoutInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct BindingInfoCollection {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::BindingInfo>> mBindings;
            ::ll::TypedStorage<8, 32, ::std::string> mGridDimensionName;
            ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::KeyboardType const>       mType;
        ::ll::TypedStorage<8, 8, ::KeyboardRemappingLayout&> mLayout;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mNormalBinds;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mChordBinds;
        ::ll::TypedStorage<8, 88, ::ControlsSettingsScreenController::KeyboardLayoutInfo::BindingInfoCollection>
            mCommandMacroBinds;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeyboardLayoutInfo& operator=(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo(KeyboardLayoutInfo const&);
        KeyboardLayoutInfo();
#else // @header-generator platform
        struct BindingInfoCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::GamePadRemappingLayout&> mGamepadLayout;
    ::ll::TypedStorage<8, 24, std::vector<ControlsSettingsScreenController::BindingInfo>> mGamepadBindings;
    ::ll::TypedStorage<4, 4, ::KeyboardType> mCurrentKeyboardType;
    ::ll::TypedStorage<8, 24, std::vector<ControlsSettingsScreenController::KeyboardLayoutInfo>> mKeyboardLayoutInformation;
    ::ll::TypedStorage<4, 4, int> mSelectedIndex;
    ::ll::TypedStorage<4, 4, ::InputBindingMode> mActiveBindingMode;
    ::ll::TypedStorage<8, 8, std::vector<std::string> const&> mDisabledInputMappings;
    ::ll::TypedStorage<1, 1, bool> mCustomizeControlsDisableHover;
    ::ll::TypedStorage<8, 240, std::array<std::string, 10>> mCommandMacroCommands;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ControlsSettingsScreenController& operator=(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlsSettingsScreenController();

    virtual void onTerminate();

    virtual bool canExit();

    virtual void _registerControllerCallbacks();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ControlsSettingsScreenController(std::shared_ptr<MainMenuScreenModel>, std::vector<std::string> const&);

    MCNAPI bool _commandMacrosAllowed() const;

    MCNAPI void
    _generateBindingInfo(std::vector<ControlsSettingsScreenController::BindingInfo>&, ::RemappingLayout&, uint);

    MCNAPI void _generateKeyboardBindingInfo(::ControlsSettingsScreenController::KeyboardLayoutInfo&, uint);

    MCNAPI std::string
           _getBindingText(std::vector<ControlsSettingsScreenController::BindingInfo>&, int, ::RemappingLayout&);

    MCNAPI int _getIndexAdjustmentOffsetFromCollectionGroup(std::string const&, int);

    MCNAPI bool _mapRawInputToLayout(::RemappingLayout&, int, ::RawInputScreenEventData&);

    MCNAPI ::ui::ViewRequest _resetAllBindingsToDefault(::InputMode);

    MCNAPI void setUpCallbacksForBooleanInputOption(::OptionID, ::InputMode, std::string const&);

    MCNAPI void setUpCallbacksForFloatInputOption(::OptionID, ::InputMode, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::function<std::string(const std::string&, float, bool)>& floatSliderLabellerAsInt();

    MCNAPI static std::function<std::string(const std::string&, float, bool)>& floatSliderLabellerAsPercentInt();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, std::vector<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTerminate();

    MCNAPI bool $canExit();

    MCNAPI void $_registerControllerCallbacks();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GamePadRemappingLayout&>                                       mGamepadLayout;
    ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::BindingInfo>> mGamepadBindings;
    ::ll::TypedStorage<4, 4, ::KeyboardType>                                                  mCurrentKeyboardType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ControlsSettingsScreenController::KeyboardLayoutInfo>>
                                                                  mKeyboardLayoutInformation;
    ::ll::TypedStorage<4, 4, int>                                 mSelectedIndex;
    ::ll::TypedStorage<4, 4, ::InputBindingMode>                  mActiveBindingMode;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::string> const&> mDisabledInputMappings;
    ::ll::TypedStorage<1, 1, bool>                                mCustomizeControlsDisableHover;
    ::ll::TypedStorage<8, 320, ::std::array<::std::string, 10>>   mCommandMacroCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlsSettingsScreenController& operator=(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController(ControlsSettingsScreenController const&);
    ControlsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlsSettingsScreenController() /*override*/ = default;

    virtual void _registerControllerCallbacks();

    virtual void onTerminate() /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ControlsSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::vector<::std::string> const&      disabledInputMappings
    );

    MCFOLD bool _commandMacrosAllowed() const;

    MCAPI void _generateBindingInfo(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        ::RemappingLayout&                                              layout,
        uint                                                            layoutStartIndex
    );

    MCAPI void _generateKeyboardBindingInfo(
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& keyboardInfo,
        uint                                                    layoutStartIndex
    );

    MCAPI ::std::string _getBindingText(
        ::std::vector<::ControlsSettingsScreenController::BindingInfo>& bindings,
        int                                                             collectionIndex,
        ::RemappingLayout&                                              layout
    );

    MCAPI int _getIndexAdjustmentOffsetFromCollectionGroup(::std::string const& collectionGroup, int gridIndex);

    MCAPI bool
    _mapRawInputToLayout(::RemappingLayout& layout, int keymappingIndex, ::RawInputScreenEventData& rawInputData);

    MCAPI ::ui::ViewRequest _resetAllBindingsToDefault(::InputMode inputMode);

    MCAPI void _setCommandMacroCommandAtIndex(int collectionIndex, ::std::string const command);

    MCAPI void
    setUpCallbacksForBooleanInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& toggleName);

    MCAPI void
    setUpCallbacksForFloatInputOption(::OptionID optionID, ::InputMode inputMode, ::std::string const& sliderName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canSetCommandMacroCommandAtIndex(
        int                                                     collectionIndex,
        ::ControlsSettingsScreenController::KeyboardLayoutInfo& layout
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsInt();

    MCAPI static ::std::function<::std::string(::std::string const&, float, bool)>& floatSliderLabellerAsPercentInt();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::vector<::std::string> const& disabledInputMappings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_registerControllerCallbacks();

    MCAPI void $onTerminate();

    MCAPI bool $canExit();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
