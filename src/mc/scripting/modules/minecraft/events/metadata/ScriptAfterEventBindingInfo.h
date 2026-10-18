#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace ScriptModuleMinecraft {

struct ScriptAfterEventBindingInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>                       propertyName;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>> propertyReleases;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              signalName;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>> signalReleases;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>                         propertyName;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>> propertyReleases;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>              signalName;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>> signalReleases;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptAfterEventBindingInfo();
#else // @header-generator platform
    MCAPI ~ScriptAfterEventBindingInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
