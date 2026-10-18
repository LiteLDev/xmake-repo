#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IVirtualAllocator.h"
#include "mc/platform/Result.h"

namespace Bedrock::Memory {

class VirtualAllocator_posix : public ::Bedrock::Memory::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Bedrock::Result<Bedrock::Memory::IVirtualAllocator::ReservationInfo, std::error_code> reserve(::Bedrock::Memory::IVirtualAllocator::Flags, void*, ulong, ulong);

    virtual ::Bedrock::Result<void, std::error_code> commit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, ulong, ulong, int);

    virtual ::Bedrock::Result<void, std::error_code> decommit(::Bedrock::Memory::IVirtualAllocator::Flags, void*, ulong);

    virtual ::Bedrock::Result<void, std::error_code> release(::Bedrock::Memory::IVirtualAllocator::Flags, void*, ulong);

    virtual ::Bedrock::Memory::IVirtualAllocator::Flags getDefaultFlags();
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Memory
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
