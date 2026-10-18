#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/GamePadRemappingLayout.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/InputMappingFactory.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class Config;
class IOptionRegistry;
class KeyboardRemappingLayout;
struct DeviceButtonMapping;
struct GameControllerInputMapping;
struct KeyboardInputMapping;
struct MouseInputMapping;
struct TouchInputMapping;
// clang-format on

class ClientInputMappingFactory : public ::InputMappingFactory {
public:
    // ClientInputMappingFactory inner types define
    using InputMappingMap = std::unordered_map<std::string, InputMapping>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, InputMapping>> mActiveInputMappings;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, InputMapping>> mInputMappingTemplates;
    ::ll::TypedStorage<1, 1, bool>                                           mInvertYAxis;
    ::ll::TypedStorage<1, 1, bool>                                           mSwapGamepadButtonsXY;
    ::ll::TypedStorage<1, 1, bool>                                           mSwapGamepadButtonsAB;
    ::ll::TypedStorage<4, 4, float>                                          mSensitivity;
    ::ll::TypedStorage<8, 128, ::GamePadRemappingLayout>                     mGameControllerRemappingLayout;
    ::ll::TypedStorage<8, 16, std::weak_ptr<KeyboardRemappingLayout>>        mKeyboardRemappingLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputMappingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInputMappingFactory();

    virtual ::InputMapping const* getMapping(std::string const&);

    virtual void createInputMappingTemplates(::IOptionRegistry&) = 0;

    virtual ::TouchInputMapping _createScreenTouchMapping() const;

    virtual std::vector<DeviceButtonMapping> _createScreenDeviceButtonMapping() const;

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry&) = 0;

    virtual void _updateGameControllerControls() = 0;

    virtual void _updateTouchMappingControls() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInputMappingFactory(std::weak_ptr<KeyboardRemappingLayout>);

    MCNAPI void _activateMapping(std::string const&);

    MCNAPI void _configureGameControllerMapping(::GameControllerInputMapping&);

    MCNAPI ::InputMapping* _getMappingInternal(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<KeyboardRemappingLayout>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::InputMapping const* $getMapping(std::string const&);

    MCNAPI ::TouchInputMapping $_createScreenTouchMapping() const;

    MCNAPI std::vector<DeviceButtonMapping> $_createScreenDeviceButtonMapping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/GamePadRemappingLayout.h"
#include "mc/deps/input/InputMappingFactory.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class KeyboardRemappingLayout;
struct DeviceButtonMapping;
struct InputMapping;
struct TouchInputMapping;
// clang-format on

class ClientInputMappingFactory : public ::InputMappingFactory {
public:
    // ClientInputMappingFactory inner types define
    using InputMappingMap = ::std::unordered_map<::std::string, ::InputMapping>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::InputMapping>> mActiveInputMappings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::InputMapping>> mInputMappingTemplates;
    ::ll::TypedStorage<1, 1, bool>                                                 mInvertYAxis;
    ::ll::TypedStorage<1, 1, bool>                                                 mSwapGamepadButtonsXY;
    ::ll::TypedStorage<1, 1, bool>                                                 mSwapGamepadButtonsAB;
    ::ll::TypedStorage<4, 4, float>                                                mSensitivity;
    ::ll::TypedStorage<8, 128, ::GamePadRemappingLayout>                           mGameControllerRemappingLayout;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::KeyboardRemappingLayout>>          mKeyboardRemappingLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputMappingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMapping const* getMapping(::std::string const& mappingName) /*override*/;

    virtual void createInputMappingTemplates(::IOptionRegistry& options) = 0;

    virtual ::TouchInputMapping _createScreenTouchMapping() const;

    virtual ::std::vector<::DeviceButtonMapping> _createScreenDeviceButtonMapping() const;

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry& options) = 0;

    virtual void _updateGameControllerControls() = 0;

    virtual void _updateTouchMappingControls() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientInputMappingFactory(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);

    MCAPI void _activateMapping(::std::string const& mappingName);

    MCAPI ::InputMapping* _getMappingInternal(::std::string const& mappingName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InputMapping const* $getMapping(::std::string const& mappingName);

    MCAPI ::TouchInputMapping $_createScreenTouchMapping() const;

    MCAPI ::std::vector<::DeviceButtonMapping> $_createScreenDeviceButtonMapping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientInputMappingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
