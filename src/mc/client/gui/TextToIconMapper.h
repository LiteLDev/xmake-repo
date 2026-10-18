#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"

// auto generated forward declare list
// clang-format off
class RemappingLayout;
// clang-format on

class TextToIconMapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::string>>         mGamepadIconMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::string>>         mGamepadTipsIconMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTouchIconMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTouchCrossairIconMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTouchClassicIconMap;
    ::ll::TypedStorage<8, 24, std::string>                                  mGamepadPrefix;
    ::ll::TypedStorage<8, 24, std::string>                                  mGamepadTipsPrefix;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToIconMapper();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextToIconMapper();

    MCNAPI void _init();

    MCNAPI bool _trySwapGamepadButtonInPlace(std::string&, int, int, bool) const;

    MCNAPI void preprocessText(
        std::string&,
        ::RemappingLayout*,
        ::InputMode,
        bool const,
        bool const,
        ::NewInteractionModel const,
        bool
    );

    MCNAPI std::string remapGamepadIcon(int, bool) const;
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"

// auto generated forward declare list
// clang-format off
class RemappingLayout;
// clang-format on

class TextToIconMapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string>>           mGamepadIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::string>>           mGamepadTipsIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchCrossairIconMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTouchClassicIconMap;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mGamepadPrefix;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mGamepadTipsPrefix;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextToIconMapper();

    MCAPI void _init();

    MCAPI bool
    _trySwapGamepadButtonInPlace(::std::string& button, int gamepadButton1, int gamepadButton2, bool isGameTip) const;

    MCAPI void preprocessText(
        ::std::string&        text,
        ::RemappingLayout*    layout,
        ::InputMode           mode,
        bool                  swapGamepadButtonsAB,
        bool                  swapGamepadButtonsXY,
        ::NewInteractionModel interactionModel,
        bool                  isGameTip
    );

    MCAPI ::std::string remapGamepadIcon(int key, bool isGameTip) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TextToIconMapper {};
#endif // @header-generator platform
#endif // @header-generator platform
