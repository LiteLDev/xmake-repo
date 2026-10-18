#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawTextInterface {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> rawtext;
    // NOLINTEND
#else // @header-generator platform
    // ScriptRawTextInterface inner types define
    using RawTextType = ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptRawTextInterface(::ScriptModuleMinecraft::ScriptRawTextInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawTextInterface const&) const;

    MCNAPI ~ScriptRawTextInterface();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>>>
        rawtext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptRawTextInterface const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
