#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct LoaderConfig; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace cereal {

class StrictJsonLoader : public ::cereal::BasicLoader {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    StrictJsonLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StrictJsonLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrictJsonLoader(::cereal::ReflectionCtx const&, ::cereal::ResultCode, ::cereal::LoaderConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::ResultCode, ::cereal::LoaderConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
