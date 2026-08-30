#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/server_admin/ScriptSecretString.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mKey;
    ::ll::UntypedStorage<8, 64>            mValue;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
