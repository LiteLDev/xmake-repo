#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/Comparison.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/RemovedInMajorVersion.h"
#include "mc/deps/script_core/scripting/Version.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class RemovedInMajorVersion; }
namespace Scripting { struct Version; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

class Release {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Scripting::Comparison>                         comparison;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>                           version;
    ::ll::TypedStorage<2, 4, std::optional<Scripting::RemovedInMajorVersion>> exclusiveMajorVersionLimit;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkd7338f;
    ::ll::UntypedStorage<8, 40> mUnkf154f7;
    ::ll::UntypedStorage<2, 4>  mUnk63e5f1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Release& operator=(Release const&);
    Release(Release const&);
#endif // @header-generator platform
    Release();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool satisfies(::Scripting::Version const&) const;
#else // @header-generator platform
    MCNAPI Release(
        ::Scripting::Comparison                             comparison_,
        ::Scripting::Version                                version_,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit_
    );

    MCNAPI ~Release();
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
    MCNAPI static std::string_view const& PRE_RELEASE_TAG_ALPHA();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::Comparison                             comparison_,
        ::Scripting::Version                                version_,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit_
    );
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& PRE_RELEASE_TAG_BETA();

    MCNAPI static std::string_view const& PRE_RELEASE_TAG_INTERNAL();
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
