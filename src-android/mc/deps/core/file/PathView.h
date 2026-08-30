#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class PathView {
public:
    // PathView inner types declare
    // clang-format off
    struct Hash;
    struct path_view_less;
    // clang-format on

    // PathView inner types define
    struct Hash {};

    struct path_view_less {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mSrc;
    // NOLINTEND

public:
    // prevent constructor by default
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool containsRelativeOperator() const;

    MCNAPI ::Core::PathView& operator=(::Core::PathView&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathView const& EMPTY();
    // NOLINTEND
};

} // namespace Core
