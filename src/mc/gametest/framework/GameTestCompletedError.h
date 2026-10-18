#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/gametest/framework/GameTestCompletedErrorReason.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

#endif // @header-generator platform
namespace gametest {

struct GameTestCompletedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::gametest::GameTestCompletedErrorReason> type;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk67b4d9;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestCompletedError& operator=(GameTestCompletedError const&);
    GameTestCompletedError(GameTestCompletedError const&);
    GameTestCompletedError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestCompletedError(
        ::gametest::GameTestCompletedErrorReason type_,
        ::std::string const&                     gameTestName_,
        ::std::string const&                     methodName_
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gametest::GameTestCompletedErrorReason type_,
        ::std::string const&                     gameTestName_,
        ::std::string const&                     methodName_
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
