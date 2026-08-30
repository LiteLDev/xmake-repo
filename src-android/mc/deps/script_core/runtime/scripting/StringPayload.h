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
    ::ll::TypedStorage<8, 24, std::string> mScriptName;
    ::ll::TypedStorage<8, 24, std::string> mScriptData;
    // NOLINTEND

public:
    // prevent constructor by default
    StringPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StringPayload();

    virtual ::Scripting::ResultAny runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, std::optional<Scripting::Privilege>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StringPayload(std::string, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::ResultAny
    $runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, std::optional<Scripting::Privilege>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
