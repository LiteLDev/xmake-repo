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
    ::ll::UntypedStorage<8, 48>                                                             mBeforeBatchFunction;
    ::ll::UntypedStorage<8, 48>                                                             mAfterBatchFunction;
    ::ll::TypedStorage<8, 24, std::string const>                                            mName;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<gametest::BaseGameTestFunction>>> mTestFunctions;
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

    MCNAPI ~GameTestBatch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestBatch&&);

    MCNAPI void* $ctor(::gametest::GameTestBatch const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
