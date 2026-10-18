#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                             mBeforeBatchFunction;
    ::ll::UntypedStorage<8, 48>                                                             mAfterBatchFunction;
    ::ll::TypedStorage<8, 24, std::string const>                                            mName;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestFunction>>> mTestFunctions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                            mBeforeBatchFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                            mAfterBatchFunction;
    ::ll::TypedStorage<8, 32, ::std::string const>                                                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>>> mTestFunctions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestBatch(::gametest::GameTestBatch&&);

    MCNAPI GameTestBatch(::gametest::GameTestBatch const&);

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI GameTestBatch(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );

#endif // @header-generator platform
    MCNAPI ~GameTestBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestBatch&&);

    MCNAPI void* $ctor(::gametest::GameTestBatch const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void* $ctor(
        ::std::string                                                      name,
        ::std::vector<::std::shared_ptr<::gametest::BaseGameTestFunction>> testFunctions,
        ::std::function<void()>                                            beforeBatchFunction,
        ::std::function<void()>                                            afterBatchFunction
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
