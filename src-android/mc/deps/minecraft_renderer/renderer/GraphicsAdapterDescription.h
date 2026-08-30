#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct GraphicsAdapterDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDescription;
    ::ll::TypedStorage<4, 4, uint>         mVendorId;
    ::ll::TypedStorage<4, 4, uint>         mDeviceId;
    ::ll::TypedStorage<4, 4, uint>         mSubSysId;
    ::ll::TypedStorage<4, 4, uint>         mRevision;
    ::ll::TypedStorage<8, 8, ulong>        mDedicatedVideoMemory;
    ::ll::TypedStorage<8, 8, ulong>        mDedicatedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>        mSharedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>        mReservedVideoMemory;
    ::ll::TypedStorage<8, 24, std::string> mDriverVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsAdapterDescription& operator=(GraphicsAdapterDescription const&);
    GraphicsAdapterDescription(GraphicsAdapterDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GraphicsAdapterDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
