#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/scripting/Version.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

struct VersionRequestedBy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          version;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>          originalVersion;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor> requestedBy;
    ::ll::TypedStorage<1, 1, bool>                           supported;
    ::ll::TypedStorage<1, 1, bool>                           missing;
    ::ll::TypedStorage<1, 1, bool>                           explicitRequest;
    ::ll::TypedStorage<1, 1, bool>                           promotion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk143185;
    ::ll::UntypedStorage<8, 40> mUnkf3415b;
    ::ll::UntypedStorage<8, 96> mUnk460b40;
    ::ll::UntypedStorage<1, 1>  mUnk135d43;
    ::ll::UntypedStorage<1, 1>  mUnk7590a2;
    ::ll::UntypedStorage<1, 1>  mUnk39326b;
    ::ll::UntypedStorage<1, 1>  mUnk490f0f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestedBy& operator=(VersionRequestedBy const&);
    VersionRequestedBy(VersionRequestedBy const&);
    VersionRequestedBy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VersionRequestedBy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::Version,
        ::Scripting::Version,
        ::Scripting::ModuleDescriptor,
        bool,
        bool,
        bool,
        bool
#else // @header-generator platform
        ::Scripting::Version          version_,
        ::Scripting::Version          originalVersion,
        ::Scripting::ModuleDescriptor by_,
        bool                          supported_,
        bool                          missing_,
        bool                          explicitRequest_,
        bool                          promotion_
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::Scripting::Version, ::Scripting::Version, ::Scripting::ModuleDescriptor, bool, bool, bool, bool);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::Version          version_,
        ::Scripting::Version          originalVersion,
        ::Scripting::ModuleDescriptor by_,
        bool                          supported_,
        bool                          missing_,
        bool                          explicitRequest_,
        bool                          promotion_
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
