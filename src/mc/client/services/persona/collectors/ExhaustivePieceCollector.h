#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/persona/collectors/IPieceCollector.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct CategoryQueryDocument; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class ExhaustivePieceCollector : public ::persona::IPieceCollector {
public:
    // prevent constructor by default
    ExhaustivePieceCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExhaustivePieceCollector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExhaustivePieceCollector(::persona::CategoryQueryDocument&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::CategoryQueryDocument&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ExhaustivePieceCollector {};
#endif // @header-generator platform

} // namespace persona
