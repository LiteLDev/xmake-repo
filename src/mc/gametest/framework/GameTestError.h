#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gametest/framework/GameTestErrorContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gametest/framework/GameTestErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace gametest { struct GameTestErrorContext; }
#endif // @header-generator platform
// clang-format on

namespace gametest {

struct GameTestError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::gametest::GameTestErrorType>                  type;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                      params;
    ::ll::TypedStorage<4, 32, std::optional<gametest::GameTestErrorContext>> context;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk7154fb;
    ::ll::UntypedStorage<8, 24> mUnk8f6cc9;
    ::ll::UntypedStorage<4, 32> mUnk5e1f8c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameTestError& operator=(GameTestError const&);
    GameTestError(GameTestError const&);
#endif // @header-generator platform
    GameTestError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameTestError(::gametest::GameTestErrorType, std::string const&);
#else // @header-generator platform
    MCNAPI GameTestError(
        ::gametest::GameTestErrorType type_,
        ::std::string const&          message_,
        ::std::vector<::std::string>  params_
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameTestError(::gametest::GameTestErrorType, std::string const&, std::vector<std::string>);

    MCNAPI ~GameTestError();
#else // @header-generator platform
    MCNAPI GameTestError(
        ::gametest::GameTestErrorType                     type_,
        ::std::string const&                              message_,
        ::std::vector<::std::string>                      params_,
        ::std::optional<::gametest::GameTestErrorContext> context_
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gametest::GameTestErrorType, std::string const&);
#else // @header-generator platform
    MCNAPI void*
    $ctor(::gametest::GameTestErrorType type_, ::std::string const& message_, ::std::vector<::std::string> params_);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gametest::GameTestErrorType, std::string const&, std::vector<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::gametest::GameTestErrorType                     type_,
        ::std::string const&                              message_,
        ::std::vector<::std::string>                      params_,
        ::std::optional<::gametest::GameTestErrorContext> context_
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace gametest
