#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mScriptName;
    ::ll::TypedStorage<8, 24, std::string> mScriptData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb38c70;
    ::ll::UntypedStorage<8, 32> mUnk6d1f1e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StringPayload& operator=(StringPayload const&);
    StringPayload(StringPayload const&);
#endif // @header-generator platform
    StringPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StringPayload();
#else // @header-generator platform
    virtual ~StringPayload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, std::optional<Scripting::Privilege>);
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StringPayload(std::string, std::string);
#else // @header-generator platform
    MCNAPI StringPayload(::std::string scriptName, ::std::string scriptData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string scriptName, ::std::string scriptData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
