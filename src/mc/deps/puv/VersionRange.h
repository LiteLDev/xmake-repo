#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/RangeType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on
#endif // @header-generator platform

namespace Puv {

class VersionRange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mMin;
    ::ll::UntypedStorage<8, 24>    mMax;
    ::ll::TypedStorage<1, 1, bool> mLeftClosed;
    ::ll::TypedStorage<1, 1, bool> mRightClosed;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk1a868c;
    ::ll::UntypedStorage<8, 24> mUnk7084e3;
    ::ll::UntypedStorage<1, 1>  mUnkd68461;
    ::ll::UntypedStorage<1, 1>  mUnk9d6c21;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRange& operator=(VersionRange const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VersionRange(VersionRange const&);
#endif // @header-generator platform
    VersionRange();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VersionRange(::SemVersion const&, ::SemVersion const&, ::Puv::RangeType);
#else // @header-generator platform
    MCNAPI VersionRange(::SemVersion const& min, ::SemVersion const& max, ::Puv::RangeType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool contains(::SemVersion const&) const;
#else // @header-generator platform
    MCNAPI bool contains(::SemVersion const& v) const;
#endif // @header-generator platform

    MCNAPI ~VersionRange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SemVersion const&, ::SemVersion const&, ::Puv::RangeType);
#else // @header-generator platform
    MCNAPI void* $ctor(::SemVersion const& min, ::SemVersion const& max, ::Puv::RangeType type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
