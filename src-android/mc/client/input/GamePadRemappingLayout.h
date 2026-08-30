#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ButtonIndiciesEnum.h"
#include "mc/client/input/IconSize.h"
#include "mc/client/input/RemappingLayout.h"
#include "mc/client/input/TriggerIndiciesEnum.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
// clang-format on

class GamePadRemappingLayout : public ::RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mControllerIconPath;
    ::ll::TypedStorage<1, 1, bool>              mGamepadButtonsXYAreSwapped;
    ::ll::TypedStorage<1, 1, bool>              mGamepadButtonsABAreSwapped;
    // NOLINTEND

public:
    // prevent constructor by default
    GamePadRemappingLayout(GamePadRemappingLayout const&);
    GamePadRemappingLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamePadRemappingLayout();

    virtual void setMappingWithRawInput(std::string const&, int, ::RawInputType);

    virtual int getAdjustedKey(int) const;

    virtual std::string getSaveString(std::string const&) const;

    virtual std::string getMappedKeyName(::Keymapping const&) const;

    virtual std::string getMappedKeyName(int, bool) const;

    virtual std::string getMappedKeyName(int) const;

    virtual std::string getKeySpriteLocation(::Keymapping const&) const;

    virtual std::string getKeySpriteLocation(int, ::IconSize) const;

    virtual int _rawKeyToKey(int, ::RawInputType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string _getKeySpriteLocationInternal(int, bool, ::IconSize) const;

    MCNAPI std::string const _getMappedKeyNameInternal(int, bool const) const;

    MCNAPI void _swapGamepadKeyBindings(int, int);

    MCNAPI std::string getKeySpriteLocation(::TriggerIndiciesEnum) const;

    MCNAPI std::string getKeySpriteLocation(::ButtonIndiciesEnum, ::IconSize) const;

    MCNAPI std::string getKeySpriteName(int) const;

    MCNAPI std::string getKeyTextName(int, bool) const;

    MCNAPI ::ButtonIndiciesEnum getMappedButtonIndicie(int) const;

    MCNAPI void setGamepadButtonsABAreSwapped(bool const);

    MCNAPI void setGamepadButtonsXYAreSwapped(bool const);

    MCNAPI void swapGamepadButtonKeyBindings(::ButtonIndiciesEnum, ::ButtonIndiciesEnum);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMappingWithRawInput(std::string const&, int, ::RawInputType);

    MCNAPI int $getAdjustedKey(int) const;

    MCNAPI std::string $getSaveString(std::string const&) const;

    MCNAPI std::string $getMappedKeyName(::Keymapping const&) const;

    MCNAPI std::string $getMappedKeyName(int, bool) const;

    MCNAPI std::string $getMappedKeyName(int) const;

    MCNAPI std::string $getKeySpriteLocation(::Keymapping const&) const;

    MCNAPI std::string $getKeySpriteLocation(int, ::IconSize) const;

    MCNAPI int $_rawKeyToKey(int, ::RawInputType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
