#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolActorPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructurePoolActorPredicate() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(std::string const&) const = 0;
#else // @header-generator platform
    virtual bool test(::std::string const& actor) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
