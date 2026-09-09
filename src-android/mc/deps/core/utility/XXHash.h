#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XXH_NAMESPACEXXH64_state_s;
// clang-format on

namespace Util {

class XXHash {
public:
    // XXHash inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // XXHash inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        State();
    };

    using Digest = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Util::XXHash::State>> mState;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit XXHash(ulong);

    MCNAPI void _updateImpl(void const*, ulong);

    MCNAPI ulong digest();

    MCNAPI void update(float);

    MCNAPI void update(uchar);

    MCNAPI void update(int);

    MCNAPI void update(uint);

    MCNAPI void update(bool);

    MCNAPI ~XXHash();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong _hash64Impl(void const*, ulong, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util
