#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

namespace ScriptModuleParties {

class ScriptParty {
public:
    // ScriptParty inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptParty inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::TypedStorage<8, 24, std::string>                    mPartyId;
    // NOLINTEND
};

} // namespace ScriptModuleParties
