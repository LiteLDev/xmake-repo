#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { struct ContextId; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class WeakLifetimeScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference*> mRegistryRef;
    ::ll::TypedStorage<4, 4, uint>                                    mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc28ee3;
    ::ll::UntypedStorage<4, 4> mUnk42d11b;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope&&);

    MCNAPI bool operator==(::Scripting::WeakLifetimeScope const&) const;

    MCNAPI bool valid() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    WeakLifetimeScope& operator=(WeakLifetimeScope const&);
    WeakLifetimeScope(WeakLifetimeScope const&);
    WeakLifetimeScope();
#endif // @header-generator platform
};

} // namespace Scripting
