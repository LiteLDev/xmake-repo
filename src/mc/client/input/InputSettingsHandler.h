#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class InputSettingsHandler {
public:
    // InputSettingsHandler inner types declare
    // clang-format off
    struct KeymappingInfo;
    // clang-format on

    // InputSettingsHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct KeymappingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InputMode>                 inputMode;
        ::ll::TypedStorage<4, 8, std::optional<KeyboardType>> keyboardType;
        ::ll::TypedStorage<8, 24, std::string>                action;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeymappingInfo& operator=(KeymappingInfo const&);
        KeymappingInfo(KeymappingInfo const&);
        KeymappingInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, std::queue<std::function<void ()>, std::deque<std::function<void ()>>>> mDeferredCallbacks;
    ::ll::TypedStorage<8, 48, std::optional<InputSettingsHandler::KeymappingInfo>> mCapturingKeymapping;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearCapturingKeymapping();

    MCNAPI void enqueueDeferredCallback(std::function<void()>);

    MCNAPI std::optional<InputSettingsHandler::KeymappingInfo> const& getCapturingKeymapping();

    MCNAPI void setCapturingKeymapping(::InputSettingsHandler::KeymappingInfo);

    MCNAPI void tick();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct KeymappingInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InputMode>                     inputMode;
        ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>> keyboardType;
        ::ll::TypedStorage<8, 32, ::std::string>                  action;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::std::function<void()>, ::std::deque<::std::function<void()>>>>
                                                                                       mDeferredCallbacks;
    ::ll::TypedStorage<8, 56, ::std::optional<::InputSettingsHandler::KeymappingInfo>> mCapturingKeymapping;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCapturingKeymapping(::InputSettingsHandler::KeymappingInfo info);
    // NOLINTEND
#else // @header-generator platform
    struct KeymappingInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};
