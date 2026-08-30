#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPrimitiveShapesDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mShapes;
    ::ll::TypedStorage<8, 8, ::ILevel*> mLevel;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
