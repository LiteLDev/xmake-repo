#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#endif // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deviceinfo/DeviceMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayerRef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayerRef;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PlatformType>   mPlatformType;
    ::ll::TypedStorage<4, 4, int>              mMaxRenderDistance;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>     mLocale;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>   mLocale;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptClientSystemInfo& operator=(ScriptClientSystemInfo const&);
#endif // @header-generator platform
    ScriptClientSystemInfo();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptClientSystemInfo();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptClientSystemInfo(::Player const&);
#else // @header-generator platform
    MCAPI ScriptClientSystemInfo(::ScriptModuleMinecraft::ScriptClientSystemInfo const&);

    MCAPI explicit ScriptClientSystemInfo(::Player const& player);

    MCAPI ::ScriptModuleMinecraft::ScriptClientSystemInfo& operator=(::ScriptModuleMinecraft::ScriptClientSystemInfo&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptClientSystemInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Player const& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
