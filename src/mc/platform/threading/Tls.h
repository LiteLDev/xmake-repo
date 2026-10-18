#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NonCopyable.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<void*>>                 mValues;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<void*>>               mValues;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Thread& operator=(Thread const&);
        Thread(Thread const&);
        Thread();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit Thread(::Bedrock::Threading::Detail::Tls*&);

        MCNAPI ~Thread();
#else // @header-generator platform
        MCAPI explicit Thread(::Bedrock::Threading::Detail::Tls*& tls);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Bedrock::Threading::Detail::Tls*&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void* $ctor(::Bedrock::Threading::Detail::Tls*& tls);
#endif // @header-generator platform
        // NOLINTEND
    };

    using Key = uint;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 24>           mSlots;
    ::ll::UntypedStorage<8, 24>           mThreads;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::brstd::bitset<1024, uint64>>> mSlots;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<
            ::Bedrock::Threading::Detail::Tls::Thread*,
            ::std::less<::Bedrock::Threading::Detail::Tls::Thread*>,
            ::std::vector<::Bedrock::Threading::Detail::Tls::Thread*>>>
        mThreads;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint allocate();
#else // @header-generator platform
    MCAPI uint allocate();

    MCAPI void free(uint key);

    MCAPI void registerThread(::Bedrock::Threading::Detail::Tls::Thread& thread);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading::Detail
