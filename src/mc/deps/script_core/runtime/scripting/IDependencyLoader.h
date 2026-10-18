#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ScriptData; }
// clang-format on

namespace Scripting {

class IDependencyLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDependencyLoader() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ScriptData> onLoadScript(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const& name) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
