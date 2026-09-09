#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/RangeType.h"

namespace Puv {

class VersionRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mMin;
    ::ll::UntypedStorage<8, 24>    mMax;
    ::ll::TypedStorage<1, 1, bool> mLeftClosed;
    ::ll::TypedStorage<1, 1, bool> mRightClosed;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRange& operator=(VersionRange const&);
    VersionRange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VersionRange(::SemVersion const&, ::SemVersion const&, ::Puv::RangeType);

    MCNAPI bool contains(::SemVersion const&) const;

    MCNAPI ~VersionRange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion const&, ::SemVersion const&, ::Puv::RangeType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
