#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Molang::details { class IInstruction; }
namespace Molang::details { class Program; }
namespace brstd { struct source_location; }
// clang-format on

namespace Molang::details {

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                                        mUsedRegCount;
    ::ll::TypedStorage<1, 1, bool>                                                         mStoreStackState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Molang::details::IInstruction>>> mDestProgram;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong allocateInstruction();

    MCNAPI void emplaceInstruction(std::unique_ptr<Molang::details::IInstruction>);

    MCNAPI void insertJumpWithMaddAtIndex(ulong, ulong, float, float, ::brstd::source_location);

    MCNAPI void popForEachScope(ulong);

    MCNAPI void popLoopScope(ulong);

    MCNAPI void pushLoopScope(ulong, ulong, ulong, ulong, ::brstd::source_location);

    MCNAPI void pushReturnValue(::brstd::source_location);

    MCNAPI void pushValue(float, ::brstd::source_location);

    MCNAPI void setReturnValue(float, ::brstd::source_location);

    MCNAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
