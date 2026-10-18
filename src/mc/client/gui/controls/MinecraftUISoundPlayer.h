#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UISoundPlayer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class MinecraftUISoundPlayer : public ::UISoundPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUISoundPlayer& operator=(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUISoundPlayer();

    virtual void play(std::string const&, float, float) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftUISoundPlayer(::IMinecraftGame&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $play(std::string const&, float, float) const;
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
#include "mc/client/gui/controls/UISoundPlayer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class MinecraftUISoundPlayer : public ::UISoundPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUISoundPlayer& operator=(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer(MinecraftUISoundPlayer const&);
    MinecraftUISoundPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUISoundPlayer() /*override*/ = default;

    virtual void play(::std::string const& name, float volume, float pitch) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $play(::std::string const& name, float volume, float pitch) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftUISoundPlayer {};
#endif // @header-generator platform
#endif // @header-generator platform
