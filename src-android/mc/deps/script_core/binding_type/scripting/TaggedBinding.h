#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/Release.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RemovedInMajorVersion; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> releases;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::TaggedBinding& beta();

    MCNAPI ::Scripting::TaggedBinding& release(::Scripting::Version, std::optional<Scripting::RemovedInMajorVersion>);

    MCNAPI ~TaggedBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
