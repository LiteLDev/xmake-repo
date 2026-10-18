#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
// clang-format on

class IPositionalRandomFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPositionalRandomFactory();
#else // @header-generator platform
    virtual ~IPositionalRandomFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> forBlockPos(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> forString(std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& s) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
