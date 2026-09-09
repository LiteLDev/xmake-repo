#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/scripting/modules/minecraft/device/ScriptSystemInfo.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptClientSystemInfo : public ::ScriptModuleMinecraft::ScriptSystemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayerRef;
    ::ll::TypedStorage<4, 4, ::PlatformType>   mPlatformType;
    ::ll::TypedStorage<4, 4, int>              mMaxRenderDistance;
    ::ll::TypedStorage<8, 24, std::string>     mLocale;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientSystemInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientSystemInfo();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptClientSystemInfo(::Player const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&);
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

} // namespace ScriptModuleMinecraft
