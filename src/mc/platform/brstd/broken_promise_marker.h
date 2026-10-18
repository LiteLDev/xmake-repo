#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct broken_promise_marker : public ::std::exception {};
#else // @header-generator platform
struct broken_promise_marker : public ::std::exception {
public:
    // prevent constructor by default
    broken_promise_marker& operator=(broken_promise_marker const&);
    broken_promise_marker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* what() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI broken_promise_marker(::brstd::detail::broken_promise_marker const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::brstd::detail::broken_promise_marker const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $what() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace brstd::detail
