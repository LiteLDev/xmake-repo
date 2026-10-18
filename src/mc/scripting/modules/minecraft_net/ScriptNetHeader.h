#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/scripting/modules/server_admin/ScriptSecretString.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mKey;
    ::ll::UntypedStorage<8, 64>            mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkcef7b0;
    ::ll::UntypedStorage<8, 72> mUnkec2e98;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHeader& operator=(ScriptNetHeader const&);
    ScriptNetHeader(ScriptNetHeader const&);
    ScriptNetHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetHeader(
        ::std::string const&                                                         key,
        ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> value
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Bedrock::Http::HeaderCollection createHeaders(
        ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const&          userHeaders,
        ::std::optional<::std::unordered_map<::std::string, ::std::string>> const& configSessionHeaders
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& key, ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> value);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
