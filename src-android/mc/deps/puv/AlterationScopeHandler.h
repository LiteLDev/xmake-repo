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
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*&> mRef;
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*>  mPrev;
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationScopeHandler& operator=(AlterationScopeHandler const&);
    AlterationScopeHandler(AlterationScopeHandler const&);
    AlterationScopeHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AlterationScopeHandler(::Puv::internal::AlterationNode const*&, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::internal::AlterationNode const*&, uint);
    // NOLINTEND
};

} // namespace Puv::internal
