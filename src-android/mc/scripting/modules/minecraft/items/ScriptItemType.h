#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // ScriptItemType inner types define
    using Key = std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Item const& getItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
