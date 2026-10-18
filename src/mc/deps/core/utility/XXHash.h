#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct XXH_NAMESPACEXXH64_state_s;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 88> mState;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 88> mUnk1110b4;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        State& operator=(State const&);
        State(State const&);
#endif // @header-generator platform
        State();
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using Digest = ulong;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Util::XXHash::State>> mState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc97579;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
#endif // @header-generator platform
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit XXHash(ulong);
#else // @header-generator platform
    MCNAPI void _updateImpl(void const* input, uint64 length);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateImpl(void const*, ulong);

    MCNAPI ulong digest();

    MCNAPI void update(float);

    MCNAPI void update(uchar);

    MCNAPI void update(int);

    MCNAPI void update(uint);

    MCNAPI void update(bool);

    MCNAPI ~XXHash();
#else // @header-generator platform
    MCNAPI uint64 digest();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI static uint64 _hash64Impl(void const* input, uint64 len, uint64 seed);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util
