#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
// clang-format on

class ICommandOriginLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandOriginLoader() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> load(::CompoundTag const&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> load(::CompoundTag const& tag) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
