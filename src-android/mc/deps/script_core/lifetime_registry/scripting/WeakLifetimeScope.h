#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class WeakLifetimeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference*> mRegistryRef;
    ::ll::TypedStorage<4, 4, uint>                                    mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope&&);

    MCNAPI bool operator==(::Scripting::WeakLifetimeScope const&) const;

    MCNAPI bool valid() const;
    // NOLINTEND
};

} // namespace Scripting
