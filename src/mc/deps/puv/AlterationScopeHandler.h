#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct AlterationNode; }
// clang-format on

namespace Puv::internal {

struct AlterationScopeHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*&> mRef;
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*>  mPrev;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd5b277;
    ::ll::UntypedStorage<8, 8> mUnk48a1e1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationScopeHandler& operator=(AlterationScopeHandler const&);
    AlterationScopeHandler(AlterationScopeHandler const&);
    AlterationScopeHandler();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AlterationScopeHandler(::Puv::internal::AlterationNode const*&, uint);
#else // @header-generator platform
    MCNAPI AlterationScopeHandler(::Puv::internal::AlterationNode const*& node, uint id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Puv::internal::AlterationNode const*&, uint);
#else // @header-generator platform
    MCNAPI void* $ctor(::Puv::internal::AlterationNode const*& node, uint id);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv::internal
