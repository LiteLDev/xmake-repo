#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce::AlignmentHelper { template<typename T0, int T1> class AlignmentAllocator; }
// clang-format on

namespace mce {

class ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> constantBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantBufferConstantsBase();

    virtual void init() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantBufferConstantsBase();

    MCNAPI std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const& getBuffer() const;

    MCNAPI void setFromBytes(std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
