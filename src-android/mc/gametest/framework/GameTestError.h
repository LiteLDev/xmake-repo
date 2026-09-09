#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/gametest/framework/GameTestErrorContext.h"
#include "mc/gametest/framework/GameTestErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace gametest {

struct GameTestError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::gametest::GameTestErrorType>                  type;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                      params;
    ::ll::TypedStorage<4, 32, std::optional<gametest::GameTestErrorContext>> context;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestError(::gametest::GameTestErrorType, std::string const&);

    MCNAPI GameTestError(::gametest::GameTestErrorType, std::string const&, std::vector<std::string>);

    MCNAPI ~GameTestError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestErrorType, std::string const&);

    MCNAPI void* $ctor(::gametest::GameTestErrorType, std::string const&, std::vector<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
