#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

class IBlockSourceFactoryAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IBlockSourceFactoryAdapter();
#else // @header-generator platform
    virtual ~IBlockSourceFactoryAdapter() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<VanillaSystems::IOwnedConstBlockSource> createBlockSource() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> createBlockSource() = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
