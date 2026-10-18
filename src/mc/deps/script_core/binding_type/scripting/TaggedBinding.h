#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/Release.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class RemovedInMajorVersion; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> releases;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk1ec4ac;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TaggedBinding& operator=(TaggedBinding const&);
    TaggedBinding(TaggedBinding const&);
    TaggedBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::TaggedBinding& beta();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::TaggedBinding& release(::Scripting::Version, std::optional<Scripting::RemovedInMajorVersion>);
#else // @header-generator platform
    MCNAPI ::Scripting::TaggedBinding& onlyStable();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TaggedBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::Scripting::TaggedBinding& release(
        ::Scripting::Version                                inclusiveLowerVersion,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
