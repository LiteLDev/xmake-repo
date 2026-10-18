#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolBlockTagPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructurePoolBlockTagPredicate() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::CompoundTag const&) const = 0;
#else // @header-generator platform
    virtual bool test(::Block const& block, ::CompoundTag const& tag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
