#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> _st;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _tt;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _last;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _max;
    ::ll::TypedStorage<4, 4, int> _count;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka98630;
    ::ll::UntypedStorage<8, 8>  mUnk81e7ba;
    ::ll::UntypedStorage<8, 8>  mUnkacd501;
    ::ll::UntypedStorage<8, 8>  mUnkec6ec1;
    ::ll::UntypedStorage<4, 4>  mUnkc4d592;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Stopwatch& operator=(Stopwatch const&);
#endif // @header-generator platform
    Stopwatch(Stopwatch const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Stopwatch();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Stopwatch();
#else // @header-generator platform
    virtual ~Stopwatch() = default;
#endif // @header-generator platform

    virtual double stop();

    virtual double stopContinue();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI double getLast();

    MCNAPI bool isReset() const;

    MCNAPI void reset();

    MCNAPI void start();

    MCNAPI double tick();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void print(::std::string const& prepend);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI double $stop();

    MCNAPI double $stopContinue();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $print(std::string const&);
#else // @header-generator platform
    MCNAPI void $print(::std::string const& prepend);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
