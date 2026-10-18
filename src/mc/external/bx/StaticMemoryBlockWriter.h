#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/MemoryWriter.h"
#include "mc/external/bx/StaticMemoryBlock.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class StaticMemoryBlockWriter : public ::bx::MemoryWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::bx::StaticMemoryBlock> m_smb;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticMemoryBlockWriter() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForWriterI();

    MCNAPI static void** $vftableForSeekerI();
    // NOLINTEND
};
#else // @header-generator platform
class StaticMemoryBlockWriter {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
