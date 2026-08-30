#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Stopwatch {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> _st;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _tt;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _last;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _max;
    ::ll::TypedStorage<4, 4, int> _count;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Stopwatch(Stopwatch const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Stopwatch();

    virtual double stop();

    virtual double stopContinue();

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI double $stop();

    MCNAPI double $stopContinue();

    MCNAPI void $print(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
