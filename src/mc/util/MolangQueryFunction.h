#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ExpressionNode;
#endif // @header-generator platform
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct MolangQueryFunction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                               mAccessor;
    ::ll::TypedStorage<8, 24, std::string>                    mDocumentation;
    ::ll::TypedStorage<8, 8, ulong>                           mMinArgumentCount;
    ::ll::TypedStorage<8, 8, ulong>                           mMaxArgumentCount;
    ::ll::TypedStorage<8, 24, std::vector<int>>               mExperiments;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>>
                                                              mAccessor;
    ::ll::TypedStorage<8, 32, ::std::string>                  mDocumentation;
    ::ll::TypedStorage<8, 8, uint64>                          mMinArgumentCount;
    ::ll::TypedStorage<8, 8, uint64>                          mMaxArgumentCount;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>             mExperiments;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mFunctionReturnType;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mFirstAvailableMolangVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mLastAvailableMolangVersion;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
