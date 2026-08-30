#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"

class CompositePacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IPacketLimitAlgorithm>>> mAlgorithms;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositePacketLimitAlgorithm();

    virtual std::unique_ptr<IPacketLimitAlgorithm> copy() const;

    virtual uint checkPacket(::MinecraftPacketIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<IPacketLimitAlgorithm> $copy() const;

    MCNAPI uint $checkPacket(::MinecraftPacketIds);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
