#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleDiagnostics {

struct ScriptSentryCaptureContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<SentryBreadcrumbLevel>> level;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::string>>> tags;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::variant<float, bool, std::string>>>> extraData;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnk36bb65;
    ::ll::UntypedStorage<8, 72> mUnkf18815;
    ::ll::UntypedStorage<8, 72> mUnk639425;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryCaptureContext& operator=(ScriptSentryCaptureContext const&);
    ScriptSentryCaptureContext(ScriptSentryCaptureContext const&);
    ScriptSentryCaptureContext();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
