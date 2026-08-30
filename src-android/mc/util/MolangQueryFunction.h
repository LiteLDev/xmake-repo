#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct MolangQueryFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                               mAccessor;
    ::ll::TypedStorage<8, 24, std::string>                    mDocumentation;
    ::ll::TypedStorage<8, 8, ulong>                           mMinArgumentCount;
    ::ll::TypedStorage<8, 8, ulong>                           mMaxArgumentCount;
    ::ll::TypedStorage<8, 24, std::vector<int>>               mExperiments;
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mFunctionReturnType;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mFirstAvailableMolangVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mLastAvailableMolangVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangQueryFunction& operator=(MolangQueryFunction const&);
    MolangQueryFunction(MolangQueryFunction const&);
    MolangQueryFunction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MolangQueryFunction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
