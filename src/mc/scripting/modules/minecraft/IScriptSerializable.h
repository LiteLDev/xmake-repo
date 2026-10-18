#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct IScriptSerializable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptSerializable() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getContentType() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getContentType() const = 0;
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
};

} // namespace ScriptModuleMinecraft
