#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct NotEqualsComparison {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::NotEqualsComparison& operator=(::ScriptModuleMinecraft::NotEqualsComparison const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::NotEqualsComparison const&) const;

    MCNAPI ~NotEqualsComparison();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
