#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Packed.h"

namespace Bedrock {

class StaticOptimizedString {
public:
    // StaticOptimizedString inner types define
    enum class StorageType : int {
        Static  = 0,
        Dynamic = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::PackedPointer::Packed<char const, 1, 0>> mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StaticOptimizedString();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
    MCAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _set(char const*, ulong, ::Bedrock::StaticOptimizedString::StorageType);
#else // @header-generator platform
    MCAPI void _set(char const* data, uint64 length, ::Bedrock::StaticOptimizedString::StorageType storageType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong length() const;
#else // @header-generator platform
    MCAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString const&);

    MCNAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString&&);

    MCNAPI ~StaticOptimizedString();
#else // @header-generator platform
    MCAPI ~StaticOptimizedString();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::StaticOptimizedString const& other);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
