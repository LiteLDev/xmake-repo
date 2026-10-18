#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct JoinCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<int>> code;
    ::ll::TypedStorage<8, 8, ulong>             mStackIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI bool isFilled() const;

    MCNAPI int const& operator[](ulong) const;

    MCNAPI void pop_back();

    MCNAPI int& push_back(int);

    MCNAPI void reset();

    MCNAPI ulong size() const;

    MCNAPI std::string toString() const;

    MCNAPI ~JoinCode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EDUDiscovery::JoinCode createUnset(ulong);

    MCNAPI static ::EDUDiscovery::JoinCode fromString(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& UNUSED_ENTRY_VALUE();

    MCNAPI static ::EDUDiscovery::JoinCode const& invalid();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct JoinCode {};
#endif // @header-generator platform

} // namespace EDUDiscovery
