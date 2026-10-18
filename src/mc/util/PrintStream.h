#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrintStream() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(std::string const&);
#else // @header-generator platform
    virtual void print(::std::string const& s);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void println(std::string const&);
#else // @header-generator platform
    MCNAPI void println(::std::string const& s);
#endif // @header-generator platform
    // NOLINTEND
};
