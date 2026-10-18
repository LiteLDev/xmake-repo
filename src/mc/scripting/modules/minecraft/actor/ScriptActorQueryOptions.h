#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockAreaSize; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mPosition;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMinDistance;
    ::ll::TypedStorage<4, 8, std::optional<float>> mMaxDistance;
    ::ll::TypedStorage<4, 8, std::optional<int>>   mClosest;
    ::ll::TypedStorage<4, 8, std::optional<int>>   mFarthest;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mVolume;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mPosition;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mMinDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>   mMaxDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>     mClosest;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>     mFarthest;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mVolume;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV1();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
