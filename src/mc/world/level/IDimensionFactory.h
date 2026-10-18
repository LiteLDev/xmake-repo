#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct DerivedDimensionArguments;
// clang-format on

class IDimensionFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDimensionFactory() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<Dimension> create(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::OwnerPtr<::Dimension> create(::std::string const& dimensionName) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeDimension(::Dimension&) const = 0;
#else // @header-generator platform
    virtual void initializeDimension(::Dimension& dimension) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionOwnerPtrFactory() = 0;
#else // @header-generator platform
    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionOwnerPtrFactory() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
