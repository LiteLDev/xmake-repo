#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Molang::details { class IInstruction; }
namespace Molang::details { class Program; }
#else // @header-generator platform
#endif // @header-generator platform
namespace brstd { struct source_location; }
// clang-format on

namespace Molang::details {

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                                        mUsedRegCount;
    ::ll::TypedStorage<1, 1, bool>                                                         mStoreStackState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Molang::details::IInstruction>>> mDestProgram;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk9b2202;
    ::ll::UntypedStorage<1, 1>  mUnkae9e01;
    ::ll::UntypedStorage<8, 24> mUnkbfb61c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&);
    MolangProgramBuildState(MolangProgramBuildState const&);
    MolangProgramBuildState();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong allocateInstruction();
#else // @header-generator platform
    MCNAPI uint64 allocateInstruction();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void emplaceInstruction(std::unique_ptr<Molang::details::IInstruction>);
#else // @header-generator platform
    MCNAPI void insertJumpWithMaddAtIndex(
        uint64                   instructionIndexToPutThisInstruction,
        uint64                   instructionToJumpTo,
        float                    mulValue,
        float                    addValue,
        ::brstd::source_location source
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void insertJumpWithMaddAtIndex(ulong, ulong, float, float, ::brstd::source_location);
#else // @header-generator platform
    MCNAPI void popForEachScope(uint64 instructionIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void popForEachScope(ulong);
#else // @header-generator platform
    MCNAPI void popLoopScope(uint64 instructionIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void popLoopScope(ulong);
#else // @header-generator platform
    MCNAPI void pushLoopScope(
        uint64                   loopScopeInitializationInstructionIndex,
        uint64                   loopRepeatLogicInstructionIndex,
        uint64                   loopCleanupInstructionIndex,
        uint64                   nextStatementIndex,
        ::brstd::source_location source
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pushLoopScope(ulong, ulong, ulong, ulong, ::brstd::source_location);
#else // @header-generator platform
    MCNAPI void pushReturnValue(::brstd::source_location source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pushReturnValue(::brstd::source_location);
#else // @header-generator platform
    MCNAPI void pushValue(float value, ::brstd::source_location source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void pushValue(float, ::brstd::source_location);

    MCNAPI void setReturnValue(float, ::brstd::source_location);

    MCNAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void setReturnValue(float value, ::brstd::source_location source);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
