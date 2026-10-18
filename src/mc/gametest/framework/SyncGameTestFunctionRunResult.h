#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gametest/framework/GameTestError.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on
#endif // @header-generator platform

namespace gametest {

class SyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 240, std::optional<gametest::GameTestError>> mError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 288> mUnkc3d536;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SyncGameTestFunctionRunResult& operator=(SyncGameTestFunctionRunResult const&);
    SyncGameTestFunctionRunResult(SyncGameTestFunctionRunResult const&);
#endif // @header-generator platform
    SyncGameTestFunctionRunResult();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SyncGameTestFunctionRunResult();
#else // @header-generator platform
    virtual bool isComplete() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isComplete() const;

    virtual std::optional<gametest::GameTestError> getError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> getError() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isComplete() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> $getError();
#else // @header-generator platform
    MCNAPI ::std::optional<::gametest::GameTestError> $getError();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
