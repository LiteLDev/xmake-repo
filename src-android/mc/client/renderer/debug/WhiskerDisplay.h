#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/MinecraftThreadQueryHelpers.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

class WhiskerDisplay {
public:
    // WhiskerDisplay inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // WhiskerDisplay inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 512, ::Bedrock::Profile::Whisker::MinecraftThreadQueryHelpers> mQueryHelpers;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<WhiskerDisplay::State>>> mState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WhiskerDisplay();

    MCNAPI void render(::ScreenContext&, ::IClientInstance&);

    MCNAPI ~WhiskerDisplay();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldDraw();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
