#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class DlcBatchModel;
class PersonaRepository;
// clang-format on

namespace persona {

class DlcImportTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>            mBatchModel;
    ::ll::UntypedStorage<8, 48>            mCallback;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPieceId;
    ::ll::UntypedStorage<8, 16>            mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcImportTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong const getIndex() const;

    MCNAPI ::mce::UUID const& getPackId() const;
    // NOLINTEND
};

} // namespace persona
