#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
