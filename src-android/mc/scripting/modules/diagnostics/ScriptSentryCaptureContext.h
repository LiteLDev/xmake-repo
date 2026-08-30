#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryCaptureContext {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 8, std::optional<SentryBreadcrumbLevel>> level;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::string>>> tags;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::variant<float, bool, std::string>>>> extraData;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
