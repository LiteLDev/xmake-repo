#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptDataStorePayloadUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::variant<float, bool, ::std::string>>
    getScriptPayload(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
