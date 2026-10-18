#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"

class CompositePacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IPacketLimitAlgorithm>>> mAlgorithms;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkbc306d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CompositePacketLimitAlgorithm& operator=(CompositePacketLimitAlgorithm const&);
    CompositePacketLimitAlgorithm(CompositePacketLimitAlgorithm const&);
#endif // @header-generator platform
    CompositePacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompositePacketLimitAlgorithm();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPacketLimitAlgorithm> copy() const;
#else // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~CompositePacketLimitAlgorithm() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPacketLimitAlgorithm> $copy() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $checkPacket(::MinecraftPacketIds);
#else // @header-generator platform
    MCNAPI uint $checkPacket(::MinecraftPacketIds packet);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
