#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace mce {

class RendererDebugLayerOutputManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // RendererDebugLayerOutputManager inner types declare
    // clang-format off
    struct ErrorState;
    // clang-format on

    // RendererDebugLayerOutputManager inner types define
    struct ErrorState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mErrorCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RendererDebugLayerOutputManager::ErrorState> mCurrentErrorState;
    ::ll::TypedStorage<8, 48, std::deque<std::string>>                           mOutput;
    ::ll::TypedStorage<2, 2, ushort const>                                       mMaxErrorCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RendererDebugLayerOutputManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void debugMessageCallback(char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
