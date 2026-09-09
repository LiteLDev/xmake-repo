#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace Scripting {

struct VersionRequestKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> uuid;
    ::ll::TypedStorage<8, 24, std::string> name;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestKey& operator=(VersionRequestKey const&);
    VersionRequestKey(VersionRequestKey const&);
    VersionRequestKey();
};

} // namespace Scripting
