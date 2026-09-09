#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NonCopyable.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"

namespace Bedrock::Threading::Detail {

class Tls {
public:
    // Tls inner types declare
    // clang-format off
    struct Thread;
    // clang-format on

    // Tls inner types define
    struct Thread : public ::Bedrock::NonCopyable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Threading::Detail::Tls*&> mTls;
        ::ll::TypedStorage<8, 24, std::vector<void*>>                 mValues;
        // NOLINTEND

    public:
        // prevent constructor by default
        Thread& operator=(Thread const&);
        Thread(Thread const&);
        Thread();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Thread(::Bedrock::Threading::Detail::Tls*&);

        MCNAPI ~Thread();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::Threading::Detail::Tls*&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using Key = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 24>           mSlots;
    ::ll::UntypedStorage<8, 24>           mThreads;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint allocate();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Detail
