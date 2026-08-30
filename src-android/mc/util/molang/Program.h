#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangEvalParams;
struct MolangScriptArg;
namespace Molang::details { class IInstruction; }
// clang-format on

namespace Molang::details {

class Program {
public:
    // Program inner types declare
    // clang-format off
    struct UnpackedInstruction;
    // clang-format on

    // Program inner types define
    struct UnpackedInstruction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void (*)(::MolangEvalParams&, void*)> mCode;
        ::ll::TypedStorage<8, 8, ::Molang::details::IInstruction*>     mData;
        // NOLINTEND
    };

    using Func = void (*)(::MolangEvalParams&, void*);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mInstructionStorage;
    ::ll::TypedStorage<4, 4, uint>                     mInstructionCount;
    ::ll::TypedStorage<1, 1, bool>                     mStoreStackState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Program(std::vector<std::unique_ptr<Molang::details::IInstruction>>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<std::unique_ptr<Molang::details::IInstruction>>, bool);
    // NOLINTEND
};

} // namespace Molang::details
