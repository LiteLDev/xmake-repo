#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/AxisAlignedLinear.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct Test : public ::br::worldgen::processors::PosRules::TestType {
public:
    // Test inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Type = std::
        variant<br::worldgen::processors::PosRules::AlwaysTrue, br::worldgen::processors::PosRules::AxisAlignedLinear>;
#else // @header-generator platform
    using Type = ::std::variant<
        ::br::worldgen::processors::PosRules::AlwaysTrue,
        ::br::worldgen::processors::PosRules::AxisAlignedLinear>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<br::worldgen::processors::PosRules::AlwaysTrue, br::worldgen::processors::PosRules::AxisAlignedLinear>> mData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::br::worldgen::processors::PosRules::AlwaysTrue,
            ::br::worldgen::processors::PosRules::AxisAlignedLinear>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Test(Test const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Test();
#else // @header-generator platform
    virtual bool test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const;
#else // @header-generator platform
    MCAPI bool $test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
