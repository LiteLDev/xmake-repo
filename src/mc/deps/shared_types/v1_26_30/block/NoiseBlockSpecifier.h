#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct NoiseBlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                             mNoise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                           mNoise;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                    mThreshold;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                mRange;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_60::BlockSpecifier> mBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mBlock;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NoiseBlockSpecifier();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&) const;
#else // @header-generator platform
    MCAPI NoiseBlockSpecifier(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~NoiseBlockSpecifier();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::NoiseBlockSpecifier& operator=(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
