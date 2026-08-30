#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct ClientStoreEntryPointConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStoreId;
    ::ll::TypedStorage<8, 24, std::string> mStoreName;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MaxStoreIdLength();

    MCNAPI static ulong const& MaxStoreNameLength();
    // NOLINTEND
};

} // namespace ServerConfiguration
