#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
// clang-format on
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> mTypeId;
        ::ll::TypedStorage<8, 8, ulong> mKey;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnke261b1;
        ::ll::UntypedStorage<8, 8> mUnka32892;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CacheLookupData& operator=(CacheLookupData const&);
        CacheLookupData(CacheLookupData const&);
        CacheLookupData();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::unordered_map<ulong, Scripting::ObjectHandle>>> mTypeIdNamesToCaches;
    ::ll::TypedStorage<8, 40, std::unordered_map<Scripting::ObjectHandle, Scripting::HandleCache::CacheLookupData>> mHandleToLookupData;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8ba42a;
    ::ll::UntypedStorage<8, 64> mUnk98778d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HandleCache& operator=(HandleCache const&);
    HandleCache(HandleCache const&);
    HandleCache();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _add(ulong, ulong, ::Scripting::ObjectHandle const&);
#else // @header-generator platform
    MCNAPI void _add(uint64 typeHash, uint64 keyHash, ::Scripting::ObjectHandle const& handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _remove(ulong, ulong);
#else // @header-generator platform
    MCNAPI void _remove(uint64 typeHash, uint64 keyHash);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ObjectHandle> _tryGetHandle(ulong, ulong) const;

    MCNAPI ~HandleCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::ObjectHandle> _tryGetHandle(uint64 typeHash, uint64 keyHash) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
