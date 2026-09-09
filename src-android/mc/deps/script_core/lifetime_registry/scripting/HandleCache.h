#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"

namespace Scripting {

class HandleCache {
public:
    // HandleCache inner types declare
    // clang-format off
    struct CacheLookupData;
    // clang-format on

    // HandleCache inner types define
    struct CacheLookupData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mTypeId;
        ::ll::TypedStorage<8, 8, ulong> mKey;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unordered_map<ulong, Scripting::ObjectHandle>>> mTypeIdNamesToCaches;
    ::ll::TypedStorage<8, 40, std::unordered_map<Scripting::ObjectHandle, Scripting::HandleCache::CacheLookupData>> mHandleToLookupData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _add(ulong, ulong, ::Scripting::ObjectHandle const&);

    MCNAPI void _remove(ulong, ulong);

    MCNAPI std::optional<Scripting::ObjectHandle> _tryGetHandle(ulong, ulong) const;

    MCNAPI ~HandleCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
