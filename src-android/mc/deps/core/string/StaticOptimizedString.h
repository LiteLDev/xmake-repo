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
    ::ll::UntypedStorage<8, 8> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StaticOptimizedString(::Bedrock::StaticOptimizedString const&);

    MCNAPI void _set(char const*, ulong, ::Bedrock::StaticOptimizedString::StorageType);

    MCNAPI ulong length() const;

    MCNAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString const&);

    MCNAPI ::Bedrock::StaticOptimizedString& operator=(::Bedrock::StaticOptimizedString&&);

    MCNAPI ~StaticOptimizedString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::StaticOptimizedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
