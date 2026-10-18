#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mPartyId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk24a2eb;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::TypedStorage<8, 24, std::string>                    mPartyId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk12b29b;
    ::ll::UntypedStorage<8, 8>  mUnk4ca2c1;
    ::ll::UntypedStorage<8, 32> mUnkd4b8bf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptParty& operator=(ScriptParty const&);
    ScriptParty(ScriptParty const&);
    ScriptParty();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
