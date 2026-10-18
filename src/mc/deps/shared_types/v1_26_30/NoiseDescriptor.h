#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct NoiseDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mName;
    ::ll::TypedStorage<4, 4, int>                 mFirstOctave;
    ::ll::TypedStorage<8, 24, std::vector<float>> mAmplitudes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>        mName;
    ::ll::TypedStorage<4, 4, int>                   mFirstOctave;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mAmplitudes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NoiseDescriptor& operator=(NoiseDescriptor const&);
    NoiseDescriptor();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::NoiseDescriptor const&) const;
#else // @header-generator platform
    MCAPI NoiseDescriptor(::SharedTypes::v1_26_30::NoiseDescriptor const&);

    MCAPI ::SharedTypes::v1_26_30::NoiseDescriptor& operator=(::SharedTypes::v1_26_30::NoiseDescriptor&&);
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
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::v1_26_30::NoiseDescriptor const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
